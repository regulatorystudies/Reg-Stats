"""
Preprocessing Federal Register API results
"""

__all__ = [
    "agencies", 
    "dates", 
    "dockets", 
    "duplicates", 
    "rin", 
    ]

from .agencies import *

from .dates import *

from .dockets import *

from .duplicates import *

from .rin import *
