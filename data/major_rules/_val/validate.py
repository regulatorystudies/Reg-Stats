from pathlib import Path

import pandas as pd

if __name__ == "__main__":

    p = Path(__file__)
    root_path = p.parents[1]
    if not root_path.is_dir():
        root_path.mkdir(parents=True, exist_ok=True)

    original = "major_rules_by_received_year_original.csv"
    with open(root_path / original, "r") as f:
        df_o = pd.read_csv(f, nrows=27, header=1).reset_index()

    keep_cols = [c for i,c in enumerate(df_o.columns.tolist()) if i <= 2]
    df_o = df_o.loc[:, keep_cols].set_index("index")
    df_o.columns = ["received_year", "major_rules_original"]

    scraper = "major_rules_by_received_year.csv"
    with open(root_path / scraper, "r") as f:
        df_s = pd.read_csv(f)
    keep_cols = ["presidential_year", "major_rules"]
    df_s = df_s.loc[:, keep_cols].rename(columns={
        "presidential_year": "received_year", 
        "major_rules": f"major_rules_scraper"
        })

    df = df_o.merge(df_s, on="received_year", how="inner", validate="1:1")

    compare = ("major_rules_original", "major_rules_scraper")
    df.loc[:, "eq"] = df.loc[:, compare[0]].eq(df.loc[:, compare[1]])

    file_name = "major_rules_diff.csv"
    with open(root_path / file_name, "w", encoding="utf-8") as f:
        df.to_csv(f, lineterminator="\n", index=False)
