print('NOTE: The current code can only update data for presidential years 2021 and later.')

import pandas as pd
import os
from datetime import date
import re

#%% Identify directory
dir_path=os.path.dirname(os.path.realpath(__file__))

#%% Define agencies: ([full names], acronym)
agencies=[([r'homeland\s+security\s+department', r'department\s+of\s+homeland\s+security', r'homeland\s+security\s+office'],'dhs'),
          ([r'commerce\s+department', r'department\s+of\s+commerce'], 'doc'),
          ([r'defense\s+department', r'department\s+of\s+defense'], 'dod'),
          ([r'energy\s+department', r'department\s+of\s+energy'],'doe'),
          ([r'interior\s+department', r'department\s+of\s+interior'],'doi'),
          ([r'justice\s+department', r'department\s+of\s+justice'], 'doj'),
          ([r'labor\s+department', r'department\s+of\s+labor'],'dol'),
          ([r'state\s+department', r'department\s+of\s+state'], 'dos'),
          ([r'transportation\s+department', r'department\s+of\s+transportation'],'dot'),
          ([r'education\s+department', r'department\s+of\s+education'],'ed'),
          ([r'environmental\s+protection\s+agency'],'epa'),
          ([r'health\s+and\s+human\s+services\s+department', r'department\s+of\s+health\s+and\s+human\s+services'],'hhs'),
          ([r'housing\s+and\s+urban\s+development\s+department', r'department\s+of\s+housing\s+and\s+urban\s+development'],'hud'),
          ([r'small\s+business\s+administration'],'sba'),
          ([r'treasury\s+department', r'department\s+of\s+the\s+treasury', r'treasury'], 'treas'),
          ([r'agriculture\s+department', r'department\s+of\s+agriculture'],'usda'),
          ([r'veterans\s+affairs\s+department', r'department\s+of\s+veterans\s+affairs'], 'va')]

#%% Import FR tracking data
df_fr = pd.read_csv(f'{dir_path}/../../fr_tracking/fr_tracking.csv', encoding="ISO-8859-1")

df_fr['publication_date'] = pd.to_datetime(df_fr['publication_date'], format="mixed").dt.date
df_fr['econ_significant'] = pd.to_numeric(df_fr['econ_significant'], errors='coerce')
df_fr['3(f)(1) significant']=pd.to_numeric(df_fr['3(f)(1) significant'], errors='coerce')

#%% Import aggregate ES rules data (for presidential party)
df_es=pd.read_csv(f'{dir_path}/../econ_significant_rules_by_presidential_year.csv')
party_dict=dict(zip(df_es['Presidential Year (February 1 - January 31)'],df_es['Presidential Party']))

#%% Retrieve data for an agency over a specified timeframe
def find_agency(text, agency_pattern):
    out = True if len(re.findall(agency_pattern, str(text))) > 0 else False
    return out

def update_data(agency,df_fr,first_year_to_update,last_year_to_update):
    # Refine FR tracking data to the agency
    agency_pattern = re.compile('|'.join(agency[0]), re.IGNORECASE)

    df_fr['find_agency'] = df_fr['department'].apply(find_agency, agency_pattern=agency_pattern)
    df_fr = df_fr[df_fr['find_agency'] == True].reset_index(drop=True)

    # Count annual economically/section 3(f)(1) significant rules
    update_data = []
    for year in range(first_year_to_update, last_year_to_update + 1):
        # Get annual count
        if year == 2023:
            count1 = df_fr[(df_fr['publication_date'] >= date(year, 2, 1)) & \
                           (df_fr['publication_date'] < date(year, 4, 6))]['econ_significant'].sum()
            count2 = df_fr[(df_fr['publication_date'] >= date(year, 4, 6)) & \
                           (df_fr['publication_date'] <= date(year + 1, 1, 31))]['3(f)(1) significant'].sum()
            count = count1 + count2
        else:
            col = 'econ_significant' if year < 2023 else '3(f)(1) significant'
            count = df_fr[(df_fr['publication_date'] >= date(year, 2, 1)) & \
                          (df_fr['publication_date'] <= date(year + 1, 1, 31))][col].sum()

        # Get presidential party from the aggregate ES rules data
        party = party_dict[year]

        # Append all years
        update_data.append([year, party, count])

    return update_data

#%% Define a function to update data for an agency
def update_agency(agency,df_fr):

    # Import the current dataset
    file_path=f'{dir_path}/{agency[1]}_econ_significant_rules_by_presidential_year.csv'

    if os.path.exists(file_path):
        df=pd.read_csv(file_path)

        # Find years to be updated
        # The latest data-year in the current dataset
        last_year_with_data=int(df['Presidential Year'].iloc[-1])
        current_year = date.today().year

        if last_year_with_data<current_year-1:
            first_year_to_update=max(last_year_with_data+1,2021)
            last_year_to_update=current_year-1
            print(f'Updating {agency[1].upper()} data for presidential year {first_year_to_update}-{last_year_to_update}...')

            # Get new data
            new_data=update_data(agency,df_fr,first_year_to_update,last_year_to_update)

            # Append new data
            df = pd.concat([df, pd.DataFrame(new_data, columns=df.columns[0:3])], ignore_index=True)

            # Export
            df.to_csv(file_path, index=False)
            print(f'The {agency[1].upper()} dataset has been updated and saved.')

        else:
            print(f'The {agency[1].upper()} data are up-to-date. No update is needed.')

    else:
        print(f'Error: no existing dataset for {agency[1].upper()}.')

#%% Update all agencies
for agency in agencies:
    update_agency(agency,df_fr)
print('All agency data have been updated.')

#%% Combine all agency data into a single dataset
df_all=pd.DataFrame()
for agency in agencies:
    # Import individual file
    file_path = f'{dir_path}/{agency[1]}_econ_significant_rules_by_presidential_year.csv'
    df_add=pd.read_csv(file_path)
    df_add.rename(columns={df_add.columns[-1]:'Economically Significant Rules'},inplace=True)
    df_add['Agency Name']=agency[0][0].replace(r'\s+',' ').title()
    df_add['Agency Acronym']=agency[1].upper()

    # Concatenate files
    df_all=pd.concat([df_all,df_add],ignore_index=True)

# Sort
df_all=df_all.sort_values(['Agency Name','Presidential Year']).reset_index(drop=True)
# Reorder columns
df_all=df_all[['Agency Name','Agency Acronym','Presidential Year','Presidential Party','Economically Significant Rules']]
# Save file
df_all.to_csv(f'{dir_path}/../agency_econ_significant_rules_by_presidential_year.csv',index=False)
print('The combined agency dataset has been saved.\nEnd of execution.')