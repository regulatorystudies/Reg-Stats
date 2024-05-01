from pathlib import Path

from numpy import array
from pandas import DataFrame

from process_data import (
    load_json, 
    json_to_df, 
    find_duplicates, 
    save_csv
    )


def groupby_month(
        df: DataFrame, 
        group_columns: tuple | list = ("published_year", "published_month"), 
        agg_col: str = "control_number", 
        ):
    
    grouped = df.groupby(
        by=list(group_columns),
        as_index=False,
    ).agg({agg_col: "count"}).rename(columns = {agg_col: "major_rules_published"})
    return grouped.round(0)


def filter_date_range(df: DataFrame, start: tuple, year_col: str = "published_year", month_col: str = "published_month"):
    
    #end: tuple | None = None, 
    bool_start = array((df.loc[:, year_col] >= start[0]) & (df.loc[:, month_col] >= start[1]))
    #if end is not None:
    #    bool_end = array((df.loc[:, year_col] <= end[0]) & (df.loc[:, month_col] <= end[1]))
    #else:
    #    bool_end = array([True] * len(df))
    
    #return df.loc[bool_start & bool_end]
    return df.loc[bool_start]


def process_data_by_month(
        data_path: Path, 
        root_path: Path, 
        data_file: str = "rule_detail_major", 
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
    print(f"Removed {len(df_dup)} duplicates.")

    output = groupby_month(df)
    #sort_cols = ["presidential_year", "end_of_term", "democratic_admin"] + [c for c in output.columns if "major_rules" in f"{c}"]
    #output = output.loc[:, sort_cols]
    
    print(f"\nAggregated data by month:", output, sep="\n")
    save_csv(output, root_path, f"major_rules_by_month")
    return output


if __name__ == "__main__":
    
    p = Path(__file__)
    major_path = p.parents[1]
    data_path = major_path.joinpath("raw_data")
    if not data_path.is_dir():
        print("Cannot locate data.")
    
    df = process_data_by_month(data_path, major_path)
    
    # filtered data
    after = (2021, 1)
    filtered = filter_date_range(df, start=after)
    save_csv(filtered, major_path, f"major_rules_by_month_after_{after[0]}_{after[1]}")
    print(filtered)
