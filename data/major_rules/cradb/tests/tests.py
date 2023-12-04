from pathlib import Path
from pprint import pprint
import time

from bs4 import BeautifulSoup

from cradb.scraper import (
    PopulationScraper, 
    RuleScraper,
)


def test_request_soup():
    ps = PopulationScraper()
    soup = ps.request_soup()
    assert isinstance(soup, BeautifulSoup)


def test_get_document_count():
    ps = PopulationScraper()
    soup = ps.request_soup()
    document_count = ps.get_document_count(soup)
    assert (isinstance(document_count, int)) and (document_count >= 0)


def test_get_page_count():
    ps = PopulationScraper()
    soup = ps.request_soup()
    page_count = ps.get_page_count(soup)
    assert (isinstance(page_count, int)) and (page_count >= 0)


def scraper_examples():
    # profile time elapsed

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


if __name__ == "__main__":
    
    for func in (test_request_soup, test_get_document_count, test_get_page_count):
        func()
