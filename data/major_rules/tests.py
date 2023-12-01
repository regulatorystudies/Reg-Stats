from pathlib import Path
from pprint import pprint

from cradb.scraper import (
    PopulationScraper, 
    RuleScraper,
)


if __name__ == "__main__":
    
    # profile time elapsed
    import time
    start = time.process_time()
    
    p = Path(__file__)
    data_path = p.parents[1].joinpath("raw_data")
    if not data_path.is_dir():
        data_path.mkdir(parents=True, exist_ok=True)
    
    test_urls = [
        "https://www.gao.gov/fedrules/207897", 
        "https://www.gao.gov/fedrules/207898", 
        "https://www.gao.gov/fedrules/207899", 
        ]
    data = [{"url": url} for url in test_urls]
    rs = RuleScraper(input_data=data)
    out = rs.scrape_rules()
    #pprint(out)
    rs.to_json(out, data_path, "rule_detail_test")
    
    # calculate time elapsed
    stop = time.process_time()
    print(f"CPU time: {stop - start:0.1f} seconds")
