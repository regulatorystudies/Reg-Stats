import os
import sys
import pandas as pd
from datetime import date

# Import customized functions
dir_path=os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, f'{dir_path}/../py_funcs')
from frcount import *
from party import *
from reginfo import *

#%%
update_start_date=date(2017,1,21)
update_end_date=date(2021,1,20)

df=count_reginfo_monthly(update_start_date, update_end_date, rule_type='es')