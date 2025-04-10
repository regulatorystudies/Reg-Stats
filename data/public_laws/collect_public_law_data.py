import pandas as pd
import requests
from requests.adapters import HTTPAdapter
from requests.packages.urllib3.util.retry import Retry
import json
import os

api_key='ZLsFxOcNOnnbLJZeXhyrFTcNddruSV9xtWFnsTQ0'

#%% Define a function to get word count for a bill (public law)
def get_bill_words(congress, bill_type, bill_no):
    url_bill = f'https://api.congress.gov/v3/bill/{congress}/{bill_type.lower()}/{bill_no}/text?api_key={api_key}'

    response_bill = requests.get(url_bill)
    data_bill = response_bill.json()

    #**** NEED REVISION ****#
    # The first URL is not the final version of the public law; the PDF is, but it could contain text from the preceding law.
    # Alternative clean text data are available on Govinfo.gov, but only since 104th Congress.
    # Get bill text url
    url_text = data_bill['textVersions'][0]['formats'][0]['url']

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

    # Use the session to make requests
    try:
        response = session.get(url_text)
        response.raise_for_status()

        # Process the response
        # Read bill text
        bill_text = response.text

        # Remove any unwanted characters or extra spaces
        cleaned_text = ' '.join(bill_text.split())

        # Count the words
        word_count = len(cleaned_text.split())

    except requests.exceptions.RequestException as e:
        print(f"An error occurred for {bill_type} {bill_no}: {e}")
        word_count=None

    return word_count

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
            bill_word_count = get_bill_words(congress, bill_type, bill_no)

            # Append results
            results_list.append((congress, law_no, bill_type, bill_no, bill_word_count))

        offset += limit

    return results_list

#%% Iterate through all congresses
cols=['Congress', 'Public Law Number', 'Bill Type', 'Bill Number', 'Word Count']

# Read existing dataset (if any)
file_path='data/public_laws/public_law_word_count.csv'
if os.path.exists(file_path):
    df = pd.read_csv(file_path)
    start=df['Congress'].max()+1
else:
    df=pd.DataFrame(columns=cols)
    start=93

# Collect data for all congresses through the current congress
current=119
for congress in range(start,current):
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
df['Bill Count']=1

# Sum by congress
df_sum=df[['Congress','Word Count','Bill Count']].groupby('Congress').sum().reset_index()
print(df_sum.info())

# Save results
df_sum.to_csv('data/public_laws/public_law_word_count_by_congress.csv',index=False)
