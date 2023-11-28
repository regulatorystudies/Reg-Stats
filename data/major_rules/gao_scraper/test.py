from pathlib import Path
from pprint import pprint

from scraper import (
    ParseError,
    PopulationScraper,
    RuleScraper,
)


if __name__ == "__main__":
    
    # profile time elapsed
    import time
    start = time.perf_counter()
    
    p = Path(__file__)
    data_path = p.parents[1].joinpath("raw_data")
    if not data_path.is_dir():
        data_path.mkdir(parents=True, exist_ok=True)
    
    rs = RuleScraper()
    test_url = "https://www.gao.gov/fedrules/207898"
    soup = rs.request_soup(alt_url=test_url)
    out = rs.scrape_rule(soup)
    pprint(out)
    
    # calculate time elapsed
    stop = time.perf_counter()
    print(f"Time elapsed: {stop - start:0.1f} seconds")
