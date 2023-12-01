from datetime import date
import json
from pathlib import Path
import re

from pandas import DataFrame


END_OF_ADMIN = (2000, 2008, 2016, 2020)
PRESIDENTIAL_ADMINS = {
    "Clinton": {
        "party": "D", 
        "years": range(1992, 2001)
        }, 
    "Bush": {
        "party": "R", 
        "years": range(2001, 2009)
        },
    "Obama": {
        "party": "D", 
        "years": range(2009, 2017)
        },
    "Trump": {
        "party": "R", 
        "years": range(2017, 2021)
        },
    "Biden": {
        "party": "D", 
        "years": range(2021, 2025)
        }    
    }


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
        terms: dict = PRESIDENTIAL_ADMINS):
    """_summary_

    Args:
        df (DataFrame): _description_
        end_of_term (list | tuple, optional): _description_. Defaults to END_OF_TERM.
        terms (dict, optional): _description_. Defaults to PRESIDENTIAL_TERMS.

    Returns:
        _type_: _description_
    """
    df_copy = df.copy(deep=True)
    df_copy.loc[:, "end_of_term"] = [1 if i in end_of_term else 0 for i in df_copy["presidential_year"]]
    party = [v.get("party") for v in terms.values() for y in v.get("years") if y in set(df_copy["presidential_year"])]
    df_copy.loc[:, "democratic_admin"] = [1 if p == "D" else 0 for p in party]
    return df_copy


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
                 agg_func: str = "nunique"):    
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

while True:
    
    # print prompts to console
    major_prompt = input("Process only major rules? [yes/no]: ").lower()
    
    # check user inputs
    y_inputs = ["y", "yes", "true"]
    n_inputs = ["n", "no", "false"]
    valid_inputs = y_inputs + n_inputs
    if major_prompt in valid_inputs:
        
        # set major_only param
        if major_prompt.lower() in y_inputs:
            major_only = True
            data_file = "rule_detail_major"
        elif major_prompt.lower() in n_inputs:
            major_only = False
            data_file = "rule_detail_all"

        # call processing pipeline
        data = load_json(data_path, data_file)    
        df = json_to_df(data)
        df = convert_to_presidential_year(df, "received")
        grouped = groupby_year(df, year_col = "presidential")
        output = define_presidential_terms(grouped)
        print("Aggregated data:", output, sep="\n")
        save_csv(output, major_path, "major_rules_received_year_test")
        break

    else:
        print(f"Invalid input. Must enter one of the following: {', '.join(valid_inputs)}.")
 
    # calculate time elapsed
    stop = time.process_time()
    print(f"CPU time: {stop - start:0.1f} seconds")
