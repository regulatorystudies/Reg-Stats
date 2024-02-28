print('NOTE: The current code can only update data for presidential years 2021 and later.')

import pandas as pd
import os
import sys
from datetime import date

#%% Import the current dataset
dir_path=os.path.dirname(os.path.realpath(__file__))
file_path=f'{dir_path}/significant_rules_by_presidential_year.csv'

if os.path.exists(file_path):
    df=pd.read_csv(file_path)
else:
    print('Error: no existing dataset.')
    sys.exit(0)

#%% Find years to be updated
# The latest data-year in the current dataset
last_year_with_data=int(df['Presidential Year (February 1 - January 31)'].iloc[-1])

# Years to be updated
current_year = date.today().year

if last_year_with_data<current_year-1:
    first_year_to_update=max(last_year_with_data+1,2021)
    last_year_to_update=current_year-1
    print(f'Updating data for presidential year {first_year_to_update}-{last_year_to_update}...')
else:
    print('The dataset is up-to-date. No update is needed.')
    sys.exit(0)

#%% FR tracking data
df_fr = pd.read_csv(f'{dir_path}/../fr_tracking/fr_tracking.csv', encoding="ISO-8859-1")

df_fr['publication_date'] = pd.to_datetime(df_fr['publication_date'], format="mixed").dt.date
df_fr['significant'] = pd.to_numeric(df_fr['significant'], errors='coerce')

#%% Get user input on presidential party
def input_party(year):
    party_option = ['democratic','d','republican','r']
    while True:
        party=input(f'Is presidential year {year} Democratic (d) or Republican (r)? >>> ').lower()
        if party in party_option:
            output='Democratic' if (party in ['democratic','d']) else 'Republican'
            return output
            break
        else:
            print(f'ERROR: Your input party "{party}" is not valid.')

#%% Count annual economically/section 3(f)(1) significant rules
update_data=[]
for year in range(first_year_to_update,last_year_to_update+1):
    count=df_fr[(df_fr['publication_date'] >= date(year,2,1)) & \
                (df_fr['publication_date'] <= date(year+1,1,31))]['significant'].sum()
    party=input_party(year)
    update_data.append([year,party,count])
    print(f'Presidential year {year} has been updated.')

#%% Append new data
df=pd.concat([df, pd.DataFrame(update_data, columns=df.columns[0:3])], ignore_index=True)

#%% Export
df.to_csv(file_path, index=False)
print('The dataset has been updated and saved. End of execution.')