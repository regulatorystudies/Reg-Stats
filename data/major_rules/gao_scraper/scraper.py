# initialize

from datetime import date
import json
from pathlib import Path
import re
#from typing import Iterable

import requests
from bs4 import BeautifulSoup


URL_STEM = "https://www.gao.gov"
BASE_URL = "https://www.gao.gov/legal/other-legal-work/congressional-review-act"
BASE_PARAMS = {
    "processed": 1, 
    "type": "all", 
    "priority": "all", 
    "page": 0
    }


class ParseError(Exception):
    pass


class Scraper:
    
    def __init__(self, base_url: str = BASE_URL, url_stem: str = URL_STEM, request_params: dict = BASE_PARAMS):
        self.url = base_url
        self.url_stem = url_stem
        self.params = request_params
    
    def request_soup(self, page: int = None, alt_url: str = None, parser: str = "lxml"):
        
        if page is not None:  # only updates parameters when page number is given
            self.params.update({"page": page})
        
        if alt_url is not None:  # makes different request when alt_url is given
            response = requests.get(alt_url)
        else:
            response = requests.get(self.url, params=self.params)
        
        if response.status_code != 200:
            print(f"Status: {response.status_code}", 
                f"\nReason: {response.reason}")
            response.raise_for_status()
        soup = BeautifulSoup(response.content, parser)
        return soup
    
    def to_json(self, data: dict | list, path: Path, file_name: str):
        
        with open(path / f"{file_name}.json", "w", encoding="utf-8") as f:
            json.dump(data, f, indent=4)
        
        print(f"Saved data to {path}.")


class PopulationScraper(Scraper):
    
    def __init__(self, major_only: bool = False, **kwargs):
        super().__init__(**kwargs)
        self.major_only = major_only
        if self.major_only:  # only updates parameters when major_only = True
            self.params.update({"type": "Major"})
        else:  # else reset to get all rules
            self.params.update({"type": "all"})

    def get_document_count(self, soup: BeautifulSoup):
        
        results_count = soup.find("div", class_="count")
        document_count = int(results_count.text.strip().split()[-1])
        self.document_count = document_count
        return document_count
        
    def get_page_count(self, soup: BeautifulSoup):
        
        results_pages = soup.find_all("span", class_="usa-pagination__link-text")
        page_count = None
        for c in results_pages:
            if c.text.strip().lower() == "last":
                a = c.parent
                href = a["href"]
                page_count = int(href.split("page=")[-1])
            else:
                pass
        if page_count is None:
            raise ParseError
        
        self.page_count = page_count
        return page_count
    
    def scrape_population(self, pages: int, url_stem: str = URL_STEM):
        
        all_rules = []
        for page in range(pages + 1):  # zero-based numbering
            # get soup for this page
            soup_this_page = self.request_soup(page = page)
            
            # get rules on this page
            rules_this_page = soup_this_page.find_all("div", class_="views-row")
            one_page = []
            for rule in rules_this_page:
                bookmark = rule.find("div", class_="teaser-search--bookmark").a
                effective_date = rule.find("time")
                rule_dict = {
                    "page": page, 
                    "url": f"{url_stem}{bookmark['href']}", 
                    "type": bookmark.string.strip(), 
                    "effective_date": effective_date["datetime"]
                    }
                one_page.append(rule_dict)
            
            all_rules.extend(one_page)
            print_frequency = (pages + 1) // 10
            if (page % print_frequency == 0) and (page > 1):
                print(f"Retrieved {len(all_rules)} rules from {page + 1} pages.")
        
        output = {
            "description": "Contains records for rules in GAO's CRA Database of Rules.", 
            "source": BASE_URL, 
            "date_retrieved": f"{date.today()}", 
            "major_only": self.major_only, 
            "rule_count": len(all_rules), 
            "results": all_rules
            }
        
        return output


class RuleScraper(Scraper):
    
    def __init__(self, input_data: dict = None, **kwargs) -> None:
        super().__init__(**kwargs)
        if input_data is None:
            self.data = {}
        else:
            self.data = input_data        
    
    def scrape_rule(self, soup: BeautifulSoup):
        
        page_contents = soup.find("div", class_="main-page-content--inner")
        header = page_contents.header
        main = page_contents.main
        
        # get title from header
        title = header.find("h1", class_="split-headings").string.strip().title()
        print(title)
        
        # get rest of data from main
        field_names = main.find_all("div", class_=has_field_name)
        
        field_data = {}
        for field in field_names:
            
            label = field.find("h2", class_="field__label")
            item = field.find("div", class_="field__item")
            
            if label.string is not None:
                cleaned_label = clean_label(label.string.lower().strip())
                field_data.update({cleaned_label: item.contents})
        
        return field_data


def has_field_name(class_):
    return re.compile("field field--name-field-").search(class_)


def clean_label(label: str, replace_with: str = "_"):
    return re.compile("[\s\.]", re.I).sub(replace_with, label).replace("__", replace_with)


def main(major_only: bool = False):
    
    # initialize scraper
    ps = PopulationScraper(major_only=major_only)
    
    # request and parse html
    soup = ps.request_soup()
    document_count = ps.get_document_count(soup)
    page_count = ps.get_page_count(soup)
    print(f"Requesting {document_count} rules from {page_count + 1} pages.")
    
    # scrape rules
    data = ps.scrape_population(page_count)
    
    # save to json
    ps.to_json(data, data_path, f"population_{ps.params['type']}")
    

if __name__ == "__main__":
    
    # profile time elapsed
    import time
    start = time.perf_counter()
    
    p = Path(__file__)
    data_path = p.parents[1].joinpath("raw_data")
    if not data_path.is_dir():
        data_path.mkdir(parents=True, exist_ok=True)
    
    # call scraper pipeline
    main(major_only=True)
    
    # calculate time elapsed
    stop = time.perf_counter()
    print(f"Time elapsed: {stop - start:0.1f} seconds")
