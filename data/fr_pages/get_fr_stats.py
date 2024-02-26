import json
from pathlib import Path
import re

import requests
from bs4 import BeautifulSoup, SoupStrainer

class ParseError(Exception):
    pass


class FedRegStatsScraper:
    """Base scraper class for retrieving data from Federal Register Statistics."""
    
    def __init__(
            self, 
            url: str = "https://www.federalregister.gov/reader-aids/federal-register-statistics", 
            new_only: bool = False, **kwargs):
        """Initialize scraper.

        Args:
        """
        self.url = url
        self.new_only = new_only
    
    def request_soup(self, params: dict = None, parser: str = "lxml", strainer: SoupStrainer = None):
        """Request and parse html using `requests` and `bs4`, returning a processed `BeautifulSoup` object.

        Args:
            params (dict, optional): Request parameters. Defaults to None.
            page (int, optional): Page number for updating requests parameters. Defaults to None.
            alt_url (str, optional): Supply an alternate URL for the request, rather than the default `base_url`. Defaults to None.
            parser (str, optional): Parser to pass to `BeautifulSoup()`. Defaults to "lxml".
            strainer (SoupStrainer, optional): Strainer to selectively parse html (passed to "parse_only" parameter). Defaults to None.

        Returns:
            BeautifulSoup: Parsed html as a BeautifulSoup object.
        """
        response = requests.get(self.url, params=params)
        
        # raise status if request fails
        if response.status_code != 200:
            print(f"Status: {response.status_code}", 
                f"\nReason: {response.reason}")
            response.raise_for_status()
        
        return BeautifulSoup(response.content, parser, parse_only=strainer)
        
    def to_json(self, data: dict | list, path: Path, file_name: str) -> None:
        """Save retrieved data as .json. Prints save path if successful.

        Args:
            data (dict | list): Data to save to JSON.
            path (Path): Path of directory where file should be located.
            file_name (str): Name of .json file (file extension is added automatically).
        """        
        with open(path / f"{file_name}.json", "w", encoding="utf-8") as f:
            json.dump(data, f, indent=4)
        
        print(f"Saved data to {path}.")
