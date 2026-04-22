

#@title
#%% Library
from xml.etree import ElementTree
import csv
from datetime import datetime
import sys
import warnings

# Ignore warnings
warnings.filterwarnings('ignore')
import pandas as pd
import os
import numpy as np
import xml.etree.cElementTree as et
pd.set_option('display.width', 1000)
pd.set_option('display.max_columns', 10)
from lxml import etree
import requests

# !pip install pandas_read_xml | grep -v 'already satisfied'

import pandas_read_xml as pdx
from pandas_read_xml import flatten, fully_flatten, auto_separate_tables

# Set directory
dir_path=os.path.dirname(os.path.realpath(__file__))

# @title
# Fetch current year
current_time = datetime.now()
current_year = current_time.year

# @title
# Download agency name & code crosswalk
#download xml file
url_agy = 'https://raw.githubusercontent.com/zhoudanxie/regulatory_data_repository/main/other_data/AGY_AGENCY_LIST.xml'
path_agy = f'{dir_path}/AGY_AGENCY_LIST.xml'
r = requests.get(url_agy, allow_redirects=True)
open(path_agy, 'wb').write(r.content)

#open xml file
with open(path_agy, 'r') as f:
     test_xml = f.read()

#extract information from xml
df = pdx.read_xml(test_xml, ['OIRA_DATA'])
df = df.pipe(flatten)
df = df.pipe(flatten)

agy_info = pd.DataFrame({'agency_code': df['AGENCY|AGENCY_CODE'].astype(int), 'agency_name': df['AGENCY|NAME']})

#@title
# Function to convert XML to dataframe
def oira_tranformation(filepath):

    # Adding header to CSV File:
    agency_code, rin, title, stage, ES, date_received,\
    legal_deadline, date_completed, decision, date_published,\
    health_care_act, Dodd_Frank_Act, international_impacts,\
    unfunded_mandates, major, homeland_security, regulatory_flexibility_analysis = ([] for i in range(17))


    # Parse XML File
    #xml = ElementTree.parse(filepath)
    parser = etree.XMLParser(encoding="UTF-8", recover=True)
    parsed_xml = etree.parse(filepath, parser)  # prevent form issue
    xml = parsed_xml.getroot()


    # For each regulatory act:
    for regact in xml.findall("REGACT"):
            if (regact):
                # Extract Reg act details:
                agency_code.append(int(regact.find("AGENCY_CODE").text))
                rin.append(regact.find("RIN").text)
                title.append(regact.find("TITLE").text)
                stage.append(regact.find("STAGE").text)
                ES.append(regact.find("ECONOMICALLY_SIGNIFICANT").text)
                date_received.append(regact.find("DATE_RECEIVED").text)
                legal_deadline.append(regact.find("LEGAL_DEADLINE").text)
                date_completed.append(regact.find("DATE_COMPLETED").text)
                if regact.find("DECISION") is not None:
                  decision.append(regact.find("DECISION").text)
                else: decision.append("NA") #
                if regact.find("DATE_PUBLISHED")!=None:
                    date_published.append(regact.find("DATE_PUBLISHED").text)
                else: date_published.append("NA")
                if regact.find("HEALTH_CARE_ACT")!=None:
                    health_care_act.append(regact.find("HEALTH_CARE_ACT").text) # afford health act after 2009
                else: health_care_act.append("NA")
                if regact.find("DODD_FRANK_ACT")!=None:
                    Dodd_Frank_Act.append(regact.find("DODD_FRANK_ACT").text) # after 2010
                else: Dodd_Frank_Act.append("NA")
                if regact.find("INTERNATIONAL_IMPACTS")!=None:
                    international_impacts.append(regact.find("INTERNATIONAL_IMPACTS").text)
                else: international_impacts.append("NA")
                if regact.find("UNFUNDED_MANDATES")!=None:
                    unfunded_mandates.append(regact.find("UNFUNDED_MANDATES").text)
                else: unfunded_mandates.append("NA")
                if regact.find("MAJOR")!=None:
                    major.append(regact.find("MAJOR").text)
                else: major.append("NA")
                if regact.find("HOMELAND_SECURITY")!=None:
                    homeland_security.append(regact.find("HOMELAND_SECURITY").text)
                else: homeland_security.append("NA")
                if regact.find("REGULATORY_FLEXIBILITY_ANALYSIS")!=None:
                    regulatory_flexibility_analysis.append(regact.find("REGULATORY_FLEXIBILITY_ANALYSIS").text)
                else: regulatory_flexibility_analysis.append("NA")

    # Convert lists to a dataframe
    df_xml=pd.DataFrame(list(zip(agency_code, rin, title, stage, ES, date_received,\
                                 legal_deadline, date_completed, decision, date_published,\
                                 health_care_act, Dodd_Frank_Act, international_impacts,\
                                 unfunded_mandates, major, homeland_security, regulatory_flexibility_analysis)),\
                         columns=["agency_code","rin","title","stage","ES",\
                                 "date_received","legal_deadline","date_completed", "decision",\
                                 "date_published", "health_care_act","Dodd_Frank_Act","international_impacts",\
                                 "unfunded_mandates","major","homeland_security","regulatory_flexibility_analysis"])

    df_fin = pd.merge(df_xml,agy_info,on="agency_code",how='left')

    reorder_column = df_fin.pop('agency_name')
    df_fin.insert(1, 'agency_name', reorder_column)

    return df_fin

# @title
# Function to download a XML file
def download_xml(year):
    file_path = f'/content/EO_RULE_COMPLETED_{year}.xml'

    try:
        if not os.path.exists(file_path):
            if year == current_year:
                file_url = f'https://www.reginfo.gov/public/do/XMLViewFileAction?f=EO_RULE_COMPLETED_YTD.xml'
            else:
                file_url = f'https://www.reginfo.gov/public/do/XMLViewFileAction?f=EO_RULE_COMPLETED_{year}.xml'

            r = requests.get(file_url, allow_redirects=True)

            if 'DATE_RECEIVED' in r.content.decode("utf-8"):    #check if the correct XML has been downloaded
                open(file_path, 'wb').write(r.content)
                print(f'EO_RULE_COMPLETED_{year}.xml has been downloaded.')
            else:
                print(f'ERROR: EO_RULE_COMPLETED_{year}.xml cannot be downloaded.')
                file_path=None

        else:
            print( f'EO_RULE_COMPLETED_{year}.xml already exists in the directory.')

    except:
        print(f'ERROR: EO_RULE_COMPLETED_{year}.xml cannot be downloaded.')
        file_path=None
        pass

    return file_path

#@title
#%% Main function to download XML and convert to CSV within a given time interval (based on user input)

#for multiple years
def collect_oira_data_multi(start_year,end_year):
      result_xml = []
      result_csv = []

      # Download XML files
      if (start_year != end_year):
          for year in range(start_year, (end_year+1)):
              file_path=download_xml(year)
              if file_path!=None:
                  result_xml.append(file_path)

      # Convert all downloaded XML files into a single CSV file
      if len(result_xml)>0:
          for j in result_xml:
              new_csv = oira_tranformation(j)
              result_csv.append(new_csv)

          df_res = pd.concat(result_csv, ignore_index=True)
          df_res.to_csv(f'/content/EO_RULE_COMPLETED_{start_year}-{end_year}.csv', index=False)
          print(f'A CSV file for OIRA review data {start_year}-{end_year} has been created!'
                f'\nClick the Files icon on the left to view and download the CSV file.')

      else:
          print(f'ERROR: Your requested data cannot be downloaded.'
                f'\nPlease retry in a moment. If the issue persists, contact the author for further assistance.')

      return

#for a single year
def collect_oira_data_single(year):
      result_xml = []
      result_csv = []

      # Download XML files
      file_path=download_xml(year)
      if file_path!=None:
          result_xml.append(file_path)

      # Convert all downloaded XML files into a single CSV file
      if len(result_xml)>0:
          for j in result_xml:
              new_csv = oira_tranformation(j)
              result_csv.append(new_csv)

          df_res = pd.concat(result_csv, ignore_index=True)
          df_res.to_csv(f'/content/EO_RULE_COMPLETED_{year}.csv', index=False)
          print(f'A CSV file for OIRA review data {year} has been created!'
                f'\nClick the Files icon on the left to view and download the CSV file.')

      else:
          print(f'ERROR: Your requested data cannot be downloaded.'
                f'\nPlease retry in a moment. If the issue persists, contact the author for further assistance.')

      return

# @title
# Functions to check and get user input year
current_time = datetime.now()  # using now() to get current time
current_year = current_time.year

def input_year_option(year_option):
    search_option = ['s','m']
    while True:
        year_option = input(f'Are you requesting data for a single year or multiple years? Please enter "s" (single) or "m" (multiple): ').lower()
        if year_option in search_option:
            return year_option
            break
        else:
            print(f'ERROR: Your input "{year_option}" is not valid.')


def input_year_check(year_type='year'):
    year_range = range(1981, current_year+1)
    while True:
        year=int(input(f'Please enter the {year_type} of the data you are requesting: '))
        if year in year_range:
            return year
            break
        else:
            print(f'ERROR: Your input year {year} is not in the valid time range.')

#@title
# User input
