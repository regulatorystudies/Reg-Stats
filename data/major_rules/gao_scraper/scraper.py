# initialize

from pathlib import Path

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


class PopulationScraper:
    
    def __init__(self, base_url: str = BASE_URL, request_params: dict = PARAMS):
        self.url = base_url
        self.params = request_params

    # def request_soup
    # def get_document_count
    # def get_page_count
    # def scrape_population(self, pages)
    
    def scrape_population(self):
                
        response = requests.get(self.url, params=self.params)
        if response.status_code != 200:
            print(f"Status: {response.status_code}", 
                f"\nReason: {response.reason}")
            response.raise_for_status()
        
        soup = BeautifulSoup(response.content, "lxml")
        
        # get document count
        results_count = soup.find("div", class_="count")
        document_count = int(results_count.text.strip().split()[-1])

        # get page count    
        results_pages = soup.find_all("span", class_="usa-pagination__link-text")
        for c in results_pages:
            if c.text.strip().lower() == "last":
                a = c.parent
                href = a["href"]
                page_count = int(href.split("page=")[-1])
            else:
                raise ParseError
        
        return document_count, page_count




if __name__ == "__main__":
    
    p = Path(__file__)
    
    out = scrape_population()
    #this = out.text.strip()
    print(out[0])



    #identify population of rules
    #- requests.get() from page=0
    #- grab urls for rules on that page
    #- extend json
    #- requests.get() from page=1
    #- grab urls for rules on that page
    #- extend json
    #- ...
    #- save json
