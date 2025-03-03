import requests
import pandas as pd
import re
import os
from datetime import date

import warnings
warnings.filterwarnings("ignore")

# Get directory
dir_path=os.path.dirname(os.path.realpath(__file__))

#%% Function to download a file
def download_file(url,file_path):
    r = requests.head(url)
    if r.status_code == 200:
        r = requests.get(url, allow_redirects=True)
        open(file_path, 'wb').write(r.content)
        print(f"Latest FR page data have been downloaded from FR Statistics.")
        downloaded=True
    else:
        print('ERROR: data could not be downloaded from FR Statistics')
        downloaded=False

    return downloaded

#%% Download new dataset from FR Statistics
url='https://www.federalregister.gov/api/v1/category_counts/page_count.csv'
raw_path=f'{dir_path}/federal_register_page_count_published_per_category.csv'
if download_file(url,raw_path):
    df_new=pd.read_csv(raw_path, skiprows=3)

#%% Replace special symbols
df_new.columns=[re.sub(r'†', '**', col) for col in df_new.columns]
df_new.columns=[re.sub(r'‡', '***', col) for col in df_new.columns]
df_new.replace(r'†', '**', regex=True, inplace=True)
df_new.replace(r'‡', '***', regex=True, inplace=True)

#%% Clean new dataset
# Separate notes rows
df_notes = df_new[pd.to_numeric(df_new['Year'], errors='coerce').isna()]
df_notes=df_notes[df_notes['Year']!='\ufeff']

df_new = df_new[pd.to_numeric(df_new['Year'], errors='coerce').notna()]

#%% Re-sort by year
df_new.sort_values(['Year'],inplace=True)

# Remove partial year data
df_new=df_new[df_new['Year'].astype(int)<date.today().year]

# Add notes back
df_new=pd.concat([df_new,df_notes],ignore_index=True)

#%% Save new data
file_path=f'{dir_path}/federal_register_pages_by_calendar_year.csv'
df_new.to_csv(file_path, index=False)
print('The dataset has been updated and saved. End of execution.')

#%% Remove raw dataset
os.remove(raw_path)


