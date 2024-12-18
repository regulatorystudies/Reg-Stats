# initialize
import json
from datetime import date
from pathlib import Path

from pandas import DataFrame, to_datetime, concat
from numpy import array
from fr_toolbelt.api_requests import get_documents_by_date

from filter_documents import filter_corrections

# set file paths
p = Path(__file__)
MAIN_DIR = p.parents[1]  # main folder for Reg Stats chart; store output data here
API_DIR = p.parents[1].joinpath("_api")  # folder for storing retrieved API data
if not API_DIR.exists():
    API_DIR.mkdir(parents=True, exist_ok=True)

# set constants
YEAR_RANGE = [f"{yr}" for yr in range(1995, date.today().year)]
FIELDS = [
    "action", "agencies", "agency_names", "citation", "correction_of", "corrections", 
    "document_number", "json_url", "president", "publication_date", "title", "type", 
    ]
SAVE_NAME_CSV = "federal_register_rules_by_presidential_year.csv"


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
    
    # check if file already exists
    # don't overwrite unless replace_existing is True
    if (not file_name.is_file()) or replace_existing:
        type_list = [doctype.upper()]  # API parameter accepts all uppercase
        
        # query endpoint for documents
        print(f"Retrieving type = {doctype}...")
        start_date = f"{years[0]}-01-01"
        end_date = f"{last_year}-01-31"
        documents, _ = get_documents_by_date(
            start_date, 
            end_date, 
            document_types=type_list, 
            fields=fields,
            handle_duplicates="flag"
            )

        # check for duplicates; use False as default value
        dups = len(list(r for r in documents if r.get("duplicate", False) == True))
        if dups > 0:
            print(f"Flagged {dups} duplicate documents.")
        
        # save json file
        with open(file_name, "w", encoding="utf-8") as f:
            json.dump(documents, f, indent=4)
        
        # return list of documents
        print("Retrieved documents and exported as JSON!")
        return documents


def format_documents(documents: list[dict]):
    """Format Federal Register documents to generate count by presidential year.

    Args:
        documents (list[dict]): List of documents.

    Returns:
        DataFrame: Pandas DataFrame with formatted data.
    """
    # create dataframe
    df = DataFrame(documents)
    
    # convert publication date to datetime format
    df["publication_dt"] = to_datetime(df["publication_date"])

    # create year column
    df["publication_year"] = df.apply(lambda x: x["publication_dt"].year, axis=1)
    df["publication_month"] = df.apply(lambda x: x["publication_dt"].month, axis=1)

    # create presidential year column
    df["presidential_year"] = df["publication_year"]
    bool_jan = array(df["publication_month"] == 1)
    df.loc[bool_jan, "presidential_year"] = df.loc[bool_jan, "publication_year"] - 1
    
    # return dataframe
    return df


def group_documents(df: DataFrame, group_column: str = "presidential_year", value_column: str = "document_number", return_column: str = None):
    """Group Federal Register documents by presidential year. 
    A [presidential year](https://regulatorystudies.columbian.gwu.edu/reg-stats) is defined as Feb. 1 to Jan. 31.

    Args:
        df (DataFrame): Input data for grouping.
        return_column (str): Name of grouped column to return.

    Returns:
        DataFrame: Documents grouped by presidential year.
    """
    grouped_df = df.loc[:, [
        group_column, 
        value_column, 
        ]].groupby(group_column).agg("count")
    if return_column is not None:
        grouped_df = grouped_df.rename(columns = {value_column: return_column})
    return grouped_df


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
    
    # get and process documents
    df_list, corrections_list = [], []
    doctypes = {"RULE": "final_rules", "PRORULE": "proposed_rules"}
    for doctype, fieldname in doctypes.items():
        documents = retrieve_documents(years, doctype, fields, raw_path, replace_existing=replace_existing)
        df = format_documents(documents)
        df, corrections = filter_corrections(df)
        corrections.loc[:, "type"] = doctype
        df_grouped = group_documents(df, return_column=fieldname)
        df_list.append(df_grouped)
        corrections_list.append(corrections)
    
    # join dataframes: non-corrections
    dfPrez = df_list[0].join(df_list[1])
    dfPrez = dfPrez.drop(index=1994, errors="ignore")  # drop partial data from 1994 presidential year
    dfPrez = dfPrez.rename_axis("presidential_year", axis=0)  # rename axis
    dfPrez = dfPrez.reset_index()  # reset index so presidential year becomes a column
    print(dfPrez)

    # save csv file
    file_name = processed_path / processed_file_name
    with open(file_name, "w", encoding="utf-8") as f:
        dfPrez.to_csv(f, index=False, lineterminator="\n")

    # append dataframes: corrections
    dfCorrections = concat(
        corrections_list, 
        axis=0, 
        ignore_index=True, 
        verify_integrity=True
        )

    # save csv file
    file_name = processed_path / "federal_register_corrections.csv"
    with open(file_name, "w", encoding="utf-8") as f:
        dfCorrections.to_csv(f, index=False, lineterminator="\n")


if __name__ == "__main__":
    
    # run the pipeline
    main(YEAR_RANGE, FIELDS, API_DIR, MAIN_DIR, SAVE_NAME_CSV)
