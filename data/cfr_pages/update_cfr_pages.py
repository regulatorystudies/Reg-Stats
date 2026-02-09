import requests
import os
from PyPDF2 import PdfReader
import pandas as pd
from datetime import datetime
import sys
from tqdm import tqdm

import warnings
warnings.filterwarnings("ignore")

print("Download the XLS file from the Federal Register Statistics page before running this script."
      " See README for instructions")

# Federal Register Statistics has accurate page counts for past years, but it lags behind GovInfo for recent years

#%% Import the latest dataset
dir_path=os.path.dirname(os.path.realpath(__file__))
df_full=pd.read_excel(f'{dir_path}/aggregated_charts_frstats.xlsx',sheet_name='CFR Vols',skiprows=4)
# df_full=pd.read_excel(f'data/cfr_pages/aggregated_charts_frstats.xlsx',sheet_name='CFR Vols',skiprows=4)
#print(df_full.info())

#%% Separate data and notes
df_data=df_full[df_full['Year'].astype('str').str.isnumeric()]
df_data['Year']=df_data['Year'].astype('int')
df_data=df_data[['Year','Total Volumes\n(Exc CFR Index)','Total Pages']][df_data['Year']>=1950]

df_notes=df_full[df_full['Year'].astype('str').str.contains(r'\*')][['Year']]

#%% Identify start and end years
last_year=df_data['Year'].iloc[-1]

start_year=int(last_year)+1
end_year=datetime.today().year

if end_year>start_year:
    print(f"Data for {start_year}-{end_year-1} will be updated. It may take a long time.")
else:
    print("The current dataset is up-to-date. No update is needed.")
    sys.exit(0)

#%% Function to download a file
def download_file(url,file_path):
    r = requests.head(url)
    if r.status_code == 200:
        r = requests.get(url, allow_redirects=True)
        open(file_path, 'wb').write(r.content)
        #print(f"{file_path} has been downloaded.")
        downloaded=True
    else:
        downloaded=False

    return downloaded

#%% Function to count pages
def count_pages(file_path):
    with open(file_path, "rb") as f:
        pdf = PdfReader(f, strict=False)
        pages=len(pdf.pages)
    return pages

#%% Collect data
pages_list=[]
for year in range(start_year,end_year):
    print(f"Page counts for CFR {year} are being collected...")
    for title in tqdm(range(1,51)):
        vol=1
        while vol<100:      #check all possible volumes
            url = f"https://www.govinfo.gov/content/pkg/CFR-{year}-title{title}-vol{vol}/pdf/CFR-{year}-title{title}-vol{vol}.pdf"
            file_path = f"{dir_path}/CFR-{year}-title{title}-vol{vol}.pdf"

            downloaded=download_file(url,file_path) # this downloads the corresponding pdf from the the url to the file path

            if os.path.exists(file_path):
                pages_list.append((year,title,vol,count_pages(file_path)))
                os.remove(file_path)
            else:
                pass

            if downloaded==True:
                vol=vol+1
            else:
                vol=999

    # Index pages
    url=f"https://www.govinfo.gov/content/pkg/GPO-CFR-INDEX-{year}/pdf/GPO-CFR-INDEX-{year}.pdf"
    file_path=f"{dir_path}/GPO-CFR-INDEX-{year}.pdf"

    download_file(url,file_path)

    if os.path.exists(file_path):
        pages_list.append((year,"Index","N/A",count_pages(file_path)))
        os.remove(file_path)
    else:
        pass

#%% Convert results to a dataframe
df=pd.DataFrame(pages_list,columns=['year','title','vol','pages'])
#print(df.info())

#%% Save disaggregated data
df_disagg=pd.read_csv(f'{dir_path}/cfr_pages_disaggregated.csv') # this loads the existing disaggregated data

df_disagg=pd.concat([df_disagg,df[df['year']>max(df_disagg['year'])]],ignore_index=True) # this appends the new data to the existing data
df_disagg.to_csv(f"{dir_path}/cfr_pages_disaggregated.csv",index=False) # overwrites the existing data with the updated data

#%% Load disaggregated data (if applicable)
# df=pd.read_csv(f"data/cfr_pages/cfr_pages_disaggregated.csv")

#%% Concatenate annual data
df_year=df[['year','vol','pages']].groupby('year').agg({'vol':'size','pages':'sum'}).reset_index() # this groups the data by year and counts the number of volumes and sums the number of pages
df_year.rename(columns={'year':'Year','vol':'Total Volumes\n(Exc CFR Index)','pages':'Total Pages'},inplace=True) # this renames the columns to match the existing aggregated data csv
#print(df_year)

df_data=pd.concat([df_data,df_year[df_year['Year']>max(df_data['Year'])]],ignore_index=True) # only concatinate if the years of the aggregated data are greater than the last year of the existing data

#%% Concatenate notes
# Add data source
df_notes.loc[-1]=[f"Data source: GovInfo (https://www.govinfo.gov/app/collection/cfr) for years {start_year}-{end_year-1};"
                  f" Federal Register Statistics (https://www.federalregister.gov/reader-aids/federal-register-statistics)"
                  f" for all the prior years."]

df_data=pd.concat([df_data,df_notes],ignore_index=True)

#%% Export updated annual data
df_data.to_csv(f'{dir_path}/cfr_pages_by_calendar_year.csv',index=False)
# df_data.to_csv(f'data/cfr_pages/cfr_pages_by_calendar_year.csv',index=False)
print("Data have been updated and saved. END.")


