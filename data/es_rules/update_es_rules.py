print('NOTE: The current code can only update data for presidential years 2021 and later.')

import pandas as pd
import os
import sys
from datetime import datetime

#%% Import the current dataset
dir_path=os.path.dirname(os.path.realpath(__file__))
file_path=f'{dir_path}/econ_significant_rules_by_presidential_year.csv'

if os.path.exists(file_path):
    df=pd.read_csv(file_path)
else:
    print('Error: no existing dataset.')
    sys.exit(0)

#%% Find years to be updated
# The latest data-year in the current dataset
last_year_with_data=df['Presidential Year (February 1 - January 31)'].iloc[-1]

# Years to be updated
current_year=datetime.now().year

if last_year_with_data<current_year-1:
    first_year_to_update=last_year_with_data+1
    last_year_to_update=current_year-1
    print(f'Updating data for presidential year {first_year_to_update}-{last_year_to_update}...')
else:
    print('The dataset is up-to-date. No update is needed.')
    sys.exit(0)

#%% FR tracking data
df_fr = pd.read_csv(f'{dir_path}/../fr_tracking/fr_tracking.csv', encoding="ISO-8859-1")

df_fr['publication_date']=df_fr['publication_date'].astype('datetime64[ns]')
df_fr['econ_significant'] = pd.to_numeric(df_fr['econ_significant'], errors='coerce')
df_fr['3(f)(1) significant']=pd.to_numeric(df_fr['3(f)(1) significant'], errors='coerce')

#%% Get user input pn presidential party
def input_party(year):
    party_option = ['democratic','d','republican','r']
    while True:
        party=input(f'Is presidential year {year} Democratic (D) or Republican (R)?').lower()
        if party in party_option:
            output='Democratic' if (party in ['democratic','d']) else 'Republican'
            return output
            break
        else:
            print(f'ERROR: Your input party "{party}" is not valid.')

#%% Count annual economically/section 3(f)(1) significant rules
update_data=[]
for year in range(first_year_to_update,last_year_to_update+1):
    if year==2023:
        count1=df_fr[(df_fr['publication_date']>=datetime(year,2,1)) & \
                     (df_fr['publication_date']<datetime(year,4,6))]['econ_significant'].sum()
        count2=df_fr[(df_fr['publication_date']>=datetime(year,4,6)) & \
                     (df_fr['publication_date']<=datetime(year+1,1,31))]['3(f)(1) significant'].sum()
        count=count1+count2
    else:
        col='econ_significant' if year<2023 else '3(f)(1) significant'
        count=df_fr[(df_fr['publication_date']>=datetime(year,2,1)) & \
                     (df_fr['publication_date']<=datetime(year+1,1,31))][col].sum()

    party=input_party(year)
    update_data.append([year,party,count])
    print(f'Presidential year {year} has been updated.')

#%% Append new data
df=pd.concat([df, pd.DataFrame(update_data, columns=df.columns[0:3])], ignore_index=True)

#%% Export
df.to_csv(file_path, index=False)
print('The dataset has been updated and saved. End of execution.')