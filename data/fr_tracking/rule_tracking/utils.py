from pandas import DataFrame


def reorder_new_columns(df: DataFrame, new_columns: list, after_column: str, original_columns: list | None = None):
    """Reorder and insert new columns to existing DataFrame.

    Args:
        df (DataFrame): Input data.
        new_columns (list): New (empty) columns to add to df.
        after_column (str): Insert new columns after this column.
        original_columns (list | None, optional): List of original columns. If None, method will use list of columns from "df" parameter. Defaults to None.

    Returns:
        DataFrame: Data with new columns.
    """
    if original_columns is None:
        original_columns = df.columns.to_list()
    
    index_loc = original_columns.index(after_column) + 1  # locate element after a specified column
    new_col_list = original_columns[:index_loc] + new_columns + original_columns[index_loc:]  # create new column list
    # insert new columns in specified location and return
    return df.reindex(columns = new_col_list)
