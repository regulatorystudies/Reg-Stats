# -*- coding: utf-8 -*-
"""
Mark Febrizio

Created: 2024-01-16

Last modified: 2024-01-16
"""
# dependencies
from copy import deepcopy
from datetime import date
import functools
import json
import logging
from pathlib import Path
import re

from pandas import DataFrame
import requests

from preprocessing import (
    AgencyMetadata, 
    AgencyData, 
    extract_year, 
    date_in_quarter, 
    greater_than_date, 
    extract_docket_info, 
    create_docket_keys, 
    identify_duplicates, 
    extract_rin_info, 
    create_rin_keys, 
    )


BASE_PARAMS = {
    'per_page': 1000, 
    "page": 0, 
    'order': "oldest", 
    "conditions[type][]": "RULE", 
    }
BASE_URL = r'https://www.federalregister.gov/api/v1/documents.json?'
BASE_FIELDS = (
    'publication_date', 
    'effective_on', 
    'agency_names', 
    'agencies', 
    'title', 
    'abstract', 
    'action', 
    'citation', 
    'document_number', 
    'regulation_id_number_info', 
    'regulations_dot_gov_info', 
    'html_url', 
    )


# -- functions for handling API requests -- #


class QueryError(Exception):
    pass


def retrieve_results_by_next_page(endpoint_url: str, dict_params: dict) -> list:
    """Retrieve documents by accessing "next_page_url" returned by each request.

    Args:
        endpoint_url (str): url for documents.{format} endpoint.
        dict_params (dict): Paramters to pass in GET request.

    Raises:
        QueryError: Failed to retrieve documents from all pages.

    Returns:
        list: Documents retrieved from the API.
    """
    results = []
    response = requests.get(endpoint_url, params=dict_params).json()
    pages = response.get("total_pages", 1)
    next_page_url = response.get("next_page_url")
    counter = 0
    while next_page_url is not None:
        counter += 1
        results_this_page = response["results"]
        results.extend(results_this_page)
        response = requests.get(next_page_url).json()
        next_page_url = response.get("next_page_url")
    else:
        counter += 1
        results_this_page = response["results"]
        results.extend(results_this_page)
    
    # raise exception if failed to access all pages
    if counter != pages:
        raise QueryError(f"Failed to retrieve documents from {pages} pages.")
    
    return results


def query_documents_endpoint(endpoint_url: str, dict_params: dict):
    """GET request for documents endpoint.

    Args:
        endpoint_url (str): URL for API endpoint.
        dict_params (dict): Paramters to pass in GET request.

    Returns:
        tuple[list, int]: Tuple of API results, count of documents retrieved.
    """    
    results, count = [], 0
    response = requests.get(endpoint_url, params=dict_params).json()
    max_documents_threshold = 10000
    
    # handles queries returning no documents
    if response["count"] == 0:
        pass
    
    # handles queries that need multiple requests
    elif response["count"] > max_documents_threshold:
        
        # get range of dates
        start_date = dict_params.get("conditions[publication_date][gte]")
        end_date = dict_params.get("conditions[publication_date][lte]")
        
        # set range of years
        start_year = extract_year(start_date)
        if end_date is None:
            end_date = date.today()
            end_year = end_date.year
        else:
            end_year = extract_year(end_date)
        years = range(start_year, end_year + 1)
        
        # format: YYYY-MM-DD
        quarter_tuples = (
            ("01-01", "03-31"), ("04-01", "06-30"), 
            ("07-01", "09-30"), ("10-01", "12-31")
            )
        
        # retrieve documents
        dict_params_qrt = deepcopy(dict_params)
        for year in years:
            for quarter in quarter_tuples:            
                results_qrt = []
                
                # set start and end dates based on input date
                gte = date_in_quarter(start_date, year, quarter, return_quarter_end=False)
                lte = date_in_quarter(end_date, year, quarter)
                if greater_than_date(start_date, lte):
                    # skip quarters where start_date is later than last day of quarter
                    continue
                elif greater_than_date(gte, end_date):
                    # skip quarters where end_date is ealier than first day of quarter
                    break
                
                # update parameters by quarter
                dict_params_qrt.update({
                    "conditions[publication_date][gte]": f"{gte}", 
                    "conditions[publication_date][lte]": f"{lte}"
                                        })
                
                # get documents
                results_qrt = retrieve_results_by_next_page(endpoint_url, dict_params_qrt)
                results.extend(results_qrt)
                count += response["count"]
    
    # handles normal queries
    elif response["count"] in range(max_documents_threshold + 1):
        count += response["count"]
        results.extend(retrieve_results_by_next_page(endpoint_url, dict_params))
    
    # otherwise something went wrong
    else:
        raise QueryError(f"Query returned document count of {response['count']}.")

    duplicates = identify_duplicates(results, key="document_number")
    count_dups = len(duplicates)
    if count_dups > 0:
        raise QueryError(f"API request returned {count_dups} duplicate values.")
    
    return results, count


def get_documents_by_date(start_date: str, 
                          end_date: str | None = None, 
                          fields: tuple = BASE_FIELDS,
                          endpoint_url: str = BASE_URL, 
                          dict_params: dict = BASE_PARAMS):
    """Retrieve Federal Register documents using a date range.

    Args:
        start_date (str): Start date when documents were published (inclusive; format must be 'yyyy-mm-dd').
        end_date (str | None, optional): End date (inclusive; format must be 'yyyy-mm-dd'). Defaults to None (implies end date is `datetime.date.today()`).
        fields (tuple, optional): Fields/columns to retrieve. Defaults to ('document_number', 'publication_date', 'agency_names', 'agencies', 'citation', 'start_page', 'end_page', 'html_url', 'pdf_url', 'title', 'type', 'action', 'regulation_id_number_info', 'correction_of').
        endpoint_url (_type_, optional): Endpoint url. Defaults to r'https://www.federalregister.gov/api/v1/documents.json?'.

    Returns:
        tuple[list, int]: Tuple of API results, count of documents retrieved.
    """
    # update dictionary of parameters
    dict_params.update({
        'conditions[publication_date][gte]': f'{start_date}', 
        'fields[]': fields
        })
    
    # relies on functionality that empty strings '' are falsey in Python: https://docs.python.org/3/library/stdtypes.html#truth-value-testing
    if end_date:
        dict_params.update({'conditions[publication_date][lte]': f"{end_date}"})
    
    results, count = query_documents_endpoint(endpoint_url, dict_params)
    return results, count


# -- utils -- #


def export_data(df: DataFrame, 
                path: Path, 
                start_date: str, 
                end_date: str, 
                base_file_name: str = "fr_tracking"):
    """Save data to file in CSV format.

    Args:
        df (DataFrame): Data as a DataFrame.
        path (Path): Path to save directory.
        file_name (str, optional): File name. Defaults to f"federal_register_clips_{date.today()}.csv".
    """    
    with open(path / f"{base_file_name}_{start_date}_{end_date}.csv", "w", encoding = "utf-8") as f:
        df.to_csv(f, lineterminator="\n", index=False)
    print(f"Exported data as csv to {path}.")


def log_errors(func, filepath: Path = Path(__file__).parent / "error.log"):
    """Decorator for logging errors in given file.
    Supply a value for 'filepath' to change the default name or location of the error log.
    Defaults to filepath = Path(__file__).parent/"error.log".
    """
    @functools.wraps(func)
    def wrapper(*args, **kwargs):
        try:
            func(*args, **kwargs)
        except Exception as err:
            logging.basicConfig(
                filename=filepath, 
                encoding="utf-8", 
                format= "-----\n%(asctime)s -- %(levelname)s", 
                datefmt="%Y-%m-%d %H:%M:%S"
                )
            logging.exception("\n")
            print(f"Logged error ({err}) in {filepath.name}. Exiting program.")
    return wrapper


# -- main functions -- #


def pipeline(metadata: dict, schema: list[str], agency_format: str = "name"):
    """Main pipeline for retrieving Federal Register documents.

    Args:
        metadata (dict): Agency metadata for cleaning agency names.
        agency_format (str): Defaults to None.

    Returns:
        DataFrame: Output data.
    """
    while True:  # doesn't exit until correctly formatted input received
        pattern = r"\d{4}-[0-1]\d{1}-[0-3]\d{1}"
        start_date = input("Input start date [yyyy-mm-dd]: ")
        match_1 = re.fullmatch(pattern, start_date, flags=re.I)
        end_date = input("Input end date [yyyy-mm-dd]. Or just press enter to use today as the end date: ")
        match_2 = re.fullmatch(pattern, end_date, flags=re.I)
        if match_1 and (match_2 or end_date==""):
            results, count = get_documents_by_date(start_date, end_date=end_date)
            break
        else:
            print("Invalid input. Must enter dates in format 'yyyy-mm-dd'.")

    if count == 0:
        print("No documents returned.")
        return None
    
    # get rin info for documents; returns generator of dict
    results_with_rin_info = (create_rin_keys(doc, extract_rin_info(doc)) for doc in results)

    # get docket info for documents; returns generator of dict
    results_with_docket_info = (create_docket_keys(doc, extract_docket_info(doc)) for doc in results_with_rin_info)
    
    # create DataFrame; filter out documents; clean agency info
    df = DataFrame(list(results_with_docket_info))
    agency_data = AgencyData(df, metadata, schema)
    agency_data.preprocess_agencies(return_format=agency_format)
    df = agency_data.data
    
    # add new columns for coding to df
    add_columns = [
        "significant",
        "econ_significant",
        "3(f)(1) significant",
        "Major",
        "Notes", 
        ]
    df = df.reindex(columns = df.columns.to_list() + add_columns)
    df = df.rename(columns = {
        f"parent_{agency_format}": "department",
        f"subagency_{agency_format}": "agency", 
        "rin": "regulation_id_number", 
        "docket_id": "docket_number", 
        })
    
    output_columns = [
        "publication_date",
        "effective_on",
        "department",
        "agency",
        "title",
        "abstract",
        "action",
        "citation",
        "document_number",
        "regulation_id_number",
        "docket_number",
        "significant",
        "econ_significant",
        "3(f)(1) significant",
        "Major",
        "html_url",
        "independent_reg_agency",
        "Notes",
        ]
    
    if end_date == "":
        end_date = f"{date.today()}"
    
    # return data
    return df.loc[:, output_columns], start_date, end_date


@log_errors
def retrieve_rules(base_path: Path = Path(__file__).parents[1]):
    """Command-line interface for retrieving documents.
    """
    # get agency metadata and schema
    metadata_dir = base_path.joinpath("rule_tracking", "data")
    metadata_file = metadata_dir / "agencies_endpoint_metadata.json"
    if metadata_file.is_file():  # import metadata from local JSON
        with open(metadata_file, "r") as f:
            metadata = json.load(f)["results"]
        # if file exists, import from local JSON
        schema_file = metadata_dir / "agency_schema.json"
        if schema_file.is_file():
            with open(schema_file, "r") as f:
                schema = json.load(f)
        else:  # create instance and call get_schema()
            agency_metadata = AgencyMetadata()
            schema = agency_metadata.get_schema(metadata=metadata)
    else:  # retrieve from API and save
        agency_metadata = AgencyMetadata()
        agency_metadata.get_metadata()
        agency_metadata.transform()
        agency_metadata.save_metadata(metadata_dir)
        metadata = agency_metadata.transformed_data
        schema = agency_metadata.get_schema()
    
    # call pipeline to create dataframe
    df, start_date, end_date = pipeline(metadata, schema)

    # export if any data was retrieved
    if df is not None:
        export_data(df, base_path, start_date, end_date)


if __name__ == "__main__":
    
    retrieve_rules()
