import pandas as pd
import urllib.request
import re

#%% Function to remove html tags
CLEANR = re.compile('<.*?>|&([a-z0-9]+|#[0-9]{1,6}|#x[0-9a-f]{1,6});')
def cleanhtml(text):
  cleantext = re.sub(CLEANR, '', text)
  return cleantext

#%% URL (Reginfo.gov hidden API)
result_dict={}
for year in range(1981,2021):

    # Reginfo.gov hidden API (obtained through network monitor feature on web browsers)
    start_date=f'02/01/{year}'
    end_date=f'01/31/{year+1}'
    url='https://www.reginfo.gov/public/do/eoAdvancedSearch?rin=&eoStatusCode=CD&agencyCode=0000&subAgencyCode=' \
        '&_s3f1Sigs=on&terms=&econSigs=Yes&_econSigs=on&_legalDeadlines=on&receivedStartDate=&receivedEndDate=' \
        '&_ruleStages=on&ruleStages=4&ruleStages=5&ruleStages=3&_healthcareFlag=on&_internationalFlag=on' \
        '&_doddFrankFlag=on&_tcjaFlag=on&_expeditedFlag=on&_covid19Flag=on&concludedActionCode=&conclusionStartDate=' \
        f'&conclusionEndDate=&_majors=on&publishedStartDate={start_date}&publishedEndDate={end_date}' \
        '&_federalisms=on&_homelandSecurities=on&_smallEntities=on&_unfundedMandates=on&_rfaRequires=on&sortBy=DESC' \
        '&orderBy=OIRA_RECEIVED_DT&csrf_token=4BE87E4614F8A2FD8A0A2EB6BA917A4558F2021CFE4C57CEE8D2FF725AD7CC73EF58806BA07F5C7678C3D24EA6B7CD00EA76'

    # Read content from URL
    f = urllib.request.urlopen(url)
    content = f.read()

    # Remove all html tags
    content=cleanhtml(str(content))
    # print(content)

    # Extract Number Of Records Found
    try:
        result = re.search(r"Number Of Records Found:\s*(\d+)", content).group(1)
    except AttributeError:
        result = None  # apply your error handling

    result_dict[year]=result

#%% Check results
print(len(result_dict.keys()))
df=pd.DataFrame(result_dict.items(), columns=['Presidential Year (February 1 - January 31)',
                                              'Economically Significant Rules Published'])