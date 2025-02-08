#-------------------------Code to Update Annual Significant Rules by Presidential Year---------------------------------
#-----------------------------------------Author: Zhoudan Xie----------------------------------------------------------

import pandas as pd
import os
import sys
from datetime import date

# Import customized functions
dir_path=os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, f'{dir_path}/../py_funcs')
import update_annual

#%% Specify file path, the earliest year of this dataset, and rule type
file_path=f'{dir_path}/significant_rules_by_presidential_year.csv'
earliest_year=1994
rule_type='sig'

#%% Run functions to update the data
df=update_annual.main(dir_path,file_path,earliest_year,rule_type)

#%% Export
df.to_csv(file_path, index=False)
print('The dataset has been updated and saved. End of execution.')