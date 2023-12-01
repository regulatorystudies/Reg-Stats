from datetime import date
import json
from pathlib import Path
import re

from pandas import DataFrame, to_datetime


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


def extract_date(string):
    
    res = re.compile("\d{4}-\d{2}-\d{2}", re.I).match(string)
    
    if isinstance(res, re.Match):
        return date.fromisoformat(res[0])
    else:
        return None


def json_to_df(
        data: dict | list, 
        has_metadata: bool = True, 
        date_cols: list | tuple = ("effective", "received", "published")):
    
    if has_metadata:
        results = data.get("results")
    else:
        results = data
    
    df = DataFrame(results)
    
    # convert date columns to datetime.date format
    for col in date_cols:
        df.loc[:, f"{col}_dt"] = [extract_date(x) if isinstance(x, str) else x for x in df.loc[:, col]]
        df.loc[:, f"{col}_year"] = [x.year if isinstance(x, date) else x for x in df.loc[:, f"{col}_dt"]]
        df.loc[:, f"{col}_month"] = [x.month if isinstance(x, date) else x for x in df.loc[:, f"{col}_dt"]]
    
    return df


def convert_to_presidential_year(df, date_col: str = "published"):
    # create presidential year column
    df['presidential_year'] = df[f'{date_col}_year']
    bool_jan = df[f'{date_col}_month'] == 1
    df.loc[bool_jan, 'presidential_year'] = df.loc[bool_jan, f'{date_col}_year'] - 1
    
    # return dataframe
    return df


def save_csv(df: DataFrame, path: Path, file_name: str):
    """Save processed data in .csv format.

    Args:
        df (DataFrame): .
        path (Path): Path of directory where file is located.
        file_name (str): Name of .json file (without file extension; e.g., "file_name").

    Returns:
        dict | list: JSON object.
    """        
    with open(path / f"{file_name}.csv", "w", encoding="utf-8") as f:
        df.to_csv(f, index=False, lineterminator="\n")
    
    print(f"Saved data to {path}.")


def groupby_year(df: DataFrame, 
                 year_col: str = "published", 
                 agg_col: str = "control_number", 
                 agg_func: str = "count"):    
    grouped = df.groupby([f"{year_col}_year"]).agg({agg_col: agg_func}).reset_index()
    return grouped.rename(columns={agg_col: "major_rules"})


# df.groupby(["agency", "subagency"])["control_number"].agg("count")


if __name__ == "__main__":
    
    # profile time elapsed
    import time
    start = time.process_time()

    p = Path(__file__)
    major_path = p.parents[1]
    data_path = major_path.joinpath("raw_data")
    if not data_path.is_dir():
        print("Cannot locate data.")

    
    #ismajor = True
    
    data_file = "rule_detail_major"
    data = load_json(data_path, data_file)    
    df = json_to_df(data)
    df = convert_to_presidential_year(df, "received")
    grouped = groupby_year(df, year_col = "presidential")
    save_csv(grouped, major_path, "major_rules_year_test")

    
    
    # calculate time elapsed
    stop = time.process_time()
    print(f"CPU time: {stop - start:0.1f} seconds")
