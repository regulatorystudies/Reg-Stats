from pathlib import Path
from pprint import pprint
import time

from bs4 import BeautifulSoup

from cradb.scraper import (
    PopulationScraper, 
    RuleScraper,
    BASE_PARAMS, 
)


# TEST OBJECTS AND UTILS #


tests_path = Path(__file__).parent


def cleanup(file: Path = tests_path / "temp.json"):
    if file.is_file():
        file.unlink()


# SCRAPER TESTS #


def test_get_request_params_type_all(params: dict = BASE_PARAMS):
    ps = PopulationScraper()
    request_params = ps.set_request_params(params)
    assert request_params.get("type") == "all", "key 'type' should have value of 'all'"


def test_get_request_params_type_major(params: dict = BASE_PARAMS):
    ps = PopulationScraper(major_only = True)
    request_params = ps.set_request_params(params)
    assert request_params.get("type") == "Major", "key 'type' should have value of 'Major'"


def test_get_request_params_new_only(params: dict = BASE_PARAMS):
    KWARGS = {"path": tests_path, "file_name": "population_test"}
    ps = PopulationScraper(new_only = True, **KWARGS)
    request_params = ps.set_request_params(params, **KWARGS)
    assert request_params.get("received_start_date") is not None, "key 'received_start_date' should have a corresponding value"


def test_request_soup():
    ps = PopulationScraper()
    soup = ps.request_soup()
    assert isinstance(soup, BeautifulSoup)


def test_get_document_count():
    ps = PopulationScraper()
    soup = ps.request_soup()
    document_count = ps.get_document_count(soup)
    assert (isinstance(document_count, int)) and (document_count >= 0), "should be `int` greater than or equal to zero"


def test_get_page_count():
    ps = PopulationScraper()
    soup = ps.request_soup()
    page_count = ps.get_page_count(soup)
    assert (isinstance(page_count, int)) and (page_count >= 0), "should be `int` greater than or equal to zero"


def test_from_json():
    ps = PopulationScraper()
    data = ps.from_json(tests_path, file_name = "population_test")
    assert isinstance(data, dict)


# NOT WORKING
def test_to_json():
    data = {
            "description": "Contains basic records for rules in GAO's CRA Database of Rules.", 
            "source": "url", 
            "date_retrieved": "today", 
            "major_only": True, 
            "rule_count": 0, 
            "results": []
            }
    ps = PopulationScraper()
    file_name = "temp"
    ps.to_json(data, tests_path, file_name)
    file = tests_path / file_name
    assert file.is_file(), "file should exist before calling `cleanup()`"


def test_scrape_population(params = BASE_PARAMS, pages = 5, documents = 0):
    ps = PopulationScraper()
    data = ps.scrape_population(params, pages, documents)
    assert (isinstance(data, dict)) and (len(data.get("results")) == pages * 20)


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


# PROCESSING TESTS #

# TBD


ALL_TESTS = (
    test_request_soup, 
    test_get_document_count, 
    test_get_page_count, 
    test_get_request_params_new_only, 
    test_get_request_params_type_all, 
    test_get_request_params_type_major, 
    test_from_json,
    #test_to_json, 
    test_scrape_population, 
    )

if __name__ == "__main__":
    
    for func in ALL_TESTS:
        func()
    
    # deletes test files
    cleanup()
    
    print("Tests complete.")
