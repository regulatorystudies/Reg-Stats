from datetime import date
import json
from pathlib import Path
import re
import os
import sys
from pandas import DataFrame, merge

# Import customized functions
dir_path=os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, f'{dir_path}/../../py_funcs')
from party import *


class ProcessingError(Exception):
    """Error processing documents."""
    pass


def load_json(path: Path, file_name: str) -> dict | list:
    """Import data from .json format.

    Args:
        path (Path): Path of directory where file is located.
        file_name (str): Name of .json file (without file extension; e.g., "file_name").

    Returns:
        dict | list: JSON object.
    """        
    with open(path / f"{file_name}.json", "r", encoding="utf-8") as f:
        data = json.load(f)
    
    return data


def fix_url_stubs(data: dict | list, url_stem: str = r"https://www.gao.gov", key: str = "major_rule_report"):
    """Updates a rule's key, value pair to include a missing url domain.
    """
    if isinstance(data, dict):
        results = data.get("results")
    elif isinstance(data, list):
        results = data
    
    for rule in results:
        report = rule.get(key)
        if url_stem in report:
            continue
        else:
            rule.update({
                key: f"{url_stem}{report}"
                })
    
    return results


def extract_date(string: str):
    """Extract date from a string in a format similar to `datetime.time`.

    Args:
        string (str): Date represented as a string.

    Returns:
        datetime.date: Object in `datetime.date` format.
    """
    res = re.compile(r"\d{4}-\d{2}-\d{2}", re.I).match(string)
    
    if isinstance(res, re.Match):
        return date.fromisoformat(res[0])
    else:
        return None


def json_to_df(
        data: dict | list, 
        has_metadata: bool = True, 
        date_cols: list | tuple = ("effective", "received", "date_published_in_federal_register")):
    """Convert json object to pandas DataFrame and extract date information from select columns.

    Args:
        data (dict | list): Input data.
        has_metadata (bool, optional): If object contains metadata, grab data from the "results" key. Defaults to True.
        date_cols (list | tuple, optional): Columns containing date information. Defaults to ("effective", "received", "published").

    Returns:
        DataFrame: Output DataFrame containing date information.
    """
    if has_metadata:
        results = data.get("results")
    else:
        results = data
    
    df = DataFrame(results)
    
    bool_na = df.loc[:, "date_published_in_federal_register"].isna()
    print(f"Number of rules without publication date in Federal Register: {sum(bool_na)}")
    print("Note: This generally means the rule was not published in the Federal Register, so we use GAO's received date for such rules.")
    df.loc[bool_na, "date_published_in_federal_register"] = df["received"]
    
    # convert date columns to datetime.date format
    for col in date_cols:
        df.loc[:, f"{col}_dt"] = [extract_date(x) if isinstance(x, str) else x for x in df.loc[:, col]]
        df.loc[:, f"{col}_year"] = [x.year if isinstance(x, date) else x for x in df.loc[:, f"{col}_dt"]]
        df.loc[:, f"{col}_month"] = [x.month if isinstance(x, date) else x for x in df.loc[:, f"{col}_dt"]]
    
    # rename FR publication date column
    rename_cols = {c: f"published_{c.split('_')[-1]}" for c in df.columns if c.startswith("date_published_in_federal_register")}
    df = df.rename(columns=rename_cols, errors="ignore")
    
    return df


def find_duplicates(df: DataFrame, subset: tuple | list = ("fed_reg_number", "major_rule_report", )):
    """Identify duplicate rules, returning two datasets with unique and duplicated observations.

    Args:
        df (DataFrame): Input DataFrame.

    Returns:
        tuple[DataFrame, DataFrame]: DataFrame with unique observations, DataFrame with duplicated observations.
    """    
    df_copy = df.copy(deep=True)
    bool_dup = df_copy.duplicated(subset=list(subset), keep="first")
    df_uq, df_dup = df_copy.loc[~bool_dup, :], df_copy.loc[bool_dup, :]
    return df_uq, df_dup


def convert_to_presidential_year(df: DataFrame, date_col: str = "published"):
    """Convert calendar year to presidential year for selected column `date_col`.

    Args:
        df (DataFrame): Input data.
        date_col (str, optional): Date column in calendar years. Defaults to "published".

    Returns:
        DataFrame: Output data with new date column in presidential years.
    """
    df_copy = df.copy(deep=True)
    # create presidential year column
    df_copy['presidential_year'] = df_copy[f'{date_col}_year']
    bool_jan = df[f'{date_col}_month'] == 1
    df_copy.loc[bool_jan, 'presidential_year'] = df_copy.loc[bool_jan, f'{date_col}_year'] - 1
    return df_copy


def define_presidential_terms(
        df: DataFrame, 
        end_of_term: list | tuple = END_OF_ADMIN, 
        terms: dict = PRESIDENTIAL_ADMINS
    ):
    """Define columns with each president's party and final year in office (for presidents since Clinton).

    Args:
        df (DataFrame): Input data.
        end_of_term (list | tuple, optional): List-like of the final year of each presidential administration since Clinton. Defaults to END_OF_ADMIN.
        terms (dict, optional): Dictionary of each president's party and years in office. Defaults to PRESIDENTIAL_ADMINS.

    Returns:
        DataFrame: Data with new binary columns for "end_of_term" and "democratic_admin".
    """
    df_copy = df.copy(deep=True)
    df_copy.loc[:, "end_of_term"] = [1 if i in end_of_term else 0 for i in df_copy["presidential_year"]]
    party = [v.get("party") for v in terms.values() for y in v.get("years") if y in set(df_copy["presidential_year"])]
    df_copy.loc[:, "democratic_admin"] = [1 if p == "D" else 0 for p in party]
    return df_copy


def save_csv(df: DataFrame, path: Path, file_name: str, quietly: bool = False) -> None:
    """Save processed data in .csv format and prints file location.

    Args:
        df (DataFrame): .
        path (Path): Path of directory where file is located.
        file_name (str): Name of .json file (without file extension; e.g., "file_name").
    """        
    with open(path / f"{file_name}.csv", "w", encoding="utf-8") as f:
        df.to_csv(f, index=False, lineterminator="\n")
    
    if not quietly:
        print(f"Saved data to {path}.")


def groupby_year(
        df: DataFrame, 
        year_col: str = "published", 
        agg_col: str = "control_number", 
        agg_func: str = "nunique"
    ):
    """Use pandas `groupby()` to produce summaries of unique rules by year.

    Args:
        df (DataFrame): Input data.
        year_col (str, optional): Name of year column. Defaults to "published".
        agg_col (str, optional): Column to aggregate by year. Defaults to "control_number".
        agg_func (str, optional): Function for aggregating "agg_col" by "year_col". Defaults to "nunique".

    Returns:
        DataFrame: Grouped data.
    """
    grouped = df.groupby([f"{year_col}_year"]).agg({agg_col: agg_func}).reset_index()
    return grouped.rename(columns={agg_col: "major_rules"})


# TO DO: add groupby_agency() function
# df.groupby(["agency", "subagency"])["control_number"].agg("count")


def filter_partial_years(
        df: DataFrame, 
        year_column: str, 
        cutoff_presidential: str = "02-01", 
        cutoff_calendar: str = "01-01"
    ):
    """Remove partial year data from the processed output. For example, we do not want to publish partial 2024 data before the year is done.

    Args:
        df (DataFrame): Input data.
        year_column (str): Column containing the year information.
        cutoff_presidential (str, optional): MM-DD indicating the beginning of each presidential year. Defaults to "02-01".
        cutoff_calendar (str, optional): MM-DD indicating the beginning of each calendar year. Defaults to "01-01".

    Returns:
        DataFrame: Filtered data without a trailing partial year.
    """    
    this_day = date.today()
    this_year = this_day.year
    presidential_year_cutoff = date.fromisoformat(f"{this_year}-{cutoff_presidential}")
    calendar_year_cutoff = date.fromisoformat(f"{this_year}-{cutoff_calendar}")
    exclude_years = []
    if this_day >= presidential_year_cutoff:
        # drop this_year
        exclude_years.append(this_year)
    elif calendar_year_cutoff <= this_day < presidential_year_cutoff:
        # drop this_year - 1
        exclude_years.extend([this_year, this_year - 1])
    else:
        # don't drop anything
        pass
    bool_ = [True if f"{i}" not in (f"{y}" for y in exclude_years) else False for i in df.loc[:, year_column].to_list()]
    return df.loc[bool_]


def process_data(
        data_path: Path, 
        root_path: Path, 
        data_file: str = "rule_detail_major", 
        filter_partial_year: bool = True, 
        quietly: bool = True,
    ) -> None:
    """Text-based interface for running the data processing pipeline. 
    Operates within a `while True` loop that doesn't break until it receives valid inputs.

    Args:
        data_path (Path): Path to the data files.
        root_path (Path): Path to root folder for major rules.
        data_file (str, optional): File containing the rule detail data. Defaults to "rule_detail_major".
    """    
    # call processing pipeline
    print("Processing retrieved data on major rules.")
    data = load_json(data_path, data_file)    
    df = json_to_df(data)
    df, df_dup = find_duplicates(df)
    if not quietly:
        print(f"\nRemoved {len(df_dup)} duplicates.")
    timeframe = ("received", "published")
    dfs = []
    for tf in timeframe:
        df_pres = df.copy(deep=True)
        df_pres = convert_to_presidential_year(df_pres, date_col = tf)
        grouped = groupby_year(df_pres, year_col = "presidential")
        output = define_presidential_terms(grouped).rename(columns={"major_rules": f"major_rules_{tf}"})
        dfs.append(output)
    output = merge(
        dfs[0], dfs[1], 
        on=["presidential_year", "end_of_term", "democratic_admin"], 
        suffixes=timeframe, 
        validate="1:1"
        )
    sort_cols = ["presidential_year", "end_of_term", "democratic_admin"] + [c for c in output.columns if "major_rules" in f"{c}"]
    output = output.loc[:, sort_cols]
    received_sum = output["major_rules_received"].sum()
    published_sum = output["major_rules_published"].sum()
    if received_sum != published_sum:
        raise ProcessingError(f"Sum of documents received ({received_sum}) and published ({published_sum}) do not match.")
    
    if filter_partial_year:
        output = filter_partial_years(output, "presidential_year")
    print(f"\nAggregated data by presidential year:", output, sep="\n")
    save_csv(output, root_path, f"major_rules_by_presidential_year")


if __name__ == "__main__":
    
    # profile time elapsed
    import time
    start = time.process_time()

    p = Path(__file__)
    major_path = p.parents[1]
    data_path = major_path.joinpath("raw_data")
    if not data_path.is_dir():
        print("Cannot locate data.")

    process_data(data_path, major_path, filter_partial_year=True)
    
    # calculate time elapsed
    stop = time.process_time()
    print(f"CPU time: {stop - start:0.1f} seconds")
