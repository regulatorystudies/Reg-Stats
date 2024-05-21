from datetime import date
from pathlib import Path

from dateutil.parser import parse
from numpy import array
from pandas import DataFrame, read_csv, merge

from cradb.process_data import (
    load_json, 
    json_to_df, 
    find_duplicates, 
    save_csv, 
    )

def get_gao_data(path: Path, file_name: str = "rule_detail_major", keep_after: date | str | None = None):
    # call processing pipeline
    print("Processing retrieved data on major rules.")
    data = load_json(path, file_name)
    df = json_to_df(data)
    df, df_dup = find_duplicates(df, subset=["fed_reg_number", "major_rule_report"])
    print(f"Removed {len(df_dup)} duplicates.")
    df = df.rename(columns={"fed_reg_number": "citation"})
    df.loc[:, "major"] = 1
    # keep after date
    if keep_after is not None:
        try:
            df = _keep_after(df, "published_dt", keep_after)
        except KeyError:
            df = _keep_after(df, "published_date", keep_after)
    return df


def get_fr_data(path: Path, file_name: str = "fr_tracking.csv", keep_after: date | str | None = None):
    df = read_csv(path / file_name, encoding="latin")     
    df.loc[:, "publication_date"] = df["publication_date"].apply(lambda x: parse(x).date())
    if keep_after is not None:
        df = _keep_after(df, "publication_date", keep_after)
    return df
    

def merge_data(left_df: DataFrame, right_df: DataFrame, on: str = "citation"):
    if sum(left_df[on].isna()) > 0:
        left_df = left_df.loc[left_df[on].notna()]    
    df = merge(left_df, right_df, on=on, how="outer", validate="1:m", indicator=True)
    df = _merge_dates(df)    
    return df


def _keep_after(df, column, after_date: str | date):
    if isinstance(after_date, str):
        after_date = date.fromisoformat(after_date)
    elif isinstance(after_date, date):
        pass
    else:
        raise TypeError("Parameter 'after_date' must be type `str` or `datetime.date`.")
    return df.loc[df[column] >= after_date]

def _merge_dates(df, date_cols = ("publication_date", "published_dt")):
    
    bool_left = df[date_cols[0]].isna()
    bool_right = df[date_cols[1]].isna()
    df.loc[(bool_left & ~bool_right), "date"] = df.loc[(bool_left & ~bool_right), date_cols[1]]
    df.loc[(~bool_left & bool_right), "date"] = df.loc[(~bool_left & bool_right), date_cols[0]]
    df.loc[(~bool_left & ~bool_right), "date"] = df.loc[(~bool_left & ~bool_right), date_cols[0]]
    return df


if __name__ == "__main__":
    
    # set paths
    p = Path(__file__)
    gao_data_path = p.parent.joinpath("raw_data")
    tracking_data_path = p.parents[1].joinpath("fr_tracking")
    
    # get data
    start_date = "2024-04-01"
    df1 = get_gao_data(gao_data_path, keep_after=start_date)
    df2 = get_fr_data(tracking_data_path, keep_after=start_date)
    
    # merge data
    merged = merge_data(df1, df2)
    keep_cols = [
        'control_number', 'citation', 'major_rule_report', 'url', 'date', 
        'published_dt', 'published_year', 'published_month',
        'publication_date', 'department', 'agency_y',
        'independent_reg_agency', 'document_number', 
        'significant', 'econ_significant', '3(f)(1) significant', 'major', 'Major',
        'html_url', '_merge', 
        ]

    # data for analysis
    bool_end = merged["date"] <= date(2024, 4, 30)
    df = merged.loc[bool_end, keep_cols]
    print(len(df))
    print(df.loc[df["_merge"] != "left_only"].head())
