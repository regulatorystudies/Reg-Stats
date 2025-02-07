#--------------------Code to Update Cumulative Economically Significant Rules by Presidential Month---------------------
#-----------------------------------------Author: Zhoudan Xie----------------------------------------------------------

#%% Import packages
import os
import sys

# Import customized functions
dir_path=os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, f'{dir_path}/../py_funcs')
import update_admin

#%% Specify the file path of the current dataset
file_path=f'{dir_path}/cumulative_econ_significant_rules_by_presidential_month.csv'

#%% Specify rule type and data type
rule_type='es'
data_type='cumulative'

#%% Run functions to update the data
df=update_admin.main(dir_path,file_path,rule_type,data_type)

#%% Export
df.to_csv(file_path, index=False)
print('The dataset has been updated and saved. End of execution.')
