# initialize
import json
from datetime import date
from pathlib import Path

from pandas import DataFrame, to_datetime, concat
from numpy import array

from federal_register_api import query_endpoint_documents
from search_columns import search_columns


# set file paths
p = Path(__file__)
MAIN_DIR = p.parents[1]  # main folder for Reg Stats chart; store output data here
API_DIR = p.parents[1].joinpath("API")  # folder for storing retrieved API data

# set constants
YEAR_RANGE = list(map(str, range(1995, date.today().year)))
FIELDS = ['action', 'agencies', 'agency_names', 'citation', 'correction_of', 'corrections', 
          'docket_ids', 'document_number', 'json_url', 'page_length', 'president', 'publication_date', 
          'regulation_id_numbers', 'significant', 'title', 'type'
          ]
SAVE_NAME_CSV = "federal_register_rules_presidential_year.csv"
#REPLACE_EXISTING = True


# ------------------
# define functions


def retrieve_documents(years: list, doctype: str, fields: list, save_path: Path, replace_existing: bool = True):
    """Retrieve documents from Federal Register API; save JSON; return results.

    Args:
        years (list): Retrieve documents from this list of years, based on publication date.
        type (str): Document type to retrieve.
        fields (list): Fields to retrieve.
        save_path (Path): Path to save JSON data.

    Returns:
        list[dict]: List of retrieved documents.
    """
    # set file names
    file_name = save_path / f"documents_endpoint_{doctype}_{years[0]}_{years[-1]}.json"
    last_year = int(years[-1]) + 1
    file_name_jan = save_path / f"documents_endpoint_{doctype}_{last_year}_Jan.json"
    
    # check if file already exists
    # don't overwrite unless replace_existing is True
    if not (file_name.is_file() and file_name_jan.is_file()) or replace_existing:
        type_list = [doctype.upper()]  # API parameter accepts all uppercase
        
        # query endpoint for non-Jan documents
        print(f"Retrieving type = {doctype}...")
        documents = query_endpoint_documents(years, doctypeList=type_list, fieldsList=fields)

        # save json file
        with open(file_name, 'w', encoding='utf-8') as f:
            json.dump(documents, f, indent=4)

        # query endpoint for non-Jan documents
        
        date_range = (f"{last_year}-01-01", f"{last_year}-01-31")
        documents_jan = query_endpoint_documents(date_range, 
                                                doctypeList=doctype, 
                                                fieldsList=fields, 
                                                by_year=False)
        
        # save json file
        with open(file_name_jan, 'w', encoding='utf-8') as f:
            json.dump(documents_jan, f, indent=4)
        
        # return list of documents
        print("Retrieved documents and exported as JSON!")
        return documents["results"] + documents_jan["results"]


def format_documents(documents: list[dict]):
    """Format Federal Register documents to generate count by presidential year.

    Args:
        documents (list[dict]): List of documents.

    Returns:
        DataFrame: Pandas DataFrame with formatted data.
    """
    # create dataframe
    df = DataFrame(documents)
    #df.info()

    # convert publication date to datetime format
    df['publication_dt'] = to_datetime(df['publication_date'])

    # create year column
    df['publication_year'] = df.apply(lambda x: x['publication_dt'].year, axis=1)
    df['publication_month'] = df.apply(lambda x: x['publication_dt'].month, axis=1)

    # create presidential year column
    df['presidential_year'] = df['publication_year']
    bool_jan = array(df['publication_month'] == 1)
    df.loc[bool_jan, 'presidential_year'] = df.loc[bool_jan, 'publication_year'] - 1
    
    # return dataframe
    return df


def filter_documents(df: DataFrame):
    """Filter out corrections from Federal Register documents. 
    Identifies corrections using `corrrection_of` field and regex searches of `document_number`, `title`, and `action` fields.

    Args:
        df (DataFrame): Federal Register data.

    Returns:
        DataFrame: Federal Register data with corrections removed.
    """
    # get original column names
    cols = df.columns.tolist()
    
    # filter out corrections
    # 1. Using correction fields
    bool_na = array(df["correction_of"].isna())
    #df_filtered = df.loc[bool_na, :]  # keep when correction_of is missing
    print(f"correction_of missing: {sum(bool_na)}")
    
    # 2. Searching other fields
    search_1 = search_columns(df, [r"^C[\d]"], ["document_number"], 
                                 return_column="indicator1")
    search_2 = search_columns(df, [r"(?:;\scorrection\b)|(?:\bcorrecting\samend[\w]+\b)"], ["title", "action"], 
                                 return_column="indicator2")
    bool_search = array(search_1["indicator1"] == 1) | array(search_2["indicator2"] == 1)
    print(f"Flagged documents: {sum(bool_search)}")
    #bool_search = array(search_2["indicator2"] == 1)
    
    # separate corrections from non-corrections
    df_no_corrections = df.loc[(bool_na & ~bool_search), cols]  # remove flagged documents
    df_corrections = df.loc[(~bool_na | bool_search), cols]
    
    # return filtered results
    if len(df) == len(df_no_corrections) + len(df_corrections):
        return df_no_corrections, df_corrections
    else:
        print(f"Total: {len(df)}", 
              f"Non-corrections: {len(df_no_corrections)}", 
              f"Corrections: {len(df_corrections)}", 
              sep="\n")


def group_documents(df: DataFrame, return_column: str):
    """Group Federal Register documents by presidential year. 
    A [presidential year](https://regulatorystudies.columbian.gwu.edu/reg-stats) is defined as Feb. 1 to Jan. 31.

    Args:
        df (DataFrame): Input data for grouping.
        return_column (str): Name of grouped column to return.

    Returns:
        DataFrame: Documents grouped by presidential year.
    """
    grouped_df = df.loc[:, ['presidential_year', 'document_number']].groupby('presidential_year').agg('count')
    grouped_df = grouped_df.rename(columns = {'document_number': return_column})
    return grouped_df


def load_combine_documents(years: list, doctype: str, load_path: Path):
    """Load documents and combine with January data.

    Args:
        years (list): List of years.
        doctype (str): Document type (e.g., RULE, PRORULE, NOTICE, PRESDOCU).
        load_path (Path): Path to documents.

    Returns:
        list[dict]: List of retrieved documents.
    """
    # define start, end, and last Jan. year
    start, end, last_year = years[0], years[-1], int(years[-1]) + 1
    
    # load main set of documents
    file_name = f"documents_endpoint_{doctype}_{start}_{end}.json"
    with open(load_path / file_name, "r") as f:
        set_a = json.load(f)
    
    # load last year January documents
    file_name = f"documents_endpoint_{doctype}_{last_year}_Jan.json"
    with open(load_path / file_name, "r") as f:
        set_b = json.load(f)
    
    # combine and return
    return set_a["results"] + set_b["results"]


def main(years: list, fields: list, raw_path: Path, processed_path: Path, processed_file_name: str, replace_existing: bool = True):
    """Runs entire pipeline to retrieve and process documents by presidential year.

    Args:
        years (list): Years of interest.
        fields (list): Fields to retrieve.
        raw_path (Path): Path for saving API data.
        processed_path (Path): Path for saving processed data.
        processed_file_name (str): File name for processed data.
        replace_existing (bool, optional): Overwrite existing API data. Defaults to True.
    """
    # print directory paths
    print(f"Main folder for processed data: {processed_path}", f"Folder for API data: {raw_path}", sep="\n")
    
    # final rules
    doctype = "RULE"
    final_rules = retrieve_documents(years, doctype, fields, raw_path, replace_existing=replace_existing)
    
    try:  # block handles when documents have already been retrieved
        dfRules = format_documents(final_rules)
    except:
        final_rules = load_combine_documents(years, doctype, raw_path)
        dfRules = format_documents(final_rules)

    dfRules, dfCorrections_rule = filter_documents(dfRules)
    dfRules_grouped = group_documents(dfRules, "final_rules")
    
    # proposed rules
    doctype = "PRORULE"
    proposed_rules = retrieve_documents(years, doctype, fields, raw_path, replace_existing=replace_existing)

    try:  # block handles when documents have already been retrieved
        dfProps = format_documents(proposed_rules)
    except:
        proposed_rules = load_combine_documents(years, doctype, raw_path)
        dfProps = format_documents(proposed_rules)
    
    dfProps, dfCorrections_prop = filter_documents(dfProps)
    dfProps_grouped = group_documents(dfProps, "proposed_rules")

    # join dataframes: non-corrections
    dfPrez = dfRules_grouped.join(dfProps_grouped)
    dfPrez = dfPrez.drop(index=1994, errors='ignore')  # drop partial data from 1994 presidential year
    dfPrez = dfPrez.rename_axis('presidential_year', axis=0)  # rename axis
    dfPrez = dfPrez.reset_index()  # reset index so presidential year becomes a column
    print(dfPrez)

    # save csv file
    file_name = processed_path / processed_file_name
    with open(file_name, 'w', encoding='utf-8') as f:
        dfPrez.to_csv(f, index=False, lineterminator='\n')

    # append dataframes: corrections
    dfCorrections_rule["type"] = "RULE"
    dfCorrections_prop["type"] = "PRORULE"
    dfCorrections = concat([dfCorrections_rule, dfCorrections_prop], 
                           axis=0, 
                           ignore_index=True, 
                           verify_integrity=True)

    # save csv file
    file_name = processed_path / "federal_register_corrections.csv"
    with open(file_name, 'w', encoding='utf-8') as f:
        dfCorrections.to_csv(f, index=False, lineterminator='\n')


if __name__ == "__main__":
    # run the pipeline
    main(YEAR_RANGE, FIELDS, API_DIR, MAIN_DIR, SAVE_NAME_CSV)

