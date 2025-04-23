#%%
import pandas as pd
import urllib.request
import re
from dateutil.relativedelta import relativedelta
#from agencies import parse_reginfo_xml, xml_file_path

#%% test
# import pprint
# agency_dict = parse_reginfo_xml(xml_file_path)
# pprint.pprint(agency_dict)

#%% Function to remove html tags
CLEANR = re.compile('<.*?>|&([a-z0-9]+|#[0-9]{1,6}|#x[0-9a-f]{1,6});')
def cleanhtml(text):
    cleantext = re.sub(CLEANR, '', text)
    return cleantext

#%% Function to fetch a count between given dates from reginfo.gov
def get_reginfo_data(start_date,end_date,rule_type='es',agency_code='0000'):
    # date format: MM/DD/YYYY; rule_type='es' or 'sig'; default agency code for "All Agencies" = 0000

    # Reginfo.gov hidden API (obtained through network monitor feature on web browsers)
    es_para='econSigs=Yes&' if rule_type=='es' else ''

    url=f'https://www.reginfo.gov/public/do/eoAdvancedSearch?rin=&eoStatusCode=CD&agencyCode={agency_code}&subAgencyCode=' \
        f'&_s3f1Sigs=on&terms=&{es_para}_econSigs=on&_legalDeadlines=on&receivedStartDate=&receivedEndDate=' \
        '&_ruleStages=on&ruleStages=4&ruleStages=5&ruleStages=3&_healthcareFlag=on&_internationalFlag=on' \
        '&_doddFrankFlag=on&_tcjaFlag=on&_expeditedFlag=on&_covid19Flag=on&concludedActionCode=&conclusionStartDate=' \
        f'&conclusionEndDate=&_majors=on&publishedStartDate={start_date}&publishedEndDate={end_date}' \
        '&_federalisms=on&_homelandSecurities=on&_smallEntities=on&_unfundedMandates=on&_rfaRequires=on&sortBy=DESC' \
        '&orderBy=OIRA_RECEIVED_DT&csrf_token=4BE87E4614F8A2FD8A0A2EB6BA917A4558F2021CFE4C57CEE8D2FF725AD7CC73EF58806BA07F5C7678C3D24EA6B7CD00EA76'

    # Request content
    max_retries = 10
    retry_count = 0
    while retry_count < max_retries:
        try:
            f = urllib.request.urlopen(url, timeout=10)
            # Rest of your code
            break  # Exit the loop if the request is successful
        except urllib.error.URLError as e:
            print(f"Error: {start_date}-{end_date}", e)
            print(f"Attempt {retry_count} failed. Re-trying the request...")
            retry_count += 1

    # Read content
    content = f.read()

    # Remove all html tags
    content=cleanhtml(str(content))
    # print(content)

    # Extract Number Of Records Found
    try:
        result = re.search(r"Number Of Records Found:\s*(\d+)", content).group(1)
        result=int(result)
    except AttributeError:
        # print("Note: Number Of Records not found in HTML content.")
        result = 0  # apply your error handling

    return result

# %% Function to collect reginfo data for multiple presidential months
def count_reginfo_monthly(update_start_date, update_end_date, rule_type='es'):
    # Create a dataframe to store results
    df_update=pd.DataFrame(columns=['publication_year', 'publication_month',f'{rule_type}_count'])

    # Literate through every month between update_start_date and update_end_date
    # Initialize the start date
    start_date = update_start_date.replace(day=1)

    # Iterate through each month
    while start_date <= update_end_date:
        # Define start date and end date for reginfo search
        if start_date<update_start_date:
            start_date = update_start_date
        else:
            pass

        end_date = (start_date + relativedelta(months=1)).replace(day=1) - relativedelta(days=1)
        if end_date>update_end_date:
            end_date=update_end_date
        else:
            pass

        # Get data for the month
        result=get_reginfo_data(start_date.strftime("%m/%d/%Y"), end_date.strftime("%m/%d/%Y"), rule_type)

        # Add a row to the dataframe
        df_update.loc[len(df_update)] = [start_date.year, start_date.month, result]

        # Update month for iteration
        start_date=(start_date + relativedelta(months=1)).replace(day=1)

    return df_update

# %% Function to collect reginfo data for multiple presidential years
def count_reginfo_annual(start_year, end_year, agency_code, rule_type='es'):
    result_dict = {}
    for year in range(start_year, end_year + 1):
        start_date = f'02/01/{year}'
        end_date = f'01/31/{year + 1}'
        result_dict[year] = get_reginfo_data(start_date, end_date, rule_type, agency_code)

    return result_dict
