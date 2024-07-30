import itertools
import re

from numpy import array
from pandas import DataFrame


class SearchError(Exception):
    """Search returned misaligned results."""
    pass


def search_columns(df: DataFrame, 
                   patterns: list, 
                   columns: list, 
                   return_as: str = "indicator_column", 
                   return_column: str = "indicator", 
                   re_flags = re.I | re.X):
    """Search columns for string patterns within dataframe columns.

    Args:
        df (DataFrame): Input data in format of pandas dataframe.
        patterns (list): List of string patterns to input, compatible with regex.
        columns (list): List of column names to search for input patterns.
        return_as (str, optional): Return a DataFrame with indicator column ("indicator_column") or filtered by the search terms ("filtered_df"). Defaults to "indicator_column".
        re_flags (optional): Regex flags to use. Defaults to re.I | re.X.

    Raises:
        TypeError: Raises exception when `patterns` or `columns` parameters are not lists.
        ValueError: Raises exception when `patterns` or `columns` parameters have incorrect length.
        ValueError: Raises exception when `return_as` parameter receives an incorrect value.

    Returns:
        DataFrame: DataFrame with "indicator" column or filtered by search terms.
    """
    # create list object for appending boolean arrays
    bool_list = []
    
    # ensure that input patterns and columns are formatted as lists
    if not (isinstance(patterns, list) and isinstance(columns, list)):
        raise TypeError('Inputs for "patterns" and "columns" keywords must be lists.')
        
    if len(patterns) == len(columns):
        # create list of inputs in format [(pattern1, column1),(pattern2, column2), ...]
        inputs = list(zip(patterns,columns))
        
        # loop over list of inputs
        for i in inputs:
            searchre = df[i[1]].str.contains(i[0], regex=True, case=False, flags=re_flags)
            searchbool = array([True if n is True else False for n in searchre])
            bool_list.append(searchbool)
        
    elif (len(patterns) == 1) and (len(patterns) != len(columns)):
        # create list of inputs in format [(pattern, column1),(pattern, column2), ...]
        inputs = list(itertools.product(patterns, columns))
        
        # loop over list of inputs
        for i in inputs:
            searchre = df[i[1]].str.contains(i[0], regex=True, case=False, flags=re_flags)
            searchbool = array([True if n is True else False for n in searchre])
            bool_list.append(searchbool)
           
    else:  # eg, patterns formatted as a list of len(n>1) but does not match len(columns)
        raise ValueError("Length of inputs are incorrect. Lengths of 'patterns' and 'columns' can either match or a single pattern can map to multiple columns.")

    # combine each "searchbool" array elementwise
    # we want a positive match for any column to evaluate as True
    # equivalent to (bool_list[0] | bool_list[1] | bool_list[2] | ... | bool_list[n-1])
    filter_bool = array(bool_list).any(axis=0)

    if return_as == "indicator_column":
        dfResults = df.copy(deep=True)
        dfResults.loc[:, return_column] = 0
        dfResults.loc[filter_bool, return_column] = 1
        #print(f"Count {return_column}: {sum(dfResults[return_column].values)}")
        return dfResults
    
    elif return_as == "filtered_df":
        # filter results
        dfResults = df.loc[filter_bool, :].copy(deep=True)
        #print(f"Count {return_column}: {len(dfResults)}")
        return dfResults
    
    else:
        raise ValueError("Incorrect input for 'return_as' parameter.")


def filter_corrections(df: DataFrame):
    """Filter out corrections from Federal Register documents. 
    Identifies corrections using `corrrection_of` field and regex searches of `document_number`, `title`, and `action` fields.

    Args:
        df (DataFrame): Federal Register data.

    Returns:
        tuple: DataFrame with corrections removed, DataFrame of corrections
    """
    # get original column names
    cols = df.columns.tolist()
    
    # filter out corrections
    # 1. Using correction fields
    bool_na = array(df["correction_of"].isna())

    # 2. Searching other fields
    search_1 = search_columns(df, [r"^[crxz][\d]{1,2}-(?:[\w]{2,4}-)?[\d]+"], ["document_number"], 
                                 return_column="indicator1")
    search_2 = search_columns(df, [r"(?:;\scorrection\b)|(?:\bcorrecting\samend[\w]+\b)"], ["title", "action"], 
                                 return_column="indicator2")
    bool_search = array(search_1["indicator1"] == 1) | array(search_2["indicator2"] == 1)

    # separate corrections from non-corrections
    df_no_corrections = df.loc[(bool_na & ~bool_search), cols]  # remove flagged documents
    df_corrections = df.loc[(~bool_na | bool_search), cols]
    
    # return filtered results
    if len(df) == len(df_no_corrections) + len(df_corrections):
        return df_no_corrections, df_corrections
    else:
        raise SearchError(f"{len(df)} != {len(df_no_corrections)} + {len(df_corrections)}")
