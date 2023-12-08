# import dependencies
from pandas import Series, DataFrame, to_datetime


# function that converts single column from a dataframe into date format
def column_to_date(df: DataFrame, column: str = ''):
    """Convert dataframe columns in str format to datetime.date format.

    Args:
        df (DataFrame): Input dataframe
        column (str, optional): Column name to convert to datetime. Defaults to ''.

    Returns:
        Series: Series of converted column
    """
    # copy dataframe
    df_copy = df.copy(deep=True)
    
    # convert to datetime format
    df_copy.loc[:, column] = to_datetime(df_copy[column])
        
    # convert to date format (removes timestamp info)
    df_copy.loc[:, column] = df_copy[column].apply(lambda x: x.date())
    
    # return series for input column
    return df_copy.loc[:, column]


# function that handles multiple columns
def columns_to_date(df: DataFrame, columns: list = []):
    """Convert dataframe columns in str format to datetime.date format.

    Args:
        df (DataFrame): Input Dataframe.
        columns (list, optional): List of columns to convert to datetime. Defaults to [].

    Returns:
        list[Series]: List containing each converted column as a Series.
    """
    # copy dataframe
    df_copy = df.copy(deep=True)
    
    # loop over input columns
    for c in columns:
        # convert to datetime format
        df_copy.loc[:,c] = to_datetime(df_copy[c])
        
        # convert to date format (removes timestamp info)
        df_copy.loc[:,c] = df_copy[c].apply(lambda x: x.date())
    
    # create list of each column as a series
    series_list = [df_copy.loc[:,series] for series in df_copy.loc[:,columns]]
    
    # return list of series for input columns
    return series_list

