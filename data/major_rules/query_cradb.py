from pathlib import Path

import pandas as pd

from cradb.process_data import (
    load_json, 
    json_to_df, 
    find_duplicates, 
    )


def load_data(
        data_path: Path, 
        data_file: str = "rule_detail_major", 
    ) -> pd.DataFrame:
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
    return df


def query_db(df, value: str | int, column: str = "fed_reg_number"):
    bool_ = df.loc[:, column] == value
    num_returned = sum(bool_)
    if num_returned == 0:
        return f"No rules returned where {column} == {value}."
    else:
        for _, row in df.loc[bool_].iterrows():
            return f"Rule matches {column} == {value}: {row['url']}"


if __name__ == "__main__":
    
    p = Path(__file__)
    data_path = p.parent.joinpath("raw_data")
    if not data_path.is_dir():
        print("Cannot locate data.")
    
    df = load_data(data_path)
    
    for citation in ("89 FR 34680", "89 FR 33474", "89 FR 34106"):
        print(query_db(df, citation))
