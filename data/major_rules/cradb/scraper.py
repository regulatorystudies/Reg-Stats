from collections import Counter
from copy import deepcopy
from datetime import date
import json
from pathlib import Path
#from pprint import pprint
import re
import time

import requests
from bs4 import BeautifulSoup, SoupStrainer


BASE_PARAMS = {
    "processed": 1, 
    "type": "all", 
    "priority": "all", 
    }


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


class Scraper:
    """Base scraper class for retrieving data from GAO's Congressional Review Act (CRA) database."""    
    def __init__(
            self, 
            base_url: str = "https://www.gao.gov/legal/other-legal-work/congressional-review-act", 
            url_stem: str = "https://www.gao.gov", 
            #request_params: dict = {
            #    "processed": 1, 
            #    "type": "all", 
            #    "priority": "all", 
            #    "page": 0
            #    }, 
            major_only: bool = False, 
            new_only: bool = False, **kwargs):
        """Initialize base scraper for CRA database.

        Args:
            base_url (str, optional): URL to pass to `requests.get()`. Defaults to "https://www.gao.gov/legal/other-legal-work/congressional-review-act".
            url_stem (str, optional): Stem of GAO website URL for constructing rule-level URLs. Defaults to "https://www.gao.gov".
            request_params (dict, optional): Parameters to pass to `requests.get()`. Defaults to {"processed": 1, "type": "all", "priority": "all", "page": 0}.
            major_only (bool, optional): Only retrieve rules of type "Major". Defaults to False.
            new_only (bool, optional): Only retrieve rules added since last collection date (uses "date_retrieved" from existing dataset). Defaults to False.
        """
        self.url = base_url
        self.url_stem = url_stem
        #self.params = request_params
        self.major_only = major_only
        #if self.major_only:  # only updates parameters when major_only = True
        #    self.params.update({"type": "Major"})
        self.new_only = new_only
        #if self.new_only:
        #    start_date = get_retrieval_date(kwargs.get("path"), kwargs.get("file_name"))
        #    self.params.update({"received_start_date": start_date})
    
    def set_request_params(self, params: dict, **kwargs):
        
        if self.major_only:
            params.update({"type": "Major"})
        
        if self.new_only:
            start_date = get_retrieval_date(kwargs.get("path"), kwargs.get("file_name"))
            params.update({"received_start_date": start_date})
        
        return params
    
    def request_soup(self, params: dict = None, page: int = None, alt_url: str = None, parser: str = "lxml", strainer: SoupStrainer = None):
        """Request and parse html using `requests` and `bs4`, returning a processed `BeautifulSoup` object.

        Args:
            page (int, optional): Page number for updating requests parameters. Defaults to None.
            alt_url (str, optional): Supply an alternate URL for the request, rather than the default `base_url`. Defaults to None.
            parser (str, optional): Parser to pass to `BeautifulSoup()`. Defaults to "lxml".

        Returns:
            BeautifulSoup: Parsed html as a BeautifulSoup object.
        """
        if (params is not None) and (page is not None):
            # only updates parameters when page number is given
            #self.params.update({"page": page})
            params.update({"page": page})
            #print(params)
        
        if alt_url is not None:  # makes different request when alt_url is given
            response = requests.get(alt_url)
        else:
            response = requests.get(self.url, params=params)
        
        if response.status_code != 200:
            print(f"Status: {response.status_code}", 
                f"\nReason: {response.reason}")
            response.raise_for_status()
        soup = BeautifulSoup(response.content, parser, parse_only=strainer)
        return soup
    
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
            raise ParseError
        
        return page_count
    
    @sleep_retry(300, retry=12)
    def scrape_population(self, params: dict, pages: int | list, documents: int = None, **kwargs):
        """Scrape html for population of rules in CRA database.

        Args:
            params (dict): Parameters to pass to `request_soup()`.
            pages (int): Number of pages containing rule data. In practice, this should be equivalent to the value returned by `get_page_count()`.
            documents (int, optional): If non-zero `int`, print status updates on number of retrieved documents. Defaults to None.

        Returns:
            dict[str]: Results of the scraped data and accompanying metadata.
        """
        if isinstance(pages, int):
            page_range = range(pages + 1)  # zero-based numbering
        elif isinstance(pages, list):
            page_range = pages
        
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
                
            one_page = []
            for rule in rules_this_page:
                bookmark = rule.find("div", class_="teaser-search--bookmark").a
                rows = rule.find_all("div", class_="teaser-search--row")
                rule_dict = {
                    "page": page, 
                    "url": f"{self.url_stem}{bookmark['href']}", 
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
            
            all_rules.extend(one_page)
            if documents is not None:
                report_retrieval_status(len(all_rules), truncate(documents, places = -3), **kwargs)
        
        #dup_items = identify_duplicates(all_rules)
        #pprint(dup_items)
        
        all_rules_dedup = all_rules
        all_rules_dedup, dups = remove_duplicates(all_rules)
        print(f"Filtered out {dups} duplicates.")
        
        output = {
            "description": "Contains basic records for rules in GAO's CRA Database of Rules.", 
            "source": self.url, 
            "date_retrieved": f"{date.today()}", 
            "major_only": self.major_only, 
            "rule_count": len(all_rules_dedup), 
            "results": all_rules_dedup
            }
        return output
    
    def get_missing_documents(self, data: dict | list, params: dict, document_count: int):
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


class RuleScraper(Scraper):
    """Scraper for retrieving detailed data on rules in GAO's CRA database."""
    def __init__(self, input_data: dict | list = None, **kwargs) -> None:
        """Initialize RuleScraper, inheriting atrributes and methods from Scraper class.

        Args:
            input_data (dict | list, optional): Data on rules passed from PopulationScraper. Defaults to None.
        """        
        super().__init__(**kwargs)
        if input_data is None:
            self.data = {}
        else:
            self.data = input_data
    
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
            if item_time is not None:
                item_value = item_time["datetime"]
            elif item_para is not None:
                item_value = item_para.string
            else:
                item_value = item.string
            
            if label.string is not None:
                cleaned_label = clean_label(label.string.lower().strip())
                rule_data.update({cleaned_label: item_value})
        
        return rule_data
    
    def scrape_rules(self, path: Path = None, file_name: str = None):
        """Scrape detailed data for multiple rules.

        Args:
            path (Path, optional): Path to input data. Defaults to None.
            file_name (str, optional): File name of input data. Defaults to None.

        Returns:
            dict[str]: Results of the scraped data and accompanying metadata.
        """        
        if (path is not None) and (file_name is not None):
            # import json
            self.data = self.from_json(path, file_name)
        
        # iteratively: read soup, scrape rule, append data
        try:
            rules = self.data.get("results")
        except AttributeError:
            rules = self.data
        
        all_rule_data = []
        for rule in rules:    
            #soup = self.request_soup(alt_url = rule.get("url"))
            rule_data = self.scrape_rule(url = rule.get("url"))
            all_rule_data.append(rule_data)
            report_retrieval_status(len(all_rule_data), truncate(len(rules), places = -3))
        
        print(f"Retrieved detailed information for {len(all_rule_data)} rules.")
        
        example_control_number = r"{control_number}"
        output = {
            "description": "Contains detailed records for rules in GAO's CRA Database of Rules.", 
            "sources": f"Series of links with pattern {self.url_stem}/fedrules/{example_control_number}", 
            "date_retrieved": f"{date.today()}", 
            "rule_count": len(all_rule_data), 
            "results": all_rule_data
            }
        
        return output


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
    """Filter out duplicates from list[dict] based on a key: value pair ([source](https://www.geeksforgeeks.org/python-remove-duplicate-dictionaries-characterized-by-key/)).

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


def truncate(n: int | float, places: int = 0):
    """Truncate a number to a given number of places (positive values -> decimals; negative values -> whole numbers) (source: [RealPython](https://realpython.com/python-rounding/#truncating))

    Args:
        n (int | float): Input number to truncate.
        places (int, optional): Number of places to truncate 'n'. Defaults to 0.

    Returns:
        int | float: Truncated value of 'n'.
    """
    multiplier = 10 ** places
    return int(n * multiplier) / multiplier


def report_retrieval_status(retrieved_documents: int, total_documents: int, n_status_updates: int = 10):

    print_frequency = (total_documents // n_status_updates)

    if print_frequency == 0:
        print_frequency += 1  # adding 1 ensures no ZeroDivisionError

    if (retrieved_documents > 1) and (retrieved_documents % print_frequency == 0):
        print(f"Retrieved {retrieved_documents} rules.")


def pipeline(data_path: Path, 
             major_only: bool = False, 
             new_only: bool = False, 
             rule_detail: bool = True, 
             use_existing_pop_data: bool = False, 
             **kwargs):
    """Executes main pipeline for retrieving data from GAO's CRA database.

    Args:
        major_only (bool, optional): Retrieve only major rules. Defaults to False.
        new_only (bool, optional): Retrieve only new rules received by GAO (when True, must pass `path` and `file_name` as **kwargs). Defaults to False.
    """
    if major_only:
        type = "major"
    else:
        type = "all"
    
    if use_existing_pop_data and (not new_only):
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
            
            # add existing dataset to new documents
            if new_only:
                new_data = deepcopy(pop_data.get("results"))
                existing_pop_data = ps.from_json(data_path, f"population_{type}").get("results")
                pop_data["results"].extend(existing_pop_data)
            
            # save population data
            ps.to_json(pop_data, data_path, f"population_{type}")
            
            # summarize rule types retrieved
            type_counts = Counter([rule["type"] for rule in pop_data["results"]])
            print(f"Retrieved {type_counts.total()} rules.")
            for k, v in type_counts.items():
                print(f"{k}s: {v}")
    
    # retrieve rule-level detail data
    if rule_detail:
        print(f"Requesting {document_count} rules.")
        
        if new_only:
            pop_data = new_data
            existing_rule_data = ps.from_json(data_path, f"rule_detail_{type}").get("results")
            
        # initialize RuleScraper
        rs = RuleScraper(input_data=pop_data)
        
        # scrape rule detail data and save
        rule_data = rs.scrape_rules()
        if new_only:
            rule_data["results"].extend(existing_rule_data)
        rs.to_json(rule_data, data_path, f"rule_detail_{type}")


def main(data_path: Path):
    while True:
        
        # print prompts to console
        major_prompt = input("Retrieve only major rules? [yes/no]: ").lower()
        new_prompt = input("Retrieve only new rules (i.e., those received by GAO since last retrieval date)? [yes/no]: ").lower()
        detail_prompt = input("Retrieve rule-level details? [yes/no]: ").lower()
        existing_prompt = input("Use existing population data for retrieving rule-level details? [yes/no]: ").lower()
        
        # check user inputs
        y_inputs = ["y", "yes", "true"]
        n_inputs = ["n", "no", "false"]
        valid_inputs = y_inputs + n_inputs
        if ((major_prompt in valid_inputs) 
            and (new_prompt in valid_inputs) 
            and (detail_prompt in valid_inputs)):
            
            # set major_only param
            if major_prompt in y_inputs:
                major_only = True
                file_name = "population_major"
            elif major_prompt in n_inputs:
                major_only = False
                file_name = "population_all"
            
            # set new_only param
            if new_prompt in y_inputs:
                new_only = True
            elif new_prompt in n_inputs:
                new_only = False

            if detail_prompt in y_inputs:
                rule_detail = True
            elif detail_prompt in n_inputs:
                rule_detail = False
            
            if existing_prompt in y_inputs:
                use_existing_pop_data = True
            elif existing_prompt in n_inputs:
                use_existing_pop_data = False
                
            # call scraper pipeline
            pipeline(
                data_path, 
                major_only=major_only, 
                new_only=new_only, 
                rule_detail=rule_detail, 
                use_existing_pop_data=use_existing_pop_data, 
                path=data_path, 
                file_name=file_name
                )
            break

        else:
            print(f"Invalid input. Must enter one of the following: {', '.join(valid_inputs)}.")


if __name__ == "__main__":
    
    # profile time elapsed
    start = time.process_time()
    
    p = Path(__file__)
    data_path = p.parents[1].joinpath("raw_data")
    if not data_path.is_dir():
        data_path.mkdir(parents=True, exist_ok=True)
    
    main(data_path)
    
    # calculate time elapsed
    stop = time.process_time()
    print(f"CPU time: {stop - start:0.1f} seconds")
