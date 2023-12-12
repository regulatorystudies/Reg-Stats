# imports
from pathlib import Path
from collections import Counter
from cradb.scraper import (
    PopulationScraper, 
    create_soup_strainer, 
    BASE_PARAMS, 
)

# set up
ps = PopulationScraper(major_only=True, new_only=False) 
params = ps.set_request_params(BASE_PARAMS)
soup = ps.request_soup(params, page = 0, strainer=create_soup_strainer())
document_count = ps.get_document_count(soup)
pages = ps.get_page_count(soup)

# profiling function
def profile_use_collected_data(use_collected: bool):

    # scrape population data and save
    pop_data = ps.scrape_population(params, pages, document_count)

    # check for missing documents
    print("Checking for missing documents.")
    results = ps.get_missing_documents(pop_data, BASE_PARAMS, document_count, use_collected_data=use_collected)
    if results is not None:
        print("Retrieved missing documents.")
        pop_data = results

    # summarize rule types retrieved
    type_counts = Counter([rule["type"] for rule in pop_data["results"]])
    print(f"Retrieved {type_counts.total()} rules.")
    for k, v in type_counts.items():
        print(f"{k}s: {v}")

if __name__ == "__main__":
    
    import cProfile
    
    cProfile.run("profile_use_collected_data(True)")
    
    cProfile.run("profile_use_collected_data(False)")
