# import dependencies
from pandas import DataFrame


def clean_president_column(df_input: DataFrame, 
                            column: str = "president"):
    """Clean column containing president metadata for Federal Register API data.

    Args:
        df_input (DataFrame): Input dataframe.
        column (str, optional): Column containing president metadata. Defaults to "president".

    Returns:
        DataFrame: Copy of df_input with new column, "president_id".
    """    
    # create deep copy of input dataframe
    df = df_input.copy(deep=True)
    
    # handle missing values
    bool_mi = df["president"].isna()
    df.loc[bool_mi, "president"] = df["president"].interpolate('pad').loc[bool_mi]
    
    # extract president identifier
    df["president_id"] = df.apply(lambda x: x[column].get("identifier"), axis=1)
    president_list = list(set(df["president_id"].values.tolist()))
    print(", ".join(president_list))

    # return output df with new columns
    return df


def find_president_year_mismatches(df, 
                                   years = [1993, 2001, 2009, 2017, 2021], 
                                   presidents = ['william-j-clinton', 'george-w-bush', 'barack-obama', 'donald-trump', 'joe-biden']
                                   ):
    """Identifies mismatched documents and creates a new column for filtering.\n
    Mismatches occur when an outgoing president's rule is published after new president's term starts.
    
    Args:
        df (DataFrame): Input dataframe.
        years (list, optional): List of years by incoming president. Defaults to [1993, 2001, 2009, 2017, 2021].
        presidents (list, optional): List of presidents in order of terms. Defaults to ['william-j-clinton', 'george-w-bush', 'barack-obama', 'donald-trump', 'joe-biden'].

    Returns:
        DataFrame: df with new column, "mismatch".
    """
    # match each president with incoming year
    incoming_list = tuple(zip(years, presidents))
    print(incoming_list)

    # create indicator columns for documents not issued by incoming president
    df['mismatch'] = 0
    for i in incoming_list:  # flag mismatches
        bool_mismatch = (df['year'] == i[0]) & (df['president_id'] == i[1])
        df.loc[bool_mismatch, 'mismatch'] = 1

    # print value counts and return df with new column
    print(df['mismatch'].value_counts(dropna=False))
    return df

