# -*- coding: utf-8 -*-
"""
Mark Febrizio

Created: 2023-12-21
Last modified: 2023-12-21
"""
from collections import Counter


def identify_duplicates(results: list, key: str) -> list[dict]:
    """Identify duplicates for further examination.

    Args:
        results (list): List of results to check for duplicates.
        key (str): Key representing the duplicated key: value pair.

    Returns:
        list[dict]: Duplicated items from input list.
    """    
    url_list = [r.get(key) for r in results]
    c = Counter(url_list)
    dup_items = [r for r in results if r.get(key) in [k for k, v in c.items() if v > 1]]
    return dup_items


def remove_duplicates(results: list, key: str):
    """Filter out duplicates from list[dict] based on a key: value pair 
    ([source](https://www.geeksforgeeks.org/python-remove-duplicate-dictionaries-characterized-by-key/)).

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

