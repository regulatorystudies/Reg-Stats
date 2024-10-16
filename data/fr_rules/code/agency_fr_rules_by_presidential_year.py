from datetime import date
import json
from pathlib import Path
import re

from pandas import DataFrame, to_datetime, merge, MultiIndex
from numpy import array
from fr_toolbelt.preprocessing import process_documents, AgencyMetadata

from filter_documents import filter_corrections

# set constants
p = Path(__file__)
MAIN_DIR = p.parents[1]  # main folder for Reg Stats chart; store output data here
FINAL_YEAR = date.today().year - 1
DOC_TYPES = ("RULE", "PRORULE", )


def read_json(path: Path, file: str):
    with open(path / file, "r", encoding="utf-8") as f:
        documents = json.load(f)
    try:
        return documents.get("results")
    except AttributeError:
        return documents


def format_documents(documents: list[dict], agency_column: str):
    # process
    results = process_documents(
        documents, 
        which=("agencies", "presidents"), 
        return_format=("slug", ), #"short_name"), 
        return_values_as_str=False, 
        )
    
    # create dataframe
    df = DataFrame(results)
    
    # convert publication date to datetime format
    df["publication_dt"] = to_datetime(df["publication_date"])

    # create year column
    df["publication_year"] = df.apply(lambda x: x["publication_dt"].year, axis=1)
    df["publication_month"] = df.apply(lambda x: x["publication_dt"].month, axis=1)
    
    # create presidential year column
    df["presidential_year"] = df["publication_year"]
    bool_jan = array(df["publication_month"] == 1)
    df.loc[bool_jan, "presidential_year"] = df.loc[bool_jan, "publication_year"] - 1
    
    # explode agency column
    df_long = df.explode(column=agency_column, ignore_index=True)
    
    #print(df_long.columns)
    return df_long


def group_documents(
        df: DataFrame, 
        group_columns: list, 
        value_column: str = "document_number", 
        return_column: str = None):
    """Group Federal Register documents by presidential year. 
    A [presidential year](https://regulatorystudies.columbian.gwu.edu/reg-stats) is defined as Feb. 1 to Jan. 31.

    Args:
        df (DataFrame): Input data for grouping.
        return_column (str): Name of grouped column to return.

    Returns:
        DataFrame: Documents grouped by presidential year.
    """
    grouped_df = df.loc[:, 
        group_columns + [value_column], 
        ].groupby(
            group_columns, 
            as_index=False, 
            observed=False, 
            dropna=True, 
            ).agg("count")  #.reset_index()
    if return_column is not None:
        grouped_df = grouped_df.rename(columns = {value_column: return_column})
    return grouped_df


def get_agencies_by_pattern(keep_pattern: str = None):
    if keep_pattern is None:
        keep_pattern = r".*"
    
    re_pattern = re.compile(keep_pattern, re.I)
    agency_metadata = AgencyMetadata()
    _, schema = agency_metadata.get_agency_metadata()
    filtered = [a for a in schema if (re_pattern.search(a) is not None)]
    return filtered


def get_agency_metadata_values(df: DataFrame, metadata: dict, agency_column: str, key: str):
    return df.loc[:, agency_column].apply(lambda x: metadata.get(x, {}).get(key))


def _get_metadata_value(slug: str, metadata: dict, key: str):
    return metadata.get(slug, {}).get(key)


def _get_slug(id: int, metadata: dict) -> str | None:
    return next((k for k in metadata.keys() if f"{metadata.get(k).get('id')}" == f"{id}"), None)


def get_parent_agency(df: DataFrame, metadata: dict, agency_column: str):
    parent_ids = [
        _get_metadata_value(x, metadata, key="parent_id") 
        if _get_metadata_value(x, metadata, key="parent_id") is not None 
        else _get_metadata_value(x, metadata, key="id") 
        for x in df.loc[:, agency_column].to_numpy()
        ]
    return [_get_slug(id, metadata) for id in parent_ids]


def filter_agencies(df: DataFrame, keep: list | tuple | str, agency_column: str = "parent_slug"):
    if isinstance(keep, str):
        keep = [keep]
    bool_filter = [True if a in keep else False for a in df.loc[:, agency_column].to_numpy()]
    return df.loc[bool_filter]


def ensure_all_years_in_index(df: DataFrame, agency_column: str, year_column: str = "presidential_year"):    
    # reference: https://stackoverflow.com/a/43816881
    mux = MultiIndex.from_product([
        df[agency_column].unique(),
        range(df["presidential_year"].min(), df["presidential_year"].max() + 1)
    ], names=[agency_column, year_column])
    return df.set_index([agency_column, year_column]).reindex(mux).reset_index()


def main(
        path: Path, 
        final_year: int, 
        agency_column: str, 
        group_columns: list | None = None,
        keep_agencies: list | tuple | str | None = None, 
    ) -> DataFrame:
    
    if group_columns is None:
        group_columns = [agency_column, "presidential_year"]
    
    api_dir = path.joinpath("_api")
    
    agency_metadata = AgencyMetadata()
    metadata, _ = agency_metadata.get_agency_metadata()
    
    df_list = []
    doctypes = {"RULE": "final_rules", "PRORULE": "proposed_rules"}
    for doctype, fieldname in doctypes.items():
        file = f"documents_endpoint_{doctype}_1995_{final_year}.json"
        documents = read_json(api_dir, file)
        df = format_documents(documents, agency_column=agency_column)
        df, _ = filter_corrections(df)
        if keep_agencies is not None:
            df = filter_agencies(df, keep_agencies, agency_column=agency_column)
        df = group_documents(df, group_columns=group_columns, return_column=fieldname)
        df_list.append(df)
    
    # join dataframes: non-corrections
    dfPrez = merge(df_list[0], df_list[1], on=group_columns, how="outer", validate="1:1")
    bool_1994 = dfPrez.loc[:, "presidential_year"] == 1994
    dfPrez = dfPrez.loc[~bool_1994]  # drop partial data from 1994 presidential year
    dfPrez = ensure_all_years_in_index(dfPrez, agency_column=agency_column)
    dfPrez.loc[:, "acronym"] = get_agency_metadata_values(dfPrez, metadata, agency_column, "short_name")
    dfPrez.loc[:, "name"] = get_agency_metadata_values(dfPrez, metadata, agency_column, "name")
    if "parent_" not in agency_column:
        dfPrez.loc[:, "parent_agency"] = get_parent_agency(dfPrez, metadata, agency_column)
    value_cols = list(doctypes.values())
    dfPrez[value_cols] = dfPrez[value_cols].fillna(0).astype("int64")
    dfPrez = dfPrez.rename(
        columns={
            "parent_slug": "parent_agency", 
            "subagency_slug": "subagency", 
            "agency_slugs": "agency", 
            }, 
        errors="ignore")
    sort_columns = ["parent_agency", "agency", "presidential_year"]
    dfPrez = dfPrez.sort_values([c for c in sort_columns if c in dfPrez.columns], ignore_index=True, kind="stable")
    cols = ("parent_agency", "subagency", "agency", "acronym", "name", "presidential_year", "final_rules", "proposed_rules")
    return dfPrez.loc[:, [c for c in cols if c in dfPrez.columns]]


if __name__ == "__main__":
    
    df = main(MAIN_DIR, FINAL_YEAR, agency_column="parent_slug")
    df.to_csv(MAIN_DIR / "agency_federal_register_rules_by_presidential_year.csv", index=False)
