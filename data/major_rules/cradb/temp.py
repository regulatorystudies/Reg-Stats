# %%

from collections import Counter
from pathlib import Path

import pandas as pd

from process_data import load_json

p = Path(__file__)
root_path = p.parents[1]
data_path = p.parents[1].joinpath("raw_data")
for this_path in (root_path, data_path):
    if not this_path.is_dir():
        this_path.mkdir(parents=True, exist_ok=True)

# %%

file_name = "major_rules_by_received_year_original.csv"
with open(root_path / file_name, "r") as f:
    df_o = pd.read_csv(f, nrows=27, header=1).reset_index() #, names=["received_year", "major_rules_original", "rules_excl", "party", "final_year"])

keep_cols = [c for i,c in enumerate(df_o.columns.tolist()) if i <= 2]
df_o = df_o.loc[:, keep_cols].set_index("index")
df_o.columns = ["received_year", "major_rules_original"]
#print(df_o.columns)

file_names = ("major_rules_by_received_year_scraper.csv", "major_rules_by_received_year.csv")
dfs = []
for i, file_name in enumerate(file_names):    
    with open(root_path / file_name, "r") as f:
        df_s = pd.read_csv(f) #, nrows=27, header=1).reset_index() #, names=["received_year", "major_rules_original", "rules_excl", "party", "final_year"])
    
    df_s = df_s.rename(columns={
        "presidential_year": "received_year", 
        "major_rules": f"major_rules_scraper_{i}"
        })
    dfs.append(df_s)

df = df_o.merge(dfs[0], on="received_year", how="inner", validate="1:1")
df = df.merge(dfs[1], on="received_year", how="inner", validate="1:1")

compare = ("major_rules_original", "major_rules_scraper_1")
df.loc[:, "eq"] = df.loc[:, compare[0]].eq(df.loc[:, compare[1]])

file_name = "major_rules_diff.csv"
with open(root_path / file_name, "w", encoding="utf-8") as f:
    df.to_csv(f, lineterminator="\n", index=False)


# %%

results = load_json(data_path, "population_major")['results']
print(len(results))

url_list = [r.get("url") for r in results]

c = Counter(url_list)

dup_urls = [k for k, v in c.items() if v > 1]
dup_items = [r for r in results if r.get("url") in dup_urls]
pop_list = [n for n, v in enumerate(results) if v.get("url") in dup_urls]

#for item in dup_items:
#    results.remove(item)
#    dup_items.remove(item)
#print(len(results))

#for p in pop_list:
#    results.pop(p)
#print(len(results))

# %%

