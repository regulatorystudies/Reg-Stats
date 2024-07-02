import requests
import os
from PyPDF2 import PdfFileReader
import pandas as pd
from datetime import datetime
import sys

#%% Function to download a file
def download_file(url,file_path):
    r = requests.head(url)
    if r.status_code == 200:
        r = requests.get(url, allow_redirects=True)
        open(file_path, 'wb').write(r.content)
        print(f"{file_path} has been downloaded.")
        downloaded=True
    else:
        downloaded=False

    return downloaded

#%% Function to count pages
def count_pages(file_path):
    with open(file_path, "rb") as f:
        pdf = PdfFileReader(f)
        pages=pdf.getNumPages()
    return pages

#%% Identify start and end years
df_exist=pd.read_csv('data/cfr_pages/cfr_pages_by_calendar_year.csv',skiprows=4)
last_year=df_exist[df_exist['Year'].astype('str').str.isnumeric()]['Year'].iloc[-1]

start_year=int(last_year)+1
end_year=datetime.today().year

if end_year>start_year:
    print(f"Data for {start_year}-{end_year} are being updated...")
else:
    print("The current dataset is up-to-date. No update is needed.")
    sys.exit(0)

#%% Collect data
pages_list=[]
for year in range(start_year,end_year):
    for title in range(1,51):
        vol=1
        while vol<100:      #check all possible volumes
            url = f"https://www.govinfo.gov/content/pkg/CFR-{year}-title{title}-vol{vol}/pdf/CFR-{year}-title{title}-vol{vol}.pdf"
            file_path = f"data/cfr_pages/temp_files/CFR-{year}-title{title}-vol{vol}.pdf"

            downloaded=download_file(url,file_path)

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
    file_path=f"data/cfr_pages/temp_files/GPO-CFR-INDEX-{year}.pdf"

    download_file(url,file_path)

    if os.path.exists(file_path):
        pages_list.append((year,"Index","N/A",count_pages(file_path)))
        os.remove(file_path)
    else:
        pass

#%% Save disaggregated data
print(len(pages_list))

df=pd.DataFrame(pages_list,columns=['year','title','vol','pages'])
print(df.info())
df.to_csv(f"data/cfr_pages/cfr_pages_disaggregated_{min(df['year'])}_{max(df['year'])}.csv",index=False)

#%% Concatenate new data
df_year=df[['year','pages']].groupby('year').sum().reset_index()
df_year.rename(columns={'year':'Year','pages':'Total Pages'},inplace=True)
print(df_year)





