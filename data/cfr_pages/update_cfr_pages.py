import requests
import os
from PyPDF2 import PdfFileReader
import pandas as pd

#%% Download PDF files
year=2023
title=1
vol=1
url=f"https://www.govinfo.gov/content/pkg/CFR-{year}-title{title}-vol{vol}/pdf/CFR-{year}-title{title}-vol{vol}.pdf"
file_path=f"data/cfr_pages/temp_files/CFR-{year}-title{title}-vol{vol}.pdf"

r = requests.head(url)
if r.status_code == 200:
    r = requests.get(url, allow_redirects=True)
    open(file_path, 'wb').write(r.content)
else:
    pass

#%% Count pages
with open(file_path, "rb") as f:
    pdf=PdfFileReader(f)
    print(pdf.getNumPages())
os.remove(file_path)

#%% Function to download files
def download_file(url,file_path,vol=1):
    r = requests.head(url)
    if r.status_code == 200:
        r = requests.get(url, allow_redirects=True)
        open(file_path, 'wb').write(r.content)
        print(f"{file_path} has been downloaded.")
        downloaded=True
    else:
        downloaded=False

    return downloaded

#%% Function to return pages
def count_pages(file_path):
    with open(file_path, "rb") as f:
        pdf = PdfFileReader(f)
        pages=pdf.getNumPages()
    return pages

#%%
pages_list=[]
for year in range(2021,2024):
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

#%% Convert to dataframe
print(len(pages_list))

df=pd.DataFrame(pages_list,columns=['year','title','vol','pages'])
print(df.info())

df_year=df[['year','pages']].groupby('year').sum().reset_index()
print(df_year)

df.to_csv(f"data/cfr_pages/cfr_pages_{min(df['year'])}_{max(df['year'])}.csv",index=False)
