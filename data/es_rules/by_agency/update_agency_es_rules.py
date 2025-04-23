#-----------Code to Update Annual Economically Significant Rules by Presidential Year for Agencies----------------------
#-----------------------------------------Author: Henry Hirsch----------------------------------------------------------
#%%
import pandas as pd
import os
import sys
from datetime import date

#%% Import customized functions and agency_name_variations dictionary
dir_path=os.path.dirname(os.path.realpath(__file__))
dir_path= f'{dir_path}/../' # move up one directory so that this dir_path can be used interchangeably with the update_es_rules dir_path in the required functions
sys.path.insert(0, f'{dir_path}/../py_funcs')

try:
    import update_annual
    from agencies import *
except(ModuleNotFoundError, ImportError):
    import update_annual
    from agencies import *
    
    # see if this works (based off of pic on phone of what Zoey showed me)
    # see if the code below works (from ChatGPT):
    
# # Current file: /.../data/es_rules/by_agency/update_agency_es_rules.py
# dir_path = os.path.dirname(os.path.realpath(__file__))

# # Move up two levels: /.../data
# data_dir = os.path.abspath(os.path.join(dir_path, '..', '..'))

# # Add py_funcs directory inside /data to sys.path
# py_funcs_path = os.path.join(data_dir, 'py_funcs')
# sys.path.insert(0, py_funcs_path)

# # Now import custom modules
# import update_annual
# from agencies import agency_dict, agency_name_variations

#%% Specify file path and rule type
file_path=f'{dir_path}/agency_econ_significant_rules_by_presidential_year.csv'
rule_type='es'

#%% Create list of agencies (excluding independent agencies) from agency_name_variations dictionary
acronyms = list(agency_name_variations.keys())

#%% Loop though list of agencies
df_list = []
check = None # if turned on, use to stop subsequent queries about whether you want to check/update data

for acronym in acronyms:
    
    if acronym=='DHS': # set the earliest year of data desired for a particular agency
        earliest_year=2003 # (DHS founded November 25, 2002, don't want data prior to its founding)
    else:             # ^ CHANGE TO 2002?
        earliest_year=1981 # for most agencies, we want to go back to 1981 (when rules began to be designated as economically significant)
    
    if  acronym!='' and (acronym not in agency_dict): 
        # add similar loop to update ES rules (not by agency)?
        print(f'{acronym} was not found in agency_dict.')
        
    else:
        df,check = update_annual.main(dir_path,file_path,earliest_year,rule_type,check,acronym)
        df_list.append(df)
        print(f'The {acronym} data has been updated.')
        
df_combined = pd.concat(df_list, ignore_index=True)

#%% Export
df_combined.to_csv(file_path, index=False)
print('The dataset has been updated and saved. End of execution.')