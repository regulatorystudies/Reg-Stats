#%% Import packages
import pandas as pd
import numpy as np
import os
import sys
import re
from datetime import date
from dateutil.relativedelta import relativedelta
from agencies import agency_name_variations

#%% A function to check for partial data
# (in case the data collection for the most recent month has not been completed)
def check_partial_month(df_fr,update_end_date):
    if max(df_fr['publication_date'])>=update_end_date:
        pass
    elif update_end_date.weekday()>=5:  # if end of month is a Saturday (5) or Sunday (6)
        if max(df_fr['publication_date']) >= update_end_date - relativedelta(days=update_end_date.weekday()-4):
            pass
        else:
            print(f'WARNING: The FR tracking data for {update_end_date.year}-{update_end_date.month} is not complete.')
            update_end_date = update_end_date.replace(day=1) - relativedelta(days=1)
    else:
        print(f'WARNING: The FR tracking data for {update_end_date.year}-{update_end_date.month} is not complete.')
        update_end_date=update_end_date.replace(day=1) - relativedelta(days=1)

    return update_end_date

#%% A function to count monthly rules in FR tracking
def count_fr_monthly(dir_path,update_start_date,update_end_date):
    # Import FR tracking data
    df_fr = pd.read_csv(f'{dir_path}/../fr_tracking/fr_tracking.csv', encoding="ISO-8859-1")

    # Add a row to account for missing data
    df_fr = pd.concat([df_fr, pd.DataFrame(data={'publication_date': ['1/21/2021']})], ignore_index=True)

    # Change data type
    df_fr['publication_date'] = pd.to_datetime(df_fr['publication_date'], format="mixed").dt.date
    df_fr['publication_year'] = pd.to_datetime(df_fr['publication_date']).dt.year
    df_fr['publication_month'] = pd.to_datetime(df_fr['publication_date']).dt.month
    df_fr['significant'] = pd.to_numeric(df_fr['significant'], errors='coerce')
    df_fr['econ_significant'] = pd.to_numeric(df_fr['econ_significant'], errors='coerce')
    df_fr['3(f)(1) significant'] = pd.to_numeric(df_fr['3(f)(1) significant'], errors='coerce')

    # check for partial month
    update_end_date = x_partial_month(df_fr, update_end_date)

    # Refine FR tracking data to update_start_date - update_end_date
    df_fr = df_fr[(df_fr['publication_date'] >= update_start_date) & (df_fr['publication_date'] <= update_end_date)]

    # Count monthly rules according to rule type
    # Count monthly economically/section 3(f)(1) significant rules
    if (min(df_fr['publication_date']) < date(2023, 4, 6) < max(df_fr['publication_date'])) | \
        (min(df_fr['publication_date']) < date(2025,1,20) < max(df_fr['publication_date'])):
        # "Economically significant" rules published before 4/6/2023 or after 1/20/2025
        df_es1 = df_fr[(df_fr['publication_date'] < date(2023, 4, 6)) | \
                        (df_fr['publication_date'] > date(2025, 1, 20))]\
                        [['publication_year', 'publication_month', 'econ_significant']]. \
                        groupby(['publication_year', 'publication_month']).sum().reset_index()
        df_es1.rename(columns={'econ_significant': 'es_count'}, inplace=True)

        # "Section 3f1 significant" rules published between 4/6/2023 and 1/20/2025
        df_es2 = df_fr[(df_fr['publication_date'] >= date(2023, 4, 6)) & \
                        (df_fr['publication_date'] <= date(2025, 1, 20))]\
                        [['publication_year', 'publication_month', '3(f)(1) significant']]. \
                        groupby(['publication_year', 'publication_month']).sum().reset_index()
        df_es2.rename(columns={'3(f)(1) significant': 'es_count'}, inplace=True)

        # Append
        df_es = pd.concat([df_es1,df_es2],ignore_index=True)
        df_es=df_es.groupby(['publication_year', 'publication_month']).sum().reset_index().\
                    sort_values(['publication_year', 'publication_month'])

    elif (max(df_fr['publication_date']) < date(2023, 4, 6)) | (min(df_fr['publication_date']) > date(2025, 1, 20)):
        # "Economically significant" rules published before 4/6/2023 or after 1/20/2025
        df_es = df_fr[['publication_year', 'publication_month', 'econ_significant']]. \
                groupby(['publication_year', 'publication_month']).sum().reset_index()
        df_es.rename(columns={'econ_significant': 'es_count'}, inplace=True)

    else:
        # "Section 3f1 significant" rules published between 4/6/2023 and 1/20/2025
        df_es = df_fr[['publication_year', 'publication_month', '3(f)(1) significant']]. \
                groupby(['publication_year', 'publication_month']).sum().reset_index()
        df_es.rename(columns={'3(f)(1) significant': 'es_count'}, inplace=True)

    # Count monthly significant rules
    df_sig = df_fr[['publication_year', 'publication_month', 'significant']]. \
                groupby(['publication_year', 'publication_month']).sum().reset_index()
    df_sig.rename(columns={'significant': 'sig_count'}, inplace=True)

    # Merge economically significant and significant rules data
    df_fr_update=df_es.merge(df_sig,on=['publication_year', 'publication_month'],how='outer')

    return df_fr_update

#%% Function to count annual economically/section 3(f)(1) significant rules by presidential year in FR tracking
def count_fr_annual(dir_path, start_year, end_year, rule_type, acronym=''):
    # Import FR tracking data
    df_fr = pd.read_csv(f'{dir_path}/../fr_tracking/fr_tracking.csv', encoding="ISO-8859-1")
    
    df_fr['publication_date'] = pd.to_datetime(df_fr['publication_date'], format="mixed").dt.date
    df_fr['publication_year'] = pd.to_datetime(df_fr['publication_date'], format="mixed").dt.year
    df_fr['econ_significant'] = pd.to_numeric(df_fr['econ_significant'], errors='coerce')
    df_fr['3(f)(1) significant'] = pd.to_numeric(df_fr['3(f)(1) significant'], errors='coerce')
    df_fr['significant'] = pd.to_numeric(df_fr['significant'], errors='coerce')

    # Define which column to count
    if rule_type=='sig':
        df_fr['col_to_count'] = df_fr['significant']
    else:
        # section 3f1 for rules published 4/6/2023-1/20/2025
        df_fr['col_to_count']=df_fr['econ_significant']
        df_fr.loc[(df_fr['publication_date'] >= date(2023,4,6)) & (df_fr['publication_date'] <= date(2025,1,20)),
                'col_to_count']=df_fr['3(f)(1) significant']


    if acronym != '':
        agency_pattern = re.compile('|'.join(agency_name_variations[acronym]), re.IGNORECASE)
    
        def find_agency(text, agency_pattern):
            out = True if len(re.findall(agency_pattern, str(text))) > 0 else False
            return out
        
        df_fr['find_agency'] = df_fr['department'].apply(find_agency, agency_pattern=agency_pattern)
        df_fr = df_fr[df_fr['find_agency'] == True].reset_index(drop=True)
    
    else:
        pass

    # Generate annual counts by presidential year (Feb 1 - Jan 31)
    result_dict={}  # Dict to store results
    for year in range(start_year,end_year+1):
        count = df_fr[(df_fr['publication_date'] >= date(year, 2, 1)) & \
                     (df_fr['publication_date'] <= date(year + 1, 1, 31))]['col_to_count'].sum()
        # Append data
        result_dict[year]=count

    return result_dict
