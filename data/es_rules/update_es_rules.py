import pandas as pd
from datetime import datetime

#%% Check current dataset
df=pd.read_csv('data/es_rules/econ_significant_rules_by_presidential_year.csv')
print(df.info())

#%% Find years to be updated
# The latest data-year in the current dataset
latest_year=df['Presidential Year (February 1 - January 31)'].iloc[-1]

# Years to be updated
current_year=datetime.now().year

if latest_year<current_year-1:
    first_year_to_update=latest_year+1
    last_year_to_update=current_year-1
else:
    print('The dataset is up-to-date. No update is needed.')

#%% FR tracking data
df_fr=pd.read_csv('data/fr_tracking/fr_tracking.csv',encoding = "ISO-8859-1")
print(df_fr.info())

df_fr['publication_date']=df_fr['publication_date'].astype('datetime64[ns]')
df_fr['3(f)(1) significant']=pd.to_numeric(df_fr['3(f)(1) significant'], errors='coerce')

#%% Get new data
update_dict={}
for year in range(first_year_to_update,last_year_to_update+1):
    count=df_fr[(df_fr['publication_date']>=datetime(year,2,1)) & \
                     (df_fr['publication_date']<=datetime(year+1,1,31))]['3(f)(1) significant'].sum()
    update_dict[year]=count

#%% Append new data
df=pd.concat([df, pd.DataFrame(update_dict.items(), columns=[df.columns[0],df.columns[2]])], ignore_index=True)

#%% Add presidential party