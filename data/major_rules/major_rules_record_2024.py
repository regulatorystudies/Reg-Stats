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
    
    if keep_after is not None:
        if isinstance(keep_after, str):
            keep_after = parse(keep_after).date()
        df = df.loc[df["publication_date"] >= keep_after]
    
    return df


def get_fr_data(path: Path, file_name: str = "fr_tracking.csv", keep_after: date | str | None = None):
    
    df = read_csv(path / file_name, encoding="latin")
            
    df.loc[:, "publication_date"] = df["publication_date"].apply(lambda x: parse(x).date())
    if keep_after is not None:
        if isinstance(keep_after, str):
            keep_after = parse(keep_after).date()
        df = df.loc[df["publication_date"] >= keep_after]
    
    return df
    

def merge_data(left_df: DataFrame, right_df: DataFrame, on: str = "citation"):
    
    if sum(left_df[on].isna()) > 0:
        left_df = left_df.loc[left_df[on].notna()]
    
    df = merge(left_df, right_df, on=on, how="outer", validate="1:m", indicator=True)
    return df  #.loc[df["_merge"] != "both"]


def _keep_after(df, column, after_date: str | date):
    if isinstance(after_date, str):
        after_date = date.fromisoformat(after_date)
    elif isinstance(after_date, date):
        pass
    return df.loc[df[column] >= after_date]


if __name__ == "__main__":
    
    p = Path(__file__)
    gao_data_path = p.parent.joinpath("raw_data")
    tracking_data_path = p.parents[1].joinpath("fr_tracking")
    
    df = get_gao_data(gao_data_path)
    #print(df.columns)
    #print(df["citation"].value_counts(dropna=False))
    #print(len(df.loc[df["citation"].isna()]))
    #print(sum(df["citation"].isna()))
    
    df2 = get_fr_data(tracking_data_path)
    #print(df2.columns)
    #print(df2["citation"].value_counts(dropna=False))
    #print(len(df2.loc[df2["citation"].isna()]))
    
    merged = merge_data(df, df2)
    print(merged.columns)
    keep_cols = [
        'control_number', 'citation', 'major_rule_report', 
        'published_dt', 'published_year', 'published_month',
       'publication_date', 'department', 'agency_y',
       'independent_reg_agency', 'document_number', 
       'significant', 'econ_significant', '3(f)(1) significant', 'Major',
       'html_url', '_merge', 
       ]
    merged = merged.loc[:, keep_cols]
    merged_april = _keep_after(merged, "publication_date", "2024-04-01")
    print(len(merged_april))
