import pandas as pd
import requests
from requests.adapters import HTTPAdapter, Retry
import json
import os
from PyPDF2 import PdfReader
from PyPDF2.errors import PdfReadError
from io import BytesIO
from datetime import datetime

#%% Get API key
with open('api_key.txt', 'r') as file:
    api_key = file.read()

#%% Define a function to get word count for a bill (public law)
def get_bill_words(congress, bill_type, bill_no):
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
                    print(pdf_url)
                    break

    # Adjust date format
    # Parse to datetime
    dt = datetime.strptime(date, "%Y-%m-%dT%H:%M:%SZ")
    # Extract date only
    date = dt.date()

    # Get page and word counts
    # Initialize default values
    num_pages = total_words = None

    if pdf_url!=None:

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
            response = session.get(pdf_url, timeout=10)
            response.raise_for_status()

            try:
                pdf_file = BytesIO(response.content)
                reader = PdfReader(pdf_file)

                num_pages = len(reader.pages)
                total_words = sum(
                    len(page.extract_text().split())
                    for page in reader.pages
                    if page.extract_text()
                )

            except PdfReadError as e:
                print(f"PDF read error for {bill_type} {bill_no}: {e}")
                print(pdf_url)

        except requests.exceptions.RequestException as e:
            print(f"Request error for {bill_type} {bill_no}: {e}")
            print(pdf_url)

    else:
        print(f"Missing PDF URL for {bill_type} {bill_no}.")

    return num_pages, total_words, date

#%% Define a function to get word counts for all public laws from a congress
def get_laws_by_congress(congress):
    base_url = f'https://api.congress.gov/v3/law/{congress}/pub'
    limit=100     # number of records returned per request
    offset = 0

    # Initial request to find out the total number of bills
    initial_response = requests.get(base_url,params={'limit': 1, 'offset': 0, 'api_key': api_key})
    initial_data = initial_response.json()
    total_bills = initial_data['pagination']['count']
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
                bill_results = get_bill_words(congress, bill_type, bill_no)
            except:
                print(f"Data could not be collected for Public Law {law_no}.")

            # Append results
            results_list.append((congress, law_no, bill_type, bill_no) + bill_results)
            print(f'Data collected for Public Law {law_no}.')

        offset += limit

    return results_list

#%% Iterate through all congresses
cols=['Congress', 'Public Law Number', 'Bill Type', 'Bill Number', 'Page Count', 'Word Count', 'Date']

# Read existing dataset (if any)
file_path='public_law_word_count.csv'
if os.path.exists(file_path):
    df = pd.read_csv(file_path)
    start=df['Congress'].max()+1
else:
    df=pd.DataFrame(columns=cols)
    start=94
    # Note: PDFs prior to 94th Congress are available, but they were not separated by law,
    # so a file could contain text from the preceding law.

# Collect data for all congresses through the current congress
current=119
for congress in range(start,current+1):
    results_list=get_laws_by_congress(congress)
    print(f'Data collected for {congress} congress.')

    # Convert to dataframe
    df_new = pd.DataFrame(results_list, columns=cols)
    # Concatenate
    df=pd.concat([df,df_new],ignore_index=True)

    # Save new dataframe
    df.to_csv(file_path, index=False)

#%% Check data
print(df[df.duplicated(subset=['Public Law Number'],keep=False)].sort_values('Public Law Number'))

# Remove duplicates
df.drop_duplicates(subset=['Public Law Number'],keep='first',ignore_index=True,inplace=True)

# Re-save
df.to_csv(file_path, index=False)

#%% Aggregate by congress
df['Law Count']=1

# Sum by congress
df_sum=df[['Congress','Page Count','Word Count','Law Count']].groupby('Congress').sum().reset_index()
print(df_sum.info())

# Save results
df_sum.to_csv('public_law_word_count_by_congress.csv',index=False)
