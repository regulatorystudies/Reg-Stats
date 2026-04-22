# @title
#%% library
import warnings
warnings.filterwarnings('ignore') # Ignore warnings
import pandas as pd
import os
from lxml import etree
import requests
from bs4 import BeautifulSoup
import re
pd.set_option('display.width', 1000)
pd.set_option('display.max_columns', 10)
import streamlit as st

# Set directory
directory=os.path.dirname(os.path.realpath(__file__))
xml_temp_dir = os.path.join(directory, "tmp_xml")
os.makedirs(xml_temp_dir, exist_ok=True)

# @title
#%% All sub-functions
# Function to replace None values
def replace_noun(text):
    if text==None:
        text='N/A'
    else:
        text=text
    return text

# Function to remove HTML tags
def remove_html_tags(text):
    if text!=None:
        clean_text = re.compile('<.*?>|&([a-z0-9]+|#[0-9]{1,6}|#x[0-9a-f]{1,6});')
        text_out=re.sub(clean_text, ' ', text).strip()
    else:
        text_out=None
    return text_out

# Function to convert XML to CSV
def xml_to_csv(file):

    # Create empty lists to store values
    agenda_date,RIN,agency_code,agency_name,department_code,department_name,rule_title,abstract,\
        priority,RIN_status,rule_stage,major,CFR,legal_authority,legal_deadline_list,action_list,\
        regulatory_flexibility_analysis= ([] for i in range(17))

    # Parse XML
    parser = etree.XMLParser(encoding="UTF-8", recover=True)
    parsed_xml = etree.parse(file, parser)  # prevent form issue
    root = parsed_xml.getroot()

    for child in root:
        agenda_date.append(child.find('PUBLICATION')[0].text)
        RIN.append(child.find('RIN').text)
        agency_code.append(child.find('AGENCY')[0].text)

        if child.find('AGENCY').find('NAME') != None:
            agency_name.append(child.find('AGENCY').find('NAME').text)
        else:
            agency_name.append('')

        if child.find('PARENT_AGENCY') != None:
            department_code.append(child.find('PARENT_AGENCY')[0].text)
            department_name.append(child.find('PARENT_AGENCY')[1].text)
        else:
            department_code.append('')
            department_name.append('')

        rule_title.append(child.find('RULE_TITLE').text)
        abstract.append(remove_html_tags(child.find('ABSTRACT').text))  #HTML tags removed from abstract

        if child.find('PRIORITY_CATEGORY') != None:
            priority.append(child.find('PRIORITY_CATEGORY').text)
        else:
            priority.append('')
        if child.find('RIN_STATUS') != None:
            RIN_status.append(child.find('RIN_STATUS').text)
        else:
            RIN_status.append('')
        if child.find('RULE_STAGE') != None:
            rule_stage.append(child.find('RULE_STAGE').text)
        else:
            rule_stage.append('')
        if child.find('MAJOR') != None:
            major.append(child.find('MAJOR').text)
        else:
            major.append('')

        if child.find('CFR_LIST') != None:
            index = 0
            cfr_text = ''
            while (index < len(list(child.find('CFR_LIST')))):
                add = child.find('CFR_LIST')[index].text
                if cfr_text == '':
                    cfr_text = add
                else:
                    cfr_text = cfr_text + "; " + str(add)
                index = index + 1
            CFR.append(cfr_text)
        else:
            CFR.append('')

        if child.find('LEGAL_AUTHORITY_LIST') != None:
            index = 0
            lauth_text = ''
            while (index < len(list(child.find('LEGAL_AUTHORITY_LIST')))):
                add = child.find('LEGAL_AUTHORITY_LIST')[index].text
                if lauth_text == '':
                    lauth_text = add
                else:
                    lauth_text = lauth_text + "; " + str(add)
                index = index + 1
            legal_authority.append(lauth_text)
        else:
            legal_authority.append('')

        if child.find('LEGAL_DLINE_LIST') is not None:
            legal_deadlines = []
            if child.find('LEGAL_DLINE_LIST').find('LEGAL_DLINE_INFO') != None:
                for element in child.find('LEGAL_DLINE_LIST').findall('LEGAL_DLINE_INFO'):
                    lddl_text = replace_noun(element.find('DLINE_TYPE').text) + '; ' + \
                                replace_noun(element.find('DLINE_ACTION_STAGE').text) + '; ' + \
                                replace_noun(element.find('DLINE_DATE').text) + '; ' + \
                                replace_noun(element.find('DLINE_DESC').text)
                    legal_deadlines.append(lddl_text)
            legal_deadline_list.append(legal_deadlines)
        else:
            legal_deadline_list.append([])

        if child.find('TIMETABLE_LIST') != None:
            actions=[]
            for element in child.find('TIMETABLE_LIST').findall('TIMETABLE'):
                if element.find('FR_CITATION') != None:
                    action_text = element.find('TTBL_ACTION').text + '; ' + \
                                    element.find('TTBL_DATE').text + '; ' + \
                                    element.find('FR_CITATION').text
                else:
                    if element.find('TTBL_DATE') != None:
                        action_text = element.find('TTBL_ACTION').text + '; ' + \
                                        element.find('TTBL_DATE').text
                    else:
                        action_text = element.find('TTBL_ACTION').text
                actions.append(action_text)
            action_list.append(actions)
        else:
            action_list.append([])

        if child.find('RFA_REQUIRED') != None:
            regulatory_flexibility_analysis.append(child.find('RFA_REQUIRED').text)

    # Convert lists to a dataframe
    df_xml=pd.DataFrame(list(zip(agenda_date,RIN,agency_code,agency_name,department_code,department_name,\
                        rule_title,abstract,priority,RIN_status,rule_stage,major,CFR,legal_authority,\
                        legal_deadline_list,regulatory_flexibility_analysis,action_list)),\
              columns=['agenda_date','RIN','agency_code','agency_name','department_code','department_name',\
                        'rule_title','abstract','priority','RIN_status','rule_stage','major','CFR','legal_authority',\
                        'legal_deadline_list','regulatory_flexibility_analysis','action_list'])

    # Split legal deadline and action columns
    lddl_max = max([len(l) for l in df_xml['legal_deadline_list']])
    lddl_cols = []
    for i in range(1, lddl_max + 1):
        lddl_cols.append('legal_deadline' + str(i))
    df_xml[lddl_cols] = pd.DataFrame(df_xml['legal_deadline_list'].tolist(), index=df_xml.index)

    action_max = max([len(l) for l in df_xml['action_list']])
    action_cols = []
    for i in range(1, action_max + 1):
        action_cols.append('action' + str(i))
    df_xml[action_cols] = pd.DataFrame(df_xml['action_list'].tolist(), index=df_xml.index)

    df_xml.drop(['legal_deadline_list','action_list'],axis=1,inplace=True)

    return df_xml

# Function to convert season str to int
def season_transform(season):
    sea_no_option = ['04', '10']  # season numbers
    if season == 'fall':
        return sea_no_option[1]
    elif season == 'spring':
        return sea_no_option[0]
    else:
        print('Invalid season: please enter "Spring" or "Fall" for the season input.')

# Function to download an XML file
def download_file(year, season='fall'):
    season_code = season_transform(season)
    if year == 2012:
        file_name = f'REGINFO_RIN_DATA_{year}.xml'

    else:
        file_name = f'REGINFO_RIN_DATA_{year}{season_code}.xml'

    url = f"https://www.reginfo.gov/public/do/XMLViewFileAction?f={file_name}"
    file_path = os.path.join(xml_temp_dir, file_name)


    try:
        if not os.path.exists(file_path):
            r = requests.get(url, allow_redirects=True)
            open(file_path, 'wb').write(r.content)
            print(f'{file_name} has been downloaded.')
        else:
            print(f'{file_name} already exists in the directory.')

        return file_path

    except:
        print(f'ERROR: {file_name} cannot be downloaded.')


def cleanup_xml_file(path):
    if not path:
        return
    try:
        os.remove(path)
    except FileNotFoundError:
        pass
    except OSError:
        pass

# Function to reorder columns in concatenated dataframes
def reorder_columns(df):
    action_col=[col for col in df if col.startswith('action')]
    other_col=[col for col in df if not col.startswith('action')]
    df=df[other_col+action_col]     # action columns are always at the end
    return df

# @title
#%% Main function to download XML and convert to CSV within a given time interval (based on user input)
def collect_ua_data(start_year,start_season,end_year,end_season):

    result_xml = []
    result_csv = []
    sea_option = ['spring','fall']

    # Condition 1: one year only
    if (end_year == start_year):

      # Condition 1.1: the year is 2012
      if start_year == 2012:
        xml_path = download_file(start_year)
        df = xml_to_csv(xml_path)
        df.to_csv(f'{directory}REGINFO_RIN_DATA_{start_year}.csv', index=False)
        cleanup_xml_file(xml_path)
        print(f'A CSV file for Unified Agenda {start_year} has been created!'
              f'\nClick the Files icon on the left to view and download the CSV file.')

      # Condition 1.2: the year is NOT 2012
      else:
        # Condition 1.2.1: the year is not 2012 & one season only
        if (start_season==end_season):
          xml_path = download_file(start_year, start_season)
          df = xml_to_csv(xml_path)
          df.to_csv(f'{directory}REGINFO_RIN_DATA_{start_year}{start_season}.csv', index=False)
          cleanup_xml_file(xml_path)
          print(f'A CSV file for Unified Agenda {start_season.title()} {start_year} has been created!'
                f'\nClick the Files icon on the left to view and download the CSV file.')

        # Condition 1.2.2: the year is not 2012 & both seasons
        else:
          start_xml = download_file(start_year, start_season)
          end_xml = download_file(end_year, end_season)
          df1=xml_to_csv(start_xml)
          df2=xml_to_csv(end_xml)
          df = pd.concat([df1,df2], ignore_index=True)
          df=reorder_columns(df)
          df.to_csv(f'{directory}REGINFO_RIN_DATA_{start_year}{start_season}&{end_season}.csv', index=False)
          cleanup_xml_file(start_xml)
          cleanup_xml_file(end_xml)
          print(f'A CSV file for Unified Agenda {start_season.title()} & {end_season.title()} {start_year} has been created!'
                f'\nClick the Files icon on the left to view and download the CSV file.')

    # Condition 2: Multiple years
    elif (start_year != end_year): # to indicate specific condition
        # For the start year
        if start_year==2012:
            result_xml.append(download_file(start_year))
        else:
            if start_season=='fall':    # only the fall season for the start year (other than 2012)
                result_xml.append(download_file(start_year,start_season))
            else:   # both seasons for the start year (other than 2012)
                for s in sea_option:
                    result_xml.append(download_file(start_year,s))

        # For the years between the start and end years
        for year in range((start_year+1), end_year):
            if (end_year - start_year == 1): # break the loop if there is no year between the start and end year
                break

            if year==2012:
                result_xml.append(download_file(year))
            else:
                for s in sea_option:    # both seasons for the years (other than 2012)
                    result_xml.append(download_file(year, s))

        # For the end year
        if end_year==2012:
            result_xml.append(download_file(end_year))
        else:
            if end_season=='spring':    # only the spring season for the end year (other than 2012)
                result_xml.append(download_file(end_year,end_season))
            else:
                for s in sea_option:    # both seasons for the end year (other than 2012)
                    result_xml.append(download_file(end_year,s))

        # Convert all downloaded XML files (multiple years) into a single CSV file
        for j in result_xml:
            new_csv = xml_to_csv(j)
            result_csv.append(new_csv)
            cleanup_xml_file(j)

        df = pd.concat(result_csv, ignore_index=True)
        df=reorder_columns(df)
        df.to_csv(f'{directory}REGINFO_RIN_DATA_{start_year}{start_season}-{end_year}{end_season}.csv', index=False)
        print(f'A CSV file for Unified Agenda {start_season.title()} {start_year} - {end_season.title()} {end_year} has been created!'
              f'\nClick the Files icon on the left to view and download the CSV file.')

    return


# Make a request
page = requests.get("https://www.reginfo.gov/public/do/eAgendaXmlReport")
soup = BeautifulSoup(page.content, 'html.parser')

# Extract the newest file information
newest_file_info = soup.select('li')[0].text[1:-6]

# Fetch the newest year and season
current_year_season = re.split("\s", newest_file_info, 1) #list
current_year = int(current_year_season[1]) # int
current_season = current_year_season[0] # str
current_season = current_season.lower()

# @title
#%% Check year & season input
# Function to input year
def input_year(year_type='year'):
    year_range = range(1995, current_year + 1)
    while True:
        year=int(input(f'Please enter the {year_type} of the data you are requesting: '))
        if year in year_range:
            return year
            break
        else:
            print(f'ERROR: Your input year {year} is not in the valid time range.')

# Function to input season
def input_season(year_type):
    sea_option = ['spring','fall']
    while True:
        season=input(f'Please enter the season of the {year_type} ("Spring" or "Fall"): ').lower()
        if season in sea_option:
            return season
            break
        else:
            print(f'ERROR: Your input season "{season}" is not valid.')


# Function to restrict season input depending on the year
def restrict_season(year,year_type='year'):
    if year == 1995:
        season = 'fall'
        print(f'Only fall agenda is available for {year}.')
    elif year == 2012:
        season = 'fall'
        print(f'Only one agenda was published in {year}.')
    elif year == current_year:
        if current_season == 'spring':
            season = 'spring'
            print(f'The most recent Unified Agenda is {current_season.title()} {current_year}')
        else:
            season = input_season(year_type)
    else:
        season = input_season(year_type)
    return season


