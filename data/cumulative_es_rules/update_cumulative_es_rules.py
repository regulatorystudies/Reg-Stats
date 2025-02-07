print('NOTE: The current code can only update data for the Biden and following administrations.')

#%% Import packages
import os
import sys
import pandas as pd
from datetime import date
import numpy as np

# Import customized functions
dir_path=os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, f'{dir_path}/../py_funcs')
from frcount import *
from party import *
from reginfo import *

#%% Specify the file path of the current dataset
file_path=f'{dir_path}/cumulative_econ_significant_rules_by_presidential_month.csv'

#%% Run functions to update the data
# df=frcount.main(dir_path,file_path,rule_type='es',type='cumulative')

#%%
# Check the admin coverage
print(f"The current dataset covers the {', '.join(list(admin_year.keys()))} administrations.\n"
          f"If there is a new administration, revise the admin_year dictionary in frcount.main and re-run the code.")

#%% Import the current dataset
if os.path.exists(file_path):
    df = pd.read_csv(file_path)
else:
    # Create a file
    df=pd.DataFrame(columns=['Month','Months in Office'])
    df['Months in Office'] = list(range(0, 97))
    list_of_months = [date(2024, i, 1).strftime('%b') for i in range(1, 13)]
    df['Month'] = np.tile(list_of_months, len(df) // len(list_of_months) + 1)[:len(df)]

# Rename the first Trump administration if existing in the current dataset
if 'Trump' in df.columns:
    df.rename(columns={'Trump':'Trump 45'},inplace=True)
else:
    pass

# %% Create a new column if an administration is not in the dataset
new_admin = [x for x in admin_year.keys() if x not in df.columns]
if len(new_admin) > 0:
    for x in new_admin:
        df[x] = None
else:
    pass

# %% Check if data for an administration are complete
for admin in df.columns:
    first_month_no_data = df[df[admin].isnull()]['Months in Office'].values[0]
    update_start_date = date(admin_year[admin][0], 1, 1) + relativedelta(months=first_month_no_data)

    if ((update_start_date.year == admin_year[admin][1]) and (update_start_date.month == 2)) \
            or ((update_start_date.year==date.today().year) and (update_start_date.month==date.today().month)):
        print(f'The {admin} administration data is up-to-date.')
        pass
    ###########################################Start revisions here#################################
    else:
        # update start date
        if first_month_no_data == 0: update_start_date = update_start_date.replace(day=21)
        # update end date
        update_end_date = date(admin_year[admin][1], 1, 20)

        # update data
        print(f'Updating data from {update_start_date} to {update_end_date}...')

        df = update_admin(dir_path, df, admin, update_start_date, update_end_date, rule_type, type)
        print(f'The {admin} administration data has been updated.')


# %% Check if data for previous administrations are complete
for admin in df.columns[0:-1]:
    first_month_no_data = df[df[admin].isnull()]['Months in Office'].values[0]
    update_start_date = date(admin_year[admin][0], 1, 1) + relativedelta(months=first_month_no_data)

    if (update_start_date.year == admin_year[admin][1]) and (update_start_date.month == 2):
        print(f'The {admin} administration data is up-to-date.')
        pass

    else:
        # update start date
        if first_month_no_data == 0: update_start_date = update_start_date.replace(day=21)
        # update end date
        update_end_date = date(admin_year[admin][1], 1, 20)

        # update data
        print(f'Updating data from {update_start_date} to {update_end_date}...')

        df = update_admin(dir_path, df, admin, update_start_date, update_end_date, rule_type, type)
        print(f'The {admin} administration data has been updated.')

# %% Check if data for current administration need to be updated
admin = df.columns[-1]
first_month_no_data = df[df[admin].isnull()]['Months in Office'].values[0]

# update start date
update_start_date = date(admin_year[admin][0], 1, 1) + relativedelta(months=first_month_no_data)
if first_month_no_data == 0: update_start_date = update_start_date.replace(day=21)
# update end date
update_end_date = date.today().replace(day=1) - relativedelta(days=1)
if len(admin_year[admin]) > 1:
    if (update_end_date.year == admin_year[admin][1]) and (update_end_date.month == 1):
        update_end_date = update_end_date.replace(day=20)

# update data
if update_start_date > update_end_date:
    print(f'The {admin} administration data is up-to-date.')
    pass
else:
    print(f'Updating data from {update_start_date} to {update_end_date}...')
    df = update_admin(dir_path, df, admin, update_start_date, update_end_date, rule_type, type)
    print(f'The {admin} administration data has been updated.')


#%% Export
df.to_csv(file_path, index=False)
print('The dataset has been updated and saved. End of execution.')
