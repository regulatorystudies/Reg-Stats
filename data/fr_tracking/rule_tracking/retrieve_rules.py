# -*- coding: utf-8 -*-

from datetime import date
import functools
import logging
from pathlib import Path
import re

from fr_toolbelt.api_requests import get_documents_by_date
from fr_toolbelt.preprocessing import process_documents
from pandas import DataFrame


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


def log_errors(func, filepath: Path = Path(__file__).parents[1], filename: str = "error.log"):
    """Decorator for logging errors in given file.
    Supply a value for 'filepath' or 'filename' to change location or the default name of the error log.
    Defaults to filepath = Path(__file__).parents[1], filename = "error.log".
    """
    @functools.wraps(func)
    def wrapper(*args, **kwargs):
        try:
            func(*args, **kwargs)
        except Exception as err:
            logging.basicConfig(
                filename=filepath/filename, 
                encoding="utf-8", 
                format= "-----\n%(asctime)s -- %(levelname)s", 
                datefmt="%Y-%m-%d %H:%M:%S"
                )
            logging.exception("\n")
            print(f"Logged error ({err}) in {filepath.name}. Exiting program.")
    return wrapper


# -- main functions -- #


def retrieve_rules(start_date: str | date, end_date: str | date, agency_format: str = "name"):
    """Main pipeline for retrieving Federal Register documents.

    Args:
        start_date (str): Start of time period in valid ISO 8601 format.
        end_date (str): End of time period in valid ISO 8601 format.
        agency_format (str): Return format based on available fields in agency metadata. Defaults to "name".

    Returns:
        DataFrame: Output data.
    """
    results, count = get_documents_by_date(start_date, end_date=end_date, document_types=("RULE", ), fields=BASE_FIELDS)
    if count == 0:
        print("No documents returned.")
        return None
    
    # process retrieved results
    results_processed = process_documents(
        results, 
        which=("agencies", "dockets", "rin", ), 
        return_format=agency_format, 
        docket_data_source="regulations_dot_gov_info", 
        )

    # create DataFrame of results
    df = DataFrame(results_processed)
    df = df.astype({"independent_reg_agency": "int64"})
    
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
        "independent_reg_agency",
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
        "Notes",
        ]
    
    # return data
    return df.loc[:, output_columns]


@log_errors
def main(base_path: Path = Path(__file__).parent):
    """Command-line interface for retrieving documents.
    """
    while True:  # doesn't exit until correctly formatted input received
        pattern = r"\d{4}-[0-1]\d{1}-[0-3]\d{1}"
        start_date = input("Input start date [yyyy-mm-dd]: ")
        match_1 = re.fullmatch(pattern, start_date, flags=re.I)
        end_date = input("Input end date [yyyy-mm-dd]. Or just press enter to use today as the end date: ")
        match_2 = re.fullmatch(pattern, end_date, flags=re.I)
        if match_1 and (match_2 or end_date==""):
            # set end_date if blank
            if end_date == "":
                end_date = f"{date.today()}"
                        
            # call pipeline to create dataframe
            df = retrieve_rules(start_date, end_date)
            break
        else:
            print("Invalid input. Must enter dates in format 'yyyy-mm-dd'.")

    # export if any data was retrieved
    if df is not None:
        export_data(df, base_path.parent, start_date, end_date)


if __name__ == "__main__":
    
    main()
