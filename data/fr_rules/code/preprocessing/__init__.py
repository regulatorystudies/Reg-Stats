"""
Module: preprocessing for Federal Register data
Author: Mark Febrizio
Last revised: 2023-01-31
"""

__all__ = ["agencies", 
           "dates", 
           "presidents"
           ]

from .agencies import (
    clean_agencies_column, 
    DEFAULT_AGENCY_SCHEMA
    )
from .dates import (
    column_to_date, 
    columns_to_date
    )
from .presidents import (
    clean_president_column, 
    find_president_year_mismatches
    )

