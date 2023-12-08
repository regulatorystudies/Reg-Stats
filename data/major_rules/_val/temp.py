# %%

from pathlib import Path

import pandas as pd

from process_data import *

p = Path(__file__)
root_path = p.parents[1]
data_path = p.parents[1].joinpath("raw_data")
val_path = p.parents[1].joinpath("_val")
for this_path in (root_path, data_path, val_path):
    if not this_path.is_dir():
        this_path.mkdir(parents=True, exist_ok=True)


# %%

from scraper import PopulationScraper, BASE_PARAMS, remove_duplicates

ps = PopulationScraper(major_only=True)

# request and parse html
params = ps.set_request_params(BASE_PARAMS)
#print(params)
soup = ps.request_soup(params)
pages = ps.get_page_count(soup)
document_count = ps.get_document_count(soup)

#pages = [10, 11, 15, 16, 19, 20, 21, 22, 29, 30, 31, 44, 45, ]

pop_data = ps.scrape_population(params, pages, document_count)

validate = pop_data.get("rule_count")
pop_data_alt = list(pop_data["results"])
#while validate != document_count:    
test_strings = list("abcdefghijklmnopqrstuvwxyz")  # the alphabet
for s in test_strings:
    params.update({"title": s})
    #print(params)
    soup = ps.request_soup(params, page=0)
    pages = ps.get_page_count(soup)
    pop_data_temp = ps.scrape_population(params, pages, document_count)

    pop_data_alt.extend(pop_data_temp["results"])

    pop_data_alt, dups = remove_duplicates(pop_data_alt)
    validate = len(pop_data_alt)
    print(f"Running total unique: {validate}")
    if validate == document_count:
        break


# %%

pop_data["results"] = pop_data_alt
ps.to_json(pop_data, data_path, file_name = "population_major_alt")

# %%

data_file = "population_major_alt"
data = load_json(data_path, data_file)
df = json_to_df(data, date_cols=("received", ))
df, df_dup = find_duplicates(df)
print(f"Removed {len(df_dup)} duplicates.")
#print(df_dup)
timeframe = "received"
df = convert_to_presidential_year(df, timeframe)

df["control_number"] = df['url'].apply(lambda x: x.split("/")[-1])

grouped = groupby_year(df, year_col = "presidential")
output = define_presidential_terms(grouped)
print("Aggregated data:", output, sep="\n")
save_csv(output, root_path, f"major_rules_by_{timeframe}_year_val")

# %%

file_name = "major_rules_by_received_year_original.csv"
with open(root_path / file_name, "r") as f:
    df_o = pd.read_csv(f, nrows=27, header=1).reset_index() #, names=["received_year", "major_rules_original", "rules_excl", "party", "final_year"])

keep_cols = [c for i,c in enumerate(df_o.columns.tolist()) if i <= 2]
df_o = df_o.loc[:, keep_cols].set_index("index")
df_o.columns = ["received_year", "major_rules_original"]
#print(df_o.columns)

file_names = ("major_rules_by_received_year_scraper.csv", "major_rules_by_received_year_val.csv")
dfs = []
for i, file_name in enumerate(file_names):    
    with open(root_path / file_name, "r") as f:
        df_s = pd.read_csv(f) #, nrows=27, header=1).reset_index() #, names=["received_year", "major_rules_original", "rules_excl", "party", "final_year"])
    keep_cols = ["presidential_year", "major_rules"]
    df_s = df_s.loc[:, keep_cols].rename(columns={
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

from scraper import PopulationScraper

ps = PopulationScraper()

data1 = ps.from_json(data_path, "population_major")
data2 = ps.from_json(val_path, "population_major_")

url1 = [d.get("url") for d in data1["results"]]
url2 = [d.get("url") for d in data2["results"]]
combined = (1 if u in url2 else 0 for u in url1)
if sum(combined) == len(url1) == len(url2):
    print("Success!")
else:
    print("Error.")

# %%
