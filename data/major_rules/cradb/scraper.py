from collections import Counter
from copy import deepcopy
from datetime import datetime, date, timedelta
import json
from pathlib import Path
import re
import time

import requests
from bs4 import BeautifulSoup, SoupStrainer

try:
    from .process_data import extract_date
except ImportError:
    from process_data import extract_date


BASE_PARAMS = {
    "processed": 1, 
    "type": "all", 
    "priority": "all", 
    }


# seems like this needs to be defined first before using below
def sleep_retry(timeout: int, retry: int = 3):
    """Decorator to sleep and retry request when receiving an error 
    (source: [RealPython](https://realpython.com/python-sleep/#adding-a-python-sleep-call-with-decorators)).

    Args:
        timeout (int): Number of seconds to sleep after error.
        retry (int, optional): Number of times to retry. Defaults to 3.
    """    
    def the_real_decorator(function):
        def wrapper(*args, **kwargs):
            retries = 0
            while retries < retry:
                try:
                    value = function(*args, **kwargs)
                    if value is not None:
                        return value
                    else:
                        raise ParseError
                except requests.HTTPError:
                    print(f'Sleeping for {timeout} seconds')
                    time.sleep(timeout)
                    retries += 1
        return wrapper
    return the_real_decorator


class ParseError(Exception):
    pass


class NewDataRetrievalError(Exception):
    """Raised when failed to retrieve new data from database."""
    pass


class Scraper:
    """Base scraper class for retrieving data from GAO's Congressional Review Act (CRA) database."""
    
    def __init__(
            self, 
            base_url: str = "https://www.gao.gov/legal/congressional-review-act/search-database-of-rules", 
            url_stem: str = "https://www.gao.gov", 
            major_only: bool = False, 
            new_only: bool = False, 
            **kwargs
        ):
        """Initialize base scraper for CRA database.

        Args:
            base_url (str, optional): URL to pass to `requests.get()`. Defaults to "https://www.gao.gov/legal/congressional-review-act/search-database-of-rules".
            url_stem (str, optional): Stem of GAO website URL for constructing rule-level URLs. Defaults to "https://www.gao.gov".
            request_params (dict, optional): Parameters to pass to `requests.get()`. Defaults to {"processed": 1, "type": "all", "priority": "all", "page": 0}.
            major_only (bool, optional): Only retrieve rules of type "Major". Defaults to False.
            new_only (bool, optional): Only retrieve rules added since last collection date (uses "date_retrieved" from existing dataset). Defaults to False.
        """
        self.url = base_url
        self.url_stem = url_stem
        self.major_only = major_only
        self.new_only = new_only
    
    def set_request_params(self, params: dict, **kwargs):
        """Set the "type" and "received_start_date" parameters for the HTTP request.

        Args:
            params (dict): Base parameters in key: value format.

        Returns:
            dict: Updated parameters based on class attributes.
        """        
        if self.major_only:
            params.update({"type": "Major"})
        return params
    
    def request_soup(self, params: dict = None, page: int = None, alt_url: str = None, parser: str = "lxml", strainer: SoupStrainer = None):
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
        # only updates parameters when page number is given
        if (params is not None) and (page is not None):
            params.update({"page": page})
        
        # makes different request when alt_url is given
        if alt_url is not None:
            response = requests.get(alt_url)
        else:
            response = requests.get(self.url, params=params)
        
        # raise status if request fails
        if response.status_code != 200:
            print(f"Status: {response.status_code}", 
                f"\nReason: {response.reason}")
            response.raise_for_status()
        
        return BeautifulSoup(response.content, parser, parse_only=strainer)
    
    def _add_output_metadata(self, results: list, how: str):
        if how == "population":
            output = {
                "description": "Contains basic records for rules in GAO's CRA Database of Rules.", 
                "source": self.url, 
                "date_retrieved": f"{date.today()}", 
                "major_only": self.major_only, 
                "rule_count": len(results), 
                "results": results
                }
        elif how == "detail":
            example_control_number = r"{control_number}"
            output = {
                "description": "Contains detailed records for rules in GAO's CRA Database of Rules.", 
                "sources": f"Series of links with pattern {self.url_stem}/fedrules/{example_control_number}", 
                "date_retrieved": f"{date.today()}", 
                "rule_count": len(results), 
                "results": results
                }
        else:
            raise ValueError("Parameter 'how' accepts inputs of 'population' or 'detail'.")
        return output
    
    def from_json(self, path: Path, file_name: str) -> dict | list:
        """Import data from .json format.

        Args:
            path (Path): Path of directory where file is located.
            file_name (str): Name of .json file (without file extension; e.g., "file_name").

        Returns:
            dict | list: JSON object.
        """        
        with open(path / f"{file_name}.json", "r", encoding="utf-8") as f:
            data = json.load(f)
        
        return data
    
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


class PopulationScraper(Scraper):
    """Scraper for retrieving basic data on the population of rules in GAO's CRA database, including their url, type, and effective date."""
    
    def __init__(self, **kwargs):
        """Initialize PopulationScraper, inheriting atrributes and methods from Scraper class."""        
        super().__init__(**kwargs)

    def get_document_count(self, soup: BeautifulSoup):
        """Retrieve document count returned by the search of the CRA database.

        Args:
            soup (BeautifulSoup): Parsed html of webpage.

        Returns:
            int: Number of documents meeting the search parameters.
        """        
        results_count = soup.find("div", class_="count")
        results_text = results_count.text.strip().split()
        if results_text:
            document_count = int(results_text[-1])
        else:
            document_count = 0
        
        return document_count
        
    def get_page_count(self, soup: BeautifulSoup):
        """Retrieve page count returned by the search of the CRA database.

        Args:
            soup (BeautifulSoup): Parsed html of webpage.

        Raises:
            ParseError: Error parsing the html for the variable of interest.

        Returns:
            int: Number of pages containing documents returned by the search parameters.
        """        
        results_pages = soup.find_all("span", class_="usa-pagination__link-text")
        
        if results_pages:
            for c in results_pages:
                if c.text.strip().lower() == "last":
                    a = c.parent
                    href = a["href"]
                    page_count = int(href.split("page=")[-1])
        elif not results_pages:
            page_count = 0
        else:
            raise ParseError("Failed to parse page count information from html.")
        
        return page_count
    
    @sleep_retry(300, retry=12)
    def scrape_population(self, params: dict, pages: int | list | range | tuple, documents: int = None, quietly: bool = False, **kwargs):
        """Scrape html for population of rules in CRA database.

        Args:
            params (dict): Parameters to pass to `request_soup()`.
            pages (int): Number of pages containing rule data. In practice, this should be equivalent to the value returned by `get_page_count()`.
            documents (int, optional): If non-zero `int`, print status updates on number of retrieved documents. Defaults to None.
            quietly (bool, optional): Do not print status updates. Defaults to False.

        Returns:
            dict: Results of the scraped data and accompanying metadata.
        """
        # check type of pages parameter
        if isinstance(pages, int):
            # add 1 because Python uses zero-based numbering
            page_range = range(pages + 1)
        elif isinstance(pages, (list, range, tuple)):
            page_range = pages
        
        # loop over pages and scrape data from each one
        all_rules = []
        for page in page_range:
            # get soup for this page
            soup_this_page = self.request_soup(params, page = page, strainer=create_soup_strainer("scrape_population"))
            
            # get rules on this page
            rules_this_page = soup_this_page.find_all("div", class_="views-row")
            if (len(rules_this_page) != 20) and (page != page_range[-1]):
                print(f"Rules on page: {len(rules_this_page)}", 
                      f"This page: {page}", 
                      f"Last page: {page_range[-1]}")
                raise ParseError("Failed to parse number of rules per page correctly.")
            
            # retrieve rules on a single page
            one_page = self.scrape_page(rules_this_page, page, collected_data=kwargs.get("collected_data"))
            
            all_rules.extend(one_page)
            if (documents is not None) and (not quietly):
                report_retrieval_status(len(all_rules), truncate(documents, places = -3), **kwargs)
        
        #dup_items = identify_duplicates(all_rules)
        #pprint(dup_items)
        
        all_rules_dedup = all_rules
        all_rules_dedup, dups = remove_duplicates(all_rules)
        if dups > 0:
            print(f"Filtered out {dups} duplicates.")
        
        output = self._add_output_metadata(all_rules_dedup, how="population")
        return output
    
    def scrape_page(self, 
                    rules_this_page: BeautifulSoup, 
                    page: int, 
                    collected_data: list = None):
        
        if collected_data:
            #control_num_list = (extract_control_number(r.get("url"), regex=False) for r in collected_data)
            url_list = (r.get("url") for r in collected_data)
        
        # loop over rules on a single page
        one_page = []
        for rule in rules_this_page:
            bookmark = rule.find("div", class_="teaser-search--bookmark").a
            #control_num = extract_control_number(f"{bookmark['href']}")
            url = f"{self.url_stem}{bookmark['href']}"
            if collected_data:
                #control_num_list = [extract_control_number(r.get("url")) for r in collected_data]
                #print(control_num)
                if url in url_list:
                #if control_num in control_num_list:
                    #print(url)
                    continue
            
            rows = rule.find_all("div", class_="teaser-search--row")
            rule_dict = {
                "page": page, 
                "url": url, #f"{self.url_stem}{bookmark['href']}", 
                #"control_num": control_num, 
                "type": bookmark.string.strip()
                }
            for row in rows:
                teasers = row.find_all("div", class_=has_teaser_search)
                for t in teasers:
                    label = clean_label(t.find("label").string.strip(":").lower())
                    div = t.find("div", class_=has_field_name)
                    if div.time is not None:
                        value = div.time["datetime"]
                    elif div.time is None:
                        value = div.string.strip()
                    else:
                        raise ParseError
                    rule_dict.update({label: value})
            one_page.append(rule_dict)
        
        return one_page

    def get_missing_documents(self, data: dict | list, params: dict, document_count: int, use_collected_data: bool = True):
        """Retrieve missing documents from population data result set. 
        Handles error with GAO's CRA database where duplicate entries appear and exclude other entries.

        Args:
            data (dict | list): Results collected from the initial set of requests.
            params (dict): Request parameters.
            document_count (int): Number of total documents returned by search.

        Returns:
            dict | None: Results of the scraped data and accompanying metadata, or None if no missing documents.
        """
        # check type of data input
        if isinstance(data, dict):
            validate = int(data.get("rule_count"))
            data_alt = deepcopy(data.get("results"))
        elif isinstance(data, list):
            validate =  len(data)
            data_alt = deepcopy(data)
        
        # only make additional requests if documents are missing
        # we don't want to waste time :)
        if validate != document_count:
            test_strings = list("abcdefghijklmnopqrstuvwxyz")  # the alphabet
            for i, s in enumerate(test_strings):
                print(f"Trying alternate search #{i + 1}: 'title' = {s}")
                params.update({"title": s})
                soup = self.request_soup(params, page=0, strainer=create_soup_strainer())
                pages = self.get_page_count(soup)
                
                # potential efficiency improvement: only scrape documents if missing
                if use_collected_data:
                    data_temp = self.scrape_population(params, pages, collected_data=data_alt)
                else:
                    data_temp = self.scrape_population(params, pages)
                
                data_alt.extend(data_temp["results"])

                data_alt, _ = remove_duplicates(data_alt)
                validate = len(data_alt)
                print(f"Running total unique: {validate}")
                if validate == document_count:
                    break
            
            output = {
                "description": "Contains basic records for rules in GAO's CRA Database of Rules.", 
                "source": self.url, 
                "date_retrieved": f"{date.today()}", 
                "major_only": self.major_only, 
                "rule_count": len(data_alt), 
                "results": data_alt
                }
            return output
        else:
            print("No missing documents.")
            return


class RuleScraper(Scraper):
    """Scraper for retrieving detailed data on rules in GAO's CRA database."""
    
    def __init__(self, input_data: dict | list | None = None, **kwargs) -> None:
        """Initialize RuleScraper, inheriting atrributes and methods from Scraper class.

        Args:
            input_data (dict | list, optional): Data on rules passed from PopulationScraper. Defaults to None.
        """        
        super().__init__(**kwargs)
        if input_data is None:
            self.population_data = {}
        else:
            self.population_data = input_data
    
    @sleep_retry(60)
    def scrape_rule(self, url: str):
        """Scrape detailed data for a single rule.

        Args:
            url (str): URL to that rule's page (with pattern "https://www.gao.gov/fedrules/100000").

        Returns:
            dict[str]: Results of the scraped data.
        """        
        rule_data = {"url": url}
        soup = self.request_soup(alt_url = url, strainer=create_soup_strainer("scrape_rule"))
        page_contents = soup.find("div", class_="main-page-content--inner")
        header = page_contents.header
        main = page_contents.main
        
        # get title from header
        title = header.find("h1", class_="split-headings").string.strip().title()
        rule_data.update({"title": title})
        
        # get rest of data from main
        field_names = main.find_all("div", class_=has_field_name)
        
        for field in field_names:
            
            label = field.find("h2", class_="field__label")
            item = field.find("div", class_="field__item")
            
            # there is probably a better way to do this but I can't think of it right now
            item_time = item.find("time")
            item_para = item.find("p")
            item_url = item.find("a")
            if item_time is not None:
                item_value = item_time["datetime"]
            elif item_para is not None:
                item_value = item_para.string
            elif item_url is not None:
                item_value = f"{self.url_stem}{item_url['href']}"
            else:
                item_value = item.string
            
            if label.string is not None:
                cleaned_label = clean_label(label.string.lower().strip())
                rule_data.update({cleaned_label: item_value})
        
        return rule_data
    
    def scrape_rules(self, path: Path | None = None, file_name: str | None = None, quietly: bool = False):
        """Scrape detailed data for multiple rules.

        Args:
            path (Path, optional): Path to input data. Defaults to None.
            file_name (str, optional): File name of input data. Defaults to None.
            quietly (bool, optional): Do not print status updates. Defaults to False.

        Returns:
            dict[str]: Results of the scraped data and accompanying metadata.
        """
        if (path is not None) and (file_name is not None):
            # import json
            self.population_data = self.from_json(path, file_name)
        
        # iteratively: read soup, scrape rule, append data
        try:
            rules = self.population_data.get("results")
        except AttributeError:
            rules = self.population_data
        
        all_rule_data = []
        for rule in rules:    
            #soup = self.request_soup(alt_url = rule.get("url"))
            rule_data = self.scrape_rule(url = rule.get("url"))
            all_rule_data.append(rule_data)
            if not quietly:
                report_retrieval_status(len(all_rule_data), truncate(len(rules), places = -3))
        
        print(f"Retrieved detailed information for {len(all_rule_data)} rules.")
        output = self._add_output_metadata(all_rule_data, how="detail")
        return output


class NewRuleScraper(PopulationScraper, RuleScraper):
    def __init__(self, path: Path | None = None, file_name: str | None = None, existing_population_data: dict | list | None = None, params: dict | None = None, interval: int = 30, **kwargs) -> None:
        super().__init__(**kwargs)
        self.path = path
        self.file_name = file_name
        if existing_population_data is not None:
            if isinstance(existing_population_data, list):
                self.existing_population_data = existing_population_data
            elif isinstance(existing_population_data, dict):
                self.existing_population_data = existing_population_data.get("results", [])
        elif (path is not None) and (file_name is not None):
            self.existing_population_data = self._get_existing_data(self.path, self.file_name)
        if isinstance(self.existing_population_data, dict):
            self.existing_population_size = len(self.existing_population_data.get("results", []))
        elif isinstance(self.existing_population_data, list):
            self.existing_population_size = len(self.existing_population_data)
        if params is not None:
            self.params = self.set_request_params(params)
        else:
            self.params = self.set_request_params(BASE_PARAMS)
        self.interval = interval
        self.new_population_size = self.get_document_count(self.request_soup(self.params))
    
    def _get_existing_data(self, path: Path, file_name: str) -> list:

        data = self.from_json(path, file_name)
        if isinstance(data, dict):
            data: list = data.get("results", [])
        elif isinstance(data, list):
            pass
        else:
            raise TypeError("JSON object loaded of wrong type. Must be `list` or `dict`.")
        return data
    
    def _get_interval_data(self, start_interval: date, end_interval: date) -> list:
        self.params |= {
                "received_start_date": start_interval, 
                "received_end_date": end_interval, 
                }
        soup = self.request_soup(self.params)
        interval_document_count = self.get_document_count(soup)
        interval_page_count = self.get_page_count(soup)
        interval_results = self.scrape_population(
            params=self.params, 
            pages=interval_page_count, 
            documents=interval_document_count, 
            quietly=True
            )
        return interval_results.get("results")

    def _find_interval(self, ):

        end_interval = date.today() + timedelta(days=1)
        start_interval = date.fromisoformat(get_last_received_date(self.existing_population_data))
        while True:
            start_interval = start_interval - timedelta(days=self.interval)
            self.params |= {"received_end_date": start_interval}
            soup = self.request_soup(self.params)
            pre_interval_documents = self.get_document_count(soup)
            print(f"Documents before {start_interval}: {pre_interval_documents}")
            if pre_interval_documents == self.existing_population_size:
                interval_results = self._get_interval_data(start_interval, end_interval)
                break
            else:
                continue
        return start_interval, interval_results
    
    def _combine_existing_and_new_data(self):
        start_interval, new_data = self._find_interval()
        combined_data = self.existing_population_data + new_data
        if len(combined_data) != self.new_population_size:
            print(len(combined_data))
            raise NewDataRetrievalError
        return start_interval, new_data, combined_data
    
    def scrape_new_rules(self, path: Path, file_name: str):
        
        start_interval, new_pop_data, combined_pop_data = self._combine_existing_and_new_data()
        self.population_data = new_pop_data
        new_detail_data: list = self.scrape_rules(quietly=True).get("results", [])
        existing_detail_data: list = self._get_existing_data(path, file_name)
        #print(set([type(rule.get("date_published_in_federal_register")) for rule in existing_detail_data]))
        existing_detail_data = [rule for rule in existing_detail_data if datetime.fromisoformat(rule.get("received", start_interval)).date() <= start_interval]
        #print("exi", len(existing_detail_data), existing_detail_data[0])
        #print("new", len(new_detail_data), new_detail_data[0])
        #exi = [rule.get("control_number") for rule in existing_detail_data]
        #new = [rule.get("control_number") for rule in new_detail_data]
        #missing_from_new = [rule for rule in exi if rule not in new]
        #missing_from_exi = [rule for rule in new if rule not in exi]
        combined_detail_data = existing_detail_data + new_detail_data
        combined_data = []
        for cat, data in (("population", combined_pop_data), ("detail", combined_detail_data)):
            data, dups = remove_duplicates(data)
            if dups > 0:
                print(f"Removed {dups} duplicates from {cat} data.")
            combined_data.append(data)
        combined_pop_data, combined_detail_data = combined_data
        if len(combined_pop_data) != len(combined_detail_data):
            print(identify_duplicates(combined_pop_data))
            print(len(combined_pop_data), len(combined_detail_data))
            detail = [r.get("fed_reg_number") for r in combined_detail_data]
            pop = [r.get("fed_reg_number") for r in combined_pop_data]
            missing_from_det = [rule for rule in pop if rule not in detail]
            missing_from_pop = [rule for rule in detail if rule not in pop]
            raise NewDataRetrievalError(f"Missing rules {missing_from_pop} from population data and {missing_from_det} from rule detail data.")
        return self._add_output_metadata(combined_pop_data, how="population"), self._add_output_metadata(combined_detail_data, how="detail")


#    def get_soup(self):
#        x = soup
    
    # need:
    # set of existing rules
    # total rules to collect
    # interval of time for start of search of new rules
    # identify size of initial set
    # identify comparison set // pre-initial set


def create_soup_strainer(for_method: str = None):
    """Create a soup strainer to improve efficiency when calling `request_soup()`.

    Args:
        for_method (str, optional): Method that will use the soup strainer. Defaults to None.

    Raises:
        ValueError: Invalid input of type `str`.
        ParseError: Catches other parsing errors.

    Returns:
        SoupStrainer: Object to pass to `request_soup()` 'strainer' parameter.
    """
    valid_inputs = (
        None, 
        "get_counts", 
        "get_page_count", 
        "get_document_count", 
        "scrape_population", 
        "scrape_rule", 
        "scrape_rules", 
        )
    
    if for_method in (None, "get_counts", "get_page_count", "get_document_count"):
        return SoupStrainer("div", class_="views-element-container")
        
    elif for_method == "scrape_population":
        return SoupStrainer("div", class_="views-row")
    
    elif for_method in ("scrape_rule", "scrape_rules"):
        return SoupStrainer("div", class_="main-page-content--inner")

    elif isinstance(for_method, str) and (for_method not in valid_inputs):
        raise ValueError(f"Invalid input. Parameter 'for_method' must be one of {', '.join(valid_inputs)}.")
    
    else:
        raise ParseError


def has_field_name(class_):
    """Helper function to pass to BeautifulSoup `find_all()` method. Identifies html tags containing field names."""
    return re.compile("field field--name-field-").search(class_)


def has_teaser_search(class_):
    """Helper function to pass to BeautifulSoup `find_all()` method. Identifies html tags containing "teaser-search" class."""
    return re.compile("teaser-search--").search(class_)


def clean_label(label: str, replace_with: str = "_"):
    """Clean field labels.

    Args:
        label (str): Field label.
        replace_with (str, optional): Character(s) that will replace whitespace. Defaults to "_".

    Returns:
        str: Cleaned field label.
    """    
    return re.compile("[\s\.]", re.I).sub(replace_with, label).replace("__", replace_with)


def get_retrieval_date(path : Path, file_name: str):
    """Get `date_retrieved` of existing data from .json file.

    Args:
        path (Path): Path to file.
        file_name (str): File name.

    Returns:
        str: String of retrieval date in YYYY-MM-DD format.
    """    
    with open(path / f"{file_name}.json", "r", encoding="utf-8") as f:
        data = json.load(f)
    
    return data["date_retrieved"]


def get_last_received_date(results: list | dict):
    """Get most recent received date plus one day from existing data.

    Args:
        path (Path): Path to file.
        file_name (str): File name.

    Returns:
        str: String of last received date plus one day in YYYY-MM-DD format.
    """
    if isinstance(results, dict):
        results = results["results"]
    elif isinstance(results, list):
        pass
    received_dates = (extract_date(r.get("received")) for r in results)
    received_list = sorted(received_dates, reverse=True)
    last_received_plus_one = received_list[0] + timedelta(days=1)
    return f"{last_received_plus_one}"


def identify_duplicates(results: list, key: str = "url") -> list[dict]:
    """Identify duplicates for further examination.

    Args:
        results (list): List of results to check for duplicates.
        key (str, optional): Key representing the duplicated key: value pair. Defaults to "url".

    Returns:
        list[dict]: Duplicated items from input list.
    """    
    url_list = [r.get(key) for r in results]
    c = Counter(url_list)
    dup_items = [r for r in results if r.get(key) in [k for k, v in c.items() if v > 1]]
    return dup_items


def remove_duplicates(results: list, key: str = "url"):
    """Filter out duplicates from list[dict] based on a key: value pair 
    ([source](https://www.geeksforgeeks.org/python-remove-duplicate-dictionaries-characterized-by-key/)).

    Args:
        results (list): List of results to filter out duplicates.
        key (str): Key representing the duplicated key: value pair.

    Returns:
        tuple[list, int]: deduplicated list, number of duplicates removed
    """    
    initial_count = len(results)
    
    # remove duplicates
    unique = set()
    res = []
    for r in results:

        # testing for already present value
        if r.get(key) not in unique:
            res.append(r)
            
            # adding to set if new value
            unique.add(r[key])
    
    filtered_count = len(res)
    return res, (initial_count - filtered_count)


def extract_control_number(string: str, regex: bool = True):
    """Extract a rule's 6-digit control number from a string.

    Args:
        string (str): String containing control number.
        regex (bool, optional): Extract using regular expressions. Defaults to True.

    Returns:
        str: Control number as string.
    """
    if regex:
        res = re.compile("\d{6}", re.I).search(string)
        
        if isinstance(res, re.Match):
            return res[0]
        else:
            return None
    else:
        return string.split("/")[-1]


def truncate(n: int | float, places: int = 0):
    """Truncate a number to a given number of places (positive values -> decimals; negative values -> whole numbers) 
    (source: [RealPython](https://realpython.com/python-rounding/#truncating))

    Args:
        n (int | float): Input number to truncate.
        places (int, optional): Number of places to truncate 'n'. Defaults to 0.

    Returns:
        int | float: Truncated value of 'n'.
    """
    multiplier = 10 ** places
    return int(n * multiplier) / multiplier


def report_retrieval_status(
        retrieved_documents: int, 
        total_documents: int, 
        n_status_updates: int = 10, 
    ) -> None:
    """Reports "n_status_updates" of the documents retrieved so far.

    Args:
        retrieved_documents (int): Count of documents retrieved.
        total_documents (int): Count of total documents requested. 
        n_status_updates (int, optional): Number of status updates to give. Defaults to 10.
    """
    # calculate how frequently to print a status update
    print_frequency = (total_documents // n_status_updates)

    if print_frequency == 0:
        print_frequency += 1  # adding 1 ensures no ZeroDivisionError

    if (retrieved_documents > 1) and (retrieved_documents % print_frequency == 0):
        print(f"Retrieved {retrieved_documents} rules.")


def pipeline(data_path: Path, 
             major_only: bool = True, 
             new_only: bool = False, 
             rule_detail: bool = True, 
             use_existing_pop_data: bool = False, 
             file_name_population: str | None = "population_major",
             file_name_detail: str | None = "rule_detail_major", 
             **kwargs):
    """Executes main pipeline for retrieving data from GAO's CRA database.

    Args:
        major_only (bool, optional): Retrieve only major rules. Defaults to True.
        new_only (bool, optional): Retrieve only new rules received by GAO. Defaults to False.
        rule_detail (bool, optional): Retrieve rule-level details by initializing a `RuleScraper()` instance. Defaults to True.
        use_existing_pop_data (bool, optional): Use existing population data file to retrieve rule-level details. Defaults to False.
        file_name_population: (str | None, optional): File name for existing population data without file suffix. Defaults to "population_major".
        file_name_detail: (str | None, optional): File name for existing rule detail data without file suffix. Defaults to "rule_detail_major".
    
    Returns:
        bool | None: Returns True if retrieved rule-level details, False if only population data, None if no rules to retrieve.
    """
    if major_only:
        type = "major"
    else:
        type = "all"
    
    if new_only:
        ns = NewRuleScraper(path=data_path, file_name=file_name_population, major_only=major_only, interval=1)
        pop, detail = ns.scrape_new_rules(path=data_path, file_name=file_name_detail)
        ns.to_json(pop, data_path, f"population_{type}")
        ns.to_json(detail, data_path, f"rule_detail_{type}")
        return True
    else:
        
        if use_existing_pop_data:
            ps = PopulationScraper(major_only=major_only, new_only=new_only)
            pop_data = ps.from_json(data_path, f"population_{type}").get("results")
            document_count = len(pop_data)
        else:
            # initialize PopulationScraper
            ps = PopulationScraper(major_only=major_only, new_only=new_only, **kwargs)
            
            # request and parse html
            params = ps.set_request_params(BASE_PARAMS, **kwargs)
            soup = ps.request_soup(params, page = 0, strainer=create_soup_strainer())
            document_count = ps.get_document_count(soup)
            if document_count < 1:
                print("No rules to retrieve.")
                return
            else:  # retrieve rules turned up by database search
                page_count = ps.get_page_count(soup)
                print(f"Requesting {document_count} rules from {page_count + 1} page(s).")
                
                # scrape population data and save
                pop_data = ps.scrape_population(params, page_count, document_count)
                
                # check for missing documents
                print("Checking for missing documents.")
                results = ps.get_missing_documents(pop_data, BASE_PARAMS, document_count)
                if results is not None:
                    print("Retrieved missing documents.")
                    pop_data = results
                
                # save population data
                ps.to_json(pop_data, data_path, f"population_{type}")
                
                # summarize rule types retrieved
                type_counts = Counter([rule["type"] for rule in pop_data["results"]])
                for k, v in type_counts.items():
                    print(f"{k}s: {v}")
        
        # retrieve rule-level detail data
        if rule_detail:
            print(f"Requesting {document_count} rules.")
             
            # initialize RuleScraper
            rs = RuleScraper(input_data=pop_data)
            
            # scrape rule detail data and save
            rule_data = rs.scrape_rules()
            rs.to_json(rule_data, data_path, f"rule_detail_{type}")
        
            return True
    
    return False


def scraper(
        data_path: Path, 
        y_inputs = ("y", "yes", "true"), 
        n_inputs = ("n", "no", "false")
    ):
    """Text-based interface for running the scraper pipeline. 
    Operates within a `while True` loop that doesn't break until it receives valid inputs.

    Args:
        data_path (Path): Path to the data files.

    Returns:
        bool: Returns True if ran through retrieval pipeline, False if no rules to retrieve.
    """    
    while True:
        
        # print prompts to console
        new_prompt = input("Retrieve only new rules (i.e., those added by GAO since last retrieval date)? [yes/no]: ").lower()
        
        # check user inputs
        valid_inputs = y_inputs + n_inputs
        if new_prompt in valid_inputs:
            
            # set major_only param
            major_only = True
            file_name = "population_major"

            # set new_only param
            if new_prompt in y_inputs:
                new_only = True
            elif new_prompt in n_inputs:
                new_only = False
            
            # skips rule_detail and use_existing_pop_data if new_only is True
            if not new_only:
                detail_prompt = input("Retrieve rule-level details? [yes/no]: ").lower()

                if detail_prompt in y_inputs:
                    rule_detail = True
                elif detail_prompt in n_inputs:
                    rule_detail = False
                
                if rule_detail:
                    existing_prompt = input("Use existing population data for retrieving rule-level details?\n(Select this if you previously retrieved population data and only want to retrieve rule-level details.) [yes/no]: ").lower()
                    if existing_prompt in y_inputs:
                        use_existing_pop_data = True
                    elif existing_prompt in n_inputs:
                        use_existing_pop_data = False
                else:
                    use_existing_pop_data = False
            else:
                rule_detail = False
                use_existing_pop_data = False
                
            # call scraper pipeline
            status = pipeline(
                data_path, 
                major_only=major_only, 
                new_only=new_only, 
                rule_detail=rule_detail, 
                use_existing_pop_data=use_existing_pop_data, 
                path=data_path, 
                file_name=file_name
                )
            return status

        else:
            print(f"Invalid input. Must enter one of the following: {', '.join(valid_inputs)}.")


if __name__ == "__main__":
    
    # profile time elapsed
    start = time.process_time()
    
    p = Path(__file__)
    data_path = p.parents[1].joinpath("raw_data")
    if not data_path.is_dir():
        data_path.mkdir(parents=True, exist_ok=True)
    
    scraper(data_path)
    
    # calculate time elapsed
    stop = time.process_time()
    print(f"CPU time: {stop - start:0.1f} seconds")
