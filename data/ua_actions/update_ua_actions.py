import pandas as pd
import requests
from bs4 import BeautifulSoup
import re
import sys
import os
from lxml import etree

#%% Fetch the latest year & season from Reginfo.gov
# Make a request
page = requests.get("https://www.reginfo.gov/public/do/eAgendaXmlReport")
soup = BeautifulSoup(page.content, 'html.parser')

# Extract the newest file information
newest_file_info = soup.select('li')[0].text[1:-6]

# Fetch the newest year and season
current_year_season = re.split("\s", newest_file_info, 1) #list
current_year = int(current_year_season[1]) # int
current_season = current_year_season[0].lower() # str

#%% Function to convert season str to int
def season_transform(season: str, schema = {"spring": "04", "fall": "10"}) -> str:
    return schema.get(season.lower(), "")

# Function to download an XML file
def download_file(year, season='fall'):
    if year == 2012:
        file_name = f'REGINFO_RIN_DATA_{year}.xml'
        file_url = f'https://www.reginfo.gov/public/do/XMLViewFileAction?f=REGINFO_RIN_DATA_{year}.xml'
    else:
        season_no = season_transform(season)
        file_name = f'REGINFO_RIN_DATA_{year}{season_no}.xml'
        file_url = f'https://www.reginfo.gov/public/do/XMLViewFileAction?f=REGINFO_RIN_DATA_{year}{season_no}.xml'

    xml_string=requests.get(file_url, allow_redirects=True).content

    return xml_string

#%% Function to get rule numbers from an XML
def process_xml(xml_string):

    # Parse XML
    parser = etree.XMLParser(encoding="UTF-8", recover=True)
    root = etree.fromstring(xml_string, parser)

    # Rule stages
    rule_stage_list = [child.find('RULE_STAGE').text for child in root]

    # Count rule numbers
    final=len([r for r in rule_stage_list if r=='Final Rule Stage'])
    proposed=len([r for r in rule_stage_list if r=='Proposed Rule Stage'])
    prerule=len([r for r in rule_stage_list if r=='Prerule Stage'])
    total=final+proposed+prerule

    return (final,proposed,prerule,total)

#%% Function to collect all data and return a dictionary of results
def collect_ua_data(start_year,start_season,end_year,end_season):

    print(f'Unified Agenda data {start_year} {start_season} - {end_year} {end_season} are being collected...')
    result_dic={}
    sea_option = ['spring','fall']

    # Condition 1: one year only
    if (end_year == start_year):

        # Condition 1.1: the year is 2012
        if start_year == 2012:
            result_dic[f'{start_year}']=process_xml(download_file(start_year))

        # Condition 1.2: the year is NOT 2012
        else:
            # Condition 1.2.1: the year is not 2012 & one season only
            if (start_season==end_season):
                result_dic[f'{start_year} {start_season.capitalize()}'] = process_xml(download_file(start_year, start_season))

            # Condition 1.2.2: the year is not 2012 & both seasons
            else:
                result_dic[f'{start_year} {start_season.capitalize()}'] = process_xml(download_file(start_year, start_season))
                result_dic[f'{end_year} {end_season.capitalize()}'] = process_xml(download_file(end_year, end_season))

    # Condition 2: Multiple years
    elif (start_year != end_year):  # to indicate specific condition

        # For the start year
        if start_year==2012:
            result_dic[f'{start_year}'] = process_xml(download_file(start_year))
        else:
            if start_season=='fall':    # only the fall season for the start year (other than 2012)
                result_dic[f'{start_year} {start_season.capitalize()}'] = process_xml(download_file(start_year, start_season))
            else:   # both seasons for the start year (other than 2012)
                for s in sea_option:
                    result_dic[f'{start_year} {s.capitalize()}'] = process_xml(download_file(start_year, s))

        # For the years between the start and end years
        for year in range((start_year+1), end_year):
            if (end_year - start_year == 1): # break the loop if there is no year between the start and end year
                break

            if year==2012:
                result_dic[f'{year}'] = process_xml(download_file(year))
            else:
                for s in sea_option:    # both seasons for the years (other than 2012)
                    result_dic[f'{year} {s.capitalize()}'] = process_xml(download_file(year, s))

        # For the end year
        if end_year==2012:
            result_dic[f'{end_year}'] = process_xml(download_file(end_year))
        else:
            if end_season=='spring':    # only the spring season for the end year (other than 2012)
                result_dic[f'{end_year} {end_season.capitalize()}'] = process_xml(download_file(end_year,end_season))
            else:
                for s in sea_option:    # both seasons for the end year (other than 2012)
                    result_dic[f'{end_year} {s.capitalize()}'] = process_xml(download_file(end_year,s))

    return result_dic

#%% Check the current data
dir_path=os.path.dirname(os.path.realpath(__file__))
file_path=f'{dir_path}/active_actions_by_unified_agenda.csv'

if os.path.exists(file_path):
    df_updated=pd.read_csv(file_path)
    print('Current dataset:')
    print(df_updated.info())

    ua_updated=df_updated['Unified Agenda'].iloc[-1]
    updated_year = int(ua_updated.split(' ')[0])
    updated_season=ua_updated.split(' ')[1].lower()

else:   # set before the first available Unified Agenda
    updated_year = 1995
    updated_season='spring'

#%% Set start year & season and end year & season for data collection
if (updated_year==current_year) and (updated_season==current_season):
    print('The dataset is up-to-date. No update is needed.')
    sys.exit(0)
elif updated_season=='spring':
    start_year=updated_year
    start_season='fall'
else:
    start_year=updated_year+1
    start_season='spring'

#%% Update data
results=collect_ua_data(start_year,start_season,current_year,current_season)
df_new=pd.DataFrame.from_dict(results,orient='index',
                              columns=['Final Rules','Proposed Rules','Prerules','Total'])
df_new=df_new.reset_index().rename(columns={'index': 'Unified Agenda'})

#%% Append with the old data
if os.path.exists(file_path):
    df_updated=pd.concat([df_updated,df_new],ignore_index=True)
else:
    df_updated=df_new

print('Updated dataset:')
print(df_updated.info())

#%% Export the updated data
df_updated.to_csv(file_path, index=False)
print('The updated dataset has been saved. End of execution.')
