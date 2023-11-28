# initialize

from datetime import date
import json
from pathlib import Path
import re
#from typing import Iterable

import requests
from bs4 import BeautifulSoup


BASE_URL = "https://www.gao.gov/legal/other-legal-work/congressional-review-act"
PARAMS = {
    "processed": 1, 
    "type": "all", 
    "priority": "all", 
    "page": 0
    }


class ParseError(Exception):
    pass


class Scraper:
    
    def __init__(self):
        pass
    
    def to_json(self, data: dict | list, path: Path, file_name: str):
        
        with open(path / f"{file_name}.json", "w", encoding="utf-8") as f:
            json.dump(data, f, indent=4)
        
        print(f"Saved data to {path}.")


class PopulationScraper(Scraper):
    
    def __init__(self, base_url: str = BASE_URL, request_params: dict = PARAMS):
        self.url = base_url
        self.params = request_params

    def request_soup(self, page: int = None, parser: str = "lxml"):
        
        if page is not None:
            self.params.update({"page": page})
        response = requests.get(self.url, params=self.params)
        if response.status_code != 200:
            print(f"Status: {response.status_code}", 
                f"\nReason: {response.reason}")
            response.raise_for_status()
        soup = BeautifulSoup(response.content, parser)
        return soup
    
    def get_document_count(self, soup: BeautifulSoup):
        
        results_count = soup.find("div", class_="count")
        document_count = int(results_count.text.strip().split()[-1])
        return document_count
        
    def get_page_count(self, soup: BeautifulSoup):
        
        results_pages = soup.find_all("span", class_="usa-pagination__link-text")
        page_count = None
        for c in results_pages:
            #print(c.text)
            if c.text.strip().lower() == "last":
                a = c.parent
                href = a["href"]
                page_count = int(href.split("page=")[-1])
            else:
                pass
        if page_count is None:
            raise ParseError
        
        return page_count
    
    def scrape_population(self, pages: int, url_stem: str = "https://www.gao.gov"):
        
        all_rules = []
        for page in range(pages):
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
            if page % 500 == 0:
                print(f"Retrieved rules from {page} pages.")
        
        output = {
            "description": "Contains records for rules in GAO's CRA Database of Rules.", 
            "source": BASE_URL, 
            "date_retrieved": f"{date.today()}", 
            "rule_count": len(all_rules), 
            "results": all_rules
            }
        
        return output


class RuleScraper(Scraper):
    
    def __init__(self, url_stem: str = "https://www.gao.gov", data: dict = None) -> None:
        self.url_stem = url_stem
        if data is None:
            self.data = {}
        else:
            self.data = data
    
    def request_soup(self, url: str, parser = "lxml"):
        
        response = requests.get(url)
        if response.status_code != 200:
            print(f"Status: {response.status_code}", 
                f"\nReason: {response.reason}")
            response.raise_for_status()
        soup = BeautifulSoup(response.content, parser)
        return soup
    
    def scrape_rule(self, soup: BeautifulSoup):
        
        page_contents = soup.find("div", class_="main-page-content--inner")
        header = page_contents.header
        main = page_contents.main
        
        # get title from header
        title = header.find_all("h1", class_="split-headings").string.strip()
        print(title)
        
        # get rest of data from main
        field_names = main.find_all("div", class_=has_field_name)
        
        field_data = {}
        for field in field_names:
            
            label = field.find_all("h2", class_="field__label")
            item = field.find_all("div", class_="field__item")
            
            if label.string is not None:
                field_data.update({label.string.lower().strip(): item.contents})


def has_field_name(class_):
    return re.compile("field field--name-field-").search(class_)


def has_field_item(class_):
    return re.compile("field__item").search(class_)


if __name__ == "__main__":
    
    p = Path(__file__)
    data_path = p.parents[1].joinpath("raw_data")
    if not data_path.is_dir():
        data_path.mkdir(parents=True, exist_ok=True)
    
    ps = PopulationScraper()
    soup = ps.request_soup()
    document_count = ps.get_document_count(soup)
    page_count = ps.get_page_count(soup)
    print(document_count, page_count)
    
    out = ps.scrape_population(page_count)
    ps.to_json(out, data_path, "population")


    #identify population of rules
    #- requests.get() from page=0
    #- grab urls for rules on that page
    #- extend json
    #- requests.get() from page=1
    #- grab urls for rules on that page
    #- extend json
    #- ...
    #- save json
