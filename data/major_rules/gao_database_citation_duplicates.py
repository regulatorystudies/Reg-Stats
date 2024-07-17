from datetime import date
from pathlib import Path

from cradb.process_data import (
    load_json, 
    json_to_df, 
    find_duplicates, 
    )

def get_gao_data(path: Path, file_name: str = "rule_detail_major", keep_after: date | str | None = None):
    # call processing pipeline
    print("Processing retrieved data on major rules.")
    data = load_json(path, file_name)
    df = json_to_df(data)
    df, df_dup = find_duplicates(df, subset=["fed_reg_number", "control_number"])
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


def _keep_after(df, column, after_date: str | date):
    if isinstance(after_date, str):
        after_date = date.fromisoformat(after_date)
    elif isinstance(after_date, date):
        pass
    else:
        raise TypeError("Parameter 'after_date' must be type `str` or `datetime.date`.")
    return df.loc[df[column] >= after_date]


if __name__ == "__main__":
    
    # set paths
    p = Path(__file__)
    gao_data_path = p.parent.joinpath("raw_data")
    
    # get data
    df = get_gao_data(gao_data_path)
    dup_citations = df["citation"].value_counts()[(df["citation"].value_counts() > 1)]
    bool_dup = [True if d in dup_citations.index.to_list() else False for d in df["citation"]]
    df_dup = df.loc[bool_dup, ["control_number", "citation", "url", "major_rule_report", ]]
    print(df_dup)
    df_dup.to_csv(p.parent / "gao_database_citation_duplicates.csv", index=False)
