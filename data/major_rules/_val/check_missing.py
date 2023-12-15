from pathlib import Path

from scraper import PopulationScraper, identify_duplicates
from process_data import extract_date

p = Path(__file__)
data_path = p.parents[1].joinpath("raw_data")

ps = PopulationScraper()

data_new = ps.from_json(data_path, "population_major")
data_old = ps.from_json(data_path, "population_major_val")
urls_new = [d.get("url") for d in data_new["results"]]
urls_old = [d.get("url") for d in data_old["results"]]
common = [1 if u in urls_new else 0 for u in urls_old]
added = [0 if u in urls_old else 1 for u in urls_new]

if (sum(common) == len(urls_old)):
    print("Success: No missing urls from original list.")
else:
    print("Error: Missing urls from original list.")

if (sum(added)) == (len(urls_new) - len(urls_old)):
    print(f"Success: Added {sum(added)} urls.")
    if sum(added) > 0:
        print(f"{''.join(u for u in urls_new if u not in urls_old )}")
else:
    print("Error: Failed to add new urls.")

dups = identify_duplicates(data_new["results"])
if dups:
    print(dups)
else:
    print("Success: No duplicates.")
