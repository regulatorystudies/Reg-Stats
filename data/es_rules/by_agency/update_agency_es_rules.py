#-----------Code to Update Annual Economically Significant Rules by Presidential Year for Agencies----------------------
#-----------------------------------------Author: Henry Hirsch----------------------------------------------------------

import pandas as pd
import os
import sys
from datetime import date

# Import customized functions and agency_name_variations dictionary
dir_path=os.path.dirname(os.path.realpath(__file__))
dir_path= f'{dir_path}/../' # move up one directory so that this dir_path can be used interchangeably with the update_es_rules dir_path in the required functions
sys.path.insert(0, f'{dir_path}/../py_funcs')

# Import custom modules
import update_annual
from agencies import *
    
#%% Specify file path and rule type
file_path=f'{dir_path}/agency_econ_significant_rules_by_presidential_year.csv'
rule_type='es'

#%% Create list of agencies (excluding independent agencies) from agency_name_variations dictionary
agency_acronyms = list(agency_name_variations.keys())

#%% Loop though list of agencies
df_list = []
check = None # if turned on, use to stop subsequent queries about whether you want to check/update data

for agency_acronym in agency_acronyms:
    
    if agency_acronym=='DHS': # set the earliest year of data desired for a particular agency
        earliest_year=2003 # DHS began operating on March 1st, 2003. Don't want data prior to its founding.
    else:             
        earliest_year=1981 # for most agencies, we want to go back to 1981 (when rules began to be designated as economically significant)
    
    if  agency_acronym!='' and (agency_acronym not in agency_dict): 
        # add similar loop to update ES rules (not by agency)?
        print(f'{agency_acronym} was not found in agency_dict.')
        
    else:
        df,check = update_annual.main(dir_path,file_path,earliest_year,rule_type,check,agency_acronym)
        df_list.append(df)
        print(f'The {agency_acronym} data has been updated.')
        
df_combined = pd.concat(df_list, ignore_index=True)

#%% Export
df_combined.to_csv(file_path, index=False)
print('The dataset has been updated and saved. End of execution.')