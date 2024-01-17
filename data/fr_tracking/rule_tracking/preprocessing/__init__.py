"""
Preprocessing Federal Register API results
"""

__all__ = [
    "agencies", 
    "dates", 
    "duplicates", 
    "rin", 
    ]

from .agencies import *

from .dates import *

from .duplicates import *

from .rin import *
