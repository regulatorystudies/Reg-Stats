from datetime import date
import re


def extract_year(string: str):
    """Extract date from a string in a format similar to `datetime.datetime` or `datetime.date`.

    Args:
        string (str): Date represented as a string.

    Returns:
        int: Year attribute of `datetime.date` object.
    """
    res = re.compile(r"\d{4}-\d{2}-\d{2}", re.I).match(string)
    
    if isinstance(res, re.Match):
        return date.fromisoformat(res[0]).year
    else:
        return None


def convert_to_datetime_date(input_date: date| str):
    if isinstance(input_date, date):
        return input_date
    elif isinstance(input_date, str):
        return date.fromisoformat(input_date)
    else:
        raise TypeError(f"Inappropriate argument type {type(input_date)} for parameter 'input_date'.")


def date_in_quarter(input_date: date | str, year: str, quarter: tuple, return_quarter_end: bool = True):
    """Checks if given date falls within a year's quarter. 
    Returns input date if True, otherwise returns first or last day of quarter.

    Args:
        input_date (date | str): Date to check.
        year (str): Year to check against.
        quarter (tuple): Quarter to check against.
        return_quarter_end (bool, optional): Return end date of quarter when input not in range. Defaults to True.

    Raises:
        TypeError: Inappropriate argument type for 'input_date'.

    Returns:
        datetime.date: Returns input_date when it falls within range; otherwise returns boundary date of quarter.
    """    
    check_date = convert_to_datetime_date(input_date)
    range_start = date.fromisoformat(f"{year}-{quarter[0]}")
    range_end = date.fromisoformat(f"{year}-{quarter[1]}")
    in_range = (check_date >= range_start) and (check_date <= range_end)
    #return in_range
    if in_range:
        return check_date
    elif (not in_range) and return_quarter_end:
        return range_end
    elif (not in_range) and (not return_quarter_end):
        return range_start


def greater_than_date(date_a: date | str, date_b: date | str):
    """Compare whether a date A occurs after date B.

    Args:
        date_a (date | str): The first given date.
        date_b (date | str): The second given date.

    Returns:
        bool: True if date A occurs after date B.
    """    
    return convert_to_datetime_date(date_a) > convert_to_datetime_date(date_b)
