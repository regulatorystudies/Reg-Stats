from datetime import date
import json
from pathlib import Path
import re

from pandas import DataFrame, Categorical, to_datetime
from numpy import array
from fr_toolbelt.preprocessing import process_documents, INDEPENDENT_REG_AGENCIES, AgencyMetadata

from filter_documents import filter_corrections

# set file paths
p = Path(__file__)
MAIN_DIR = p.parents[1]  # main folder for Reg Stats chart; store output data here
FINAL_YEAR = date.today().year - 1
DOC_TYPES = ("RULE", "PRORULE")
KEEP_AGENCIES = (
    'financial-stability-oversight-council', 
    'national-credit-union-administration', 
    'general-services-administration', 
    'management-and-budget-office', 
    'federal-financial-institutions-examination-council', 
    'equal-employment-opportunity-commission', 
    'international-trade-commission', 
    'social-security-administration', 
    'federal-housing-finance-board', 
    'executive-office-of-the-president', 
    'personnel-management-office', 
    'science-and-technology-policy-office', 
    'small-business-administration', 
    'environmental-protection-agency', 
    'federal-acquisition-regulation-system', 
    'agency-for-international-development', 
    'national-aeronautics-and-space-administration', 
    )


def read_json(path: Path, file: str):
    with open(path / file, "r", encoding="utf-8") as f:
        documents = json.load(f)
    try:
        return documents.get("results")
    except AttributeError:
        return documents


def format_documents(documents: list[dict], as_categorical: bool = False):
    # process
    results = process_documents(
        documents, 
        which=("agencies", "presidents"), 
        #return_format="short_name", 
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
    
    # explode parent agency column
    df_long = df.explode(column="parent_slug", ignore_index=True)
    
    # agencies as categorical
    if as_categorical:
        cat_col = "parent_slug"
        cats = sorted(set(a for a in df_long.loc[:, cat_col].to_numpy() if isinstance(a, str)))
        df_long.loc[:, cat_col] = Categorical(df_long.loc[:, cat_col], categories=cats)
    
    return df_long


def get_agency_schema(keep_list: list[str] = None, keep_pattern: str = None):
    if keep_list is None:
        keep_list = []
    
    if keep_pattern is None:
        keep_pattern = r".*"
    
    re_pattern = re.compile(keep_pattern, re.I)
    agency_metadata = AgencyMetadata()
    metadata, schema = agency_metadata.get_agency_metadata()
    schema = [a for a in schema if (a in keep_list) or (re_pattern.search(a) is not None)]
    return metadata, schema


def filter_agencies(df: DataFrame, schema: list, agency_column: str = "parent_slug"):
    bool_filter = [True if a in schema else False for a in df.loc[:, agency_column].to_numpy()]
    return df.loc[bool_filter]


def get_agency_acronyms(df: DataFrame, metadata: dict, agency_column: str = "parent_slug"):
    return df.loc[:, agency_column].apply(lambda x: metadata.get(x, {}).get("short_name"))
    

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
            #observed=False, 
            dropna=True, 
            ).agg("count")  #.reset_index()
    if return_column is not None:
        grouped_df = grouped_df.rename(columns = {value_column: return_column})
    return grouped_df


def main(
        path: Path, 
        final_year = int,
    ) -> DataFrame:
    
    api_dir = path.joinpath("_api")
    metadata, schema = get_agency_schema(keep_list=list(KEEP_AGENCIES) + list(INDEPENDENT_REG_AGENCIES), keep_pattern=r"department")
    
    df_list = []
    doctypes = {"RULE": "final_rules", "PRORULE": "proposed_rules"}
    for doctype, fieldname in doctypes.items():
        file = f"documents_endpoint_{doctype}_1995_{final_year}.json"
        documents = read_json(api_dir, file)
        df = format_documents(documents)
        df, _ = filter_corrections(df)
        df = filter_agencies(df, schema)
        df = group_documents(df, group_columns=["parent_slug", "presidential_year"], return_column=fieldname)
        df_list.append(df)
    
    # join dataframes: non-corrections
    dfPrez: DataFrame = df_list[0].merge(df_list[1], on=["parent_slug", "presidential_year"], how="outer", validate="1:1")
    bool_1994 = dfPrez.loc[:, "presidential_year"] == 1994
    dfPrez = dfPrez.loc[~bool_1994]  # drop partial data from 1994 presidential year
    df_years = DataFrame({
        "presidential_year": list(range(1995, final_year + 1)), 
        "placeholder": 0, 
        })
    dfPrez = dfPrez.merge(
        df_years, 
        on="presidential_year", 
        how="outer", 
        validate="m:1").sort_values(
            ["parent_slug", "presidential_year"], 
            ignore_index=True, 
            kind="stable"
            ).drop(columns="placeholder")
    dfPrez.loc[:, "acronym"] = get_agency_acronyms(dfPrez, metadata)
    value_cols = list(doctypes.values())
    dfPrez[value_cols] = dfPrez[value_cols].fillna(0).astype("int64")
    dfPrez = dfPrez.rename(columns={"parent_slug": "agency"})
    cols = ["agency", "acronym", "presidential_year", "final_rules", "proposed_rules"]
    return dfPrez.loc[:, cols]


if __name__ == "__main__":

    df = main(MAIN_DIR, FINAL_YEAR)
    print(df.loc[df["acronym"] == "OSHRC", :].head(20))
    df.to_csv(MAIN_DIR / "agency_federal_register_rules_by_presidential_year.csv", index=False)
