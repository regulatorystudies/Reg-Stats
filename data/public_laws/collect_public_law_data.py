import pandas as pd
import requests
from requests.adapters import HTTPAdapter, Retry
import json
import os
from PyPDF2 import PdfReader
from PyPDF2.errors import PdfReadError
from io import BytesIO
from datetime import datetime
import numpy as np
import fitz
import re

import warnings
warnings.simplefilter(action='ignore', category=FutureWarning)

#%% Get directory
dir_path=os.path.dirname(os.path.realpath(__file__))

# Get API key
with open(f'{dir_path}/api_key.txt', 'r') as file:
    api_key = file.read()

#%% Define a function to get word count from a PDF URL
def read_pdf(pdf_url,law_no,timeout=10):
    # Initialize default values
    num_pages = total_words = None

    # Create a session object
    session = requests.Session()

    # Define a retry strategy
    retries = Retry(
        total=5,  # Total number of retries
        backoff_factor=0.1,  # Factor to calculate sleep time between retries
        status_forcelist=[500, 502, 503, 504],  # HTTP status codes to retry
        raise_on_status=False,
    )

    # Mount the HTTPAdapter with the retry strategy
    adapter = HTTPAdapter(max_retries=retries)
    session.mount('http://', adapter)
    session.mount('https://', adapter)

    try:
        response = session.get(pdf_url, timeout=timeout)
        response.raise_for_status()

        pdf_file = BytesIO(response.content)
        try:
            reader = PdfReader(pdf_file, strict=False)

            num_pages = len(reader.pages)
            total_words = sum(
                len(page.extract_text().split())
                for page in reader.pages
                if page.extract_text()
            )

        except PdfReadError as e:
            print(f"PDF read error for public law {law_no}: {e}.\nRetrying with fitz...")

            try:
                doc = fitz.open(stream=pdf_file, filetype="pdf")
                num_pages = len(doc)
                total_words = 0
                # Count words from each page
                for page in doc:
                    try:
                        text = page.get_text()
                        words = text.split()
                        total_words += len(words)
                    except Exception as e:
                        print(f"Failed to extract text from page {page.number + 1} for public law {law_no}: {e}")
                        continue
            except Exception as e:
                print(f"Failed to process PDF for public law {law_no}: {e}.")
                print(pdf_url)

    except requests.exceptions.RequestException as e:
        # print(f"Request error for public law {law_no}: {e}")
        # print(pdf_url)
        pass

    return num_pages, total_words

#%% Define a function to get word count for a bill (public law)
def get_bill_words(congress, bill_type, bill_no, law_no, timeout=10):
    url_bill = f'https://api.congress.gov/v3/bill/{congress}/{bill_type.lower()}/{bill_no}/text?api_key={api_key}'

    response_bill = requests.get(url_bill)
    data_bill = response_bill.json()

    # Get bill text url
    pdf_url = None
    # Loop through all textVersions
    for version in data_bill.get("textVersions", []):
        if version.get("type") == "Public Law":
            date = version.get("date", "N/A")
            for fmt in version.get("formats", []):
                if fmt.get("type") == "PDF":
                    pdf_url = fmt.get("url", "N/A")
                    #print(pdf_url)
                    break

    # Get date
    try:
        # Parse to datetime
        dt = datetime.strptime(date, "%Y-%m-%dT%H:%M:%SZ")
        # Extract date only
        date = dt.date()
    except:
        date=None

    # Get page and word counts
    # Initialize default values
    num_pages = total_words = None
    if pdf_url!=None:
        num_pages, total_words=read_pdf(pdf_url,law_no,timeout)
    else:
        print(f"Missing PDF URL for public law {law_no}.")

    return num_pages, total_words, date, pdf_url

#%% Define a function to get total # of public laws from a congress
def get_total_count(congress):
    base_url = f'https://api.congress.gov/v3/law/{congress}/pub'

    # Initial request to find out the total number of bills
    initial_response = requests.get(base_url,params={'limit': 1, 'offset': 0, 'api_key': api_key})
    initial_data = initial_response.json()
    total_bills = initial_data['pagination']['count']

    return total_bills

#%% Define a function to get word counts for all public laws from a congress
def get_laws_by_congress(congress):
    base_url = f'https://api.congress.gov/v3/law/{congress}/pub'
    limit=100     # number of records returned per request
    offset = 0

    # Find out the total number of bills
    total_bills = get_total_count(congress)
    print(f"Number of public laws from {congress} Congress: {total_bills}.")

    # Loop through all pages
    results_list=[]
    while offset < total_bills:
        response = requests.get(
            base_url,
            params={'limit': limit, 'offset': offset, 'api_key': api_key}
        )
        data = response.json()
        bills = data.get('bills', [])
        for bill in bills:
            law_no = bill['laws'][0]['number']
            bill_no = bill["number"]
            bill_type = bill["type"]

            try:
                bill_results = get_bill_words(congress, bill_type, bill_no, law_no)
            except:
                bill_results=(None,None,None,None)
                print(f"Data could not be collected for Public Law {law_no}.")

            # Append results
            results_list.append((congress, law_no, bill_type, bill_no) + bill_results)
            # print(f'Data collected for Public Law {law_no}.')

        offset += limit

    return results_list

#%% Set data collection range
# Earliest congress data to collect
earliest=94
# Note: PDFs prior to 94th Congress are available, but they were not separated by law,
# so a file could contain text from the preceding law.

# Get current Congress session
current_year = datetime.now().year
# The first Congress started in 1789
current=((current_year - 1789) // 2) + 1

# Read existing dataset (if any)
file_path=f'{dir_path}/public_law_word_count.csv'
cols=['Congress', 'Public Law Number', 'Bill Type', 'Bill Number', 'Page Count', 'Word Count', 'Date', 'URL']

if os.path.exists(file_path):
    df = pd.read_csv(file_path)
    if df['Congress'].max()<current:
        start=df['Congress'].max()+1
    else:
        start=current
else:
    df=pd.DataFrame(columns=cols)
    start=earliest

#%% Collect data for all congresses through the current congress
if start<=current:
    print(f"Collecting data for {start}-{current} Congress...")
    for congress in range(start,current+1):
        results_list=get_laws_by_congress(congress)
        print(f'Data collected for {congress} congress.')

        # Convert to dataframe
        df_new = pd.DataFrame(results_list, columns=cols)
        # Concatenate
        df=pd.concat([df,df_new],ignore_index=True)

        # Save new dataframe
        df.to_csv(file_path, index=False)
else:
    pass

#%% Check duplicates
# print('Duplicates:\n',df[df.duplicated(subset=['Public Law Number'],keep=False)].sort_values('Public Law Number'))

# Remove duplicates
if len(df[df.duplicated(subset=['Public Law Number'],keep=False)])>0:
    print("Removing duplicates...")
    df.drop_duplicates(subset=['Public Law Number'],keep='first',ignore_index=True,inplace=True)

#%% Sort and save data
# Sort by PL number
df['PL'] = df['Public Law Number'].str.split('-', expand=True)[1].astype(int)
df=df.sort_values(['Congress','PL']).reset_index(drop=True)

# Re-save
df.drop('PL',axis=1).to_csv(file_path, index=False)

#%% Define a function using an alternative way to get public law word count
def get_pl_words(congress,pl):
    if congress > 103:
        pdf_url = f"https://www.congress.gov/{congress}/plaws/publ{pl}/PLAW-{congress}publ{pl}.pdf"
        num_pages, total_words = read_pdf(pdf_url, f"{congress}-{pl}")
    else:
        # Set start page number for search
        page_start = None
        for offset in range(1, 11):  # Try pl-1 to pl-10
            prev_pl = pl - offset
            if prev_pl < 1:
                break  # No valid PL before 1
            try:
                prev_pl_number = f"{congress}-{prev_pl}"
                pdf_url_before = df[df['Public Law Number'] == prev_pl_number]['URL'].iloc[0]
                page_start = int(re.search(r'Pg(\d+)\.pdf', pdf_url_before).group(1))
                break  # Success
            except:
                continue  # Try the next earlier PL
        if page_start is None:
            page_start = 1

        # Set end page number for search
        page_end = None
        for offset in range(1, 11):  # Try pl+1 to pl+10
            try:
                next_pl_number = f"{congress}-{pl + offset}"
                pdf_url_after = df[df['Public Law Number'] == next_pl_number]['URL'].iloc[0]
                page_end = int(re.search(r'Pg(\d+)\.pdf', pdf_url_after).group(1))
                break  # Success
            except:
                continue  # Try next offset
        if page_end is None:
            page_end = page_start + 1000

        # Search from start to end page number until finding a valid URL
        for p in range(page_start + 1, page_end):
            pdf_url = re.sub(r'Pg\d+\.pdf', f'Pg{p}.pdf', pdf_url_before)
            num_pages, total_words = read_pdf(pdf_url, f"{congress}-{pl}")

            if total_words != None:
                break
            else:
                pdf_url=None
                pass

    return num_pages, total_words, pdf_url

#%% Check whether the total number of laws for each congress matches
# Sometimes the API does not return all bills (public laws) for a congress
print(f"Checking data for {earliest}-{current} Congress...")
for congress in range(earliest,current+1):
    total_bills = get_total_count(congress)
    current_bills=len(df[df['Congress']==congress])

    if current_bills!=total_bills:
        print(f"Number of public laws ({current_bills}) from {congress} Congress didn't match with the record ({total_bills}).")

        # Collect missing laws
        for pl in range(1,total_bills+1):
            if pl not in df[df['Congress']==congress]['PL'].tolist():
                print(f'Collecting data for PL {congress}-{pl}...')
                num_pages, total_words, pdf_url=get_pl_words(congress,pl)

                # Concatenate data
                df_new = pd.DataFrame([[congress, f"{congress}-{pl}", None, None, num_pages, total_words, None, pdf_url]],
                                      columns=df.columns[0:8])
                df = pd.concat([df, df_new], ignore_index=True)

            else:
                pass

        # Save new dataframe
        df.drop('PL',axis=1).to_csv(file_path, index=False)

    else:
        pass

# Re-save
df.sort_values(['Congress','PL']).drop('PL',axis=1).to_csv(file_path, index=False)

#%% Retry for missing data
print('Missing values:',len(df[df['Word Count'].isnull()]))

# Iterate through all missing data and retry
for i in range(len(df)):
    if np.isnan(df['Word Count'][i]) or df['Word Count'][i]==None:
        congress=df['Congress'][i]
        bill_type=df['Bill Type'][i]
        bill_no=df['Bill Number'][i]
        law_no=df['Public Law Number'][i]

        num_pages, total_words, date, pdf_url = get_bill_words(congress, bill_type, bill_no,law_no,timeout=30)

        if total_words==None:
            pl=df['PL'][i]
            num_pages, total_words, pdf_url = get_pl_words(congress, pl)

        df.loc[i,'Page Count']=num_pages
        df.loc[i,'Word Count']=total_words
        df.loc[i, 'Date'] = date
        df.loc[i, 'URL'] = pdf_url
    else:
        pass

print('Missing values:',len(df[df['Word Count'].isnull()]))

# Re-save
df.sort_values(['Congress','PL']).drop('PL',axis=1).to_csv(file_path, index=False)

#%% Aggregate by congress
# Sum by congress
df_temp=df[df['Word Count']!=None]
df_temp['Public Law Count']=1
df_sum=df_temp[['Congress','Page Count','Word Count','Public Law Count']].groupby('Congress').sum().reset_index()
print(df_sum.info())

# Remove partial Congress data
today = datetime.today()
# Congress ends on Jan 3 of the next odd-numbered year
# Find the start year of the current Congress
if current_year % 2 == 0:
    congress_start_year = current_year - 1
else:
    congress_start_year = current_year
congress_end_date = datetime(congress_start_year + 2, 1, 3)

if today < congress_end_date:
    df_sum=df_sum[df_sum['Congress']<current]
else:
    pass

# Save results
df_sum.to_csv(f'{dir_path}/public_law_word_count_by_congress.csv',index=False)