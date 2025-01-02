import pandas as pd
import os
import sys
from datetime import date

# Import customized functions
dir_path=os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, f'{dir_path}/../py_funcs')
from party import *
from reginfo import *

#%% Specify the earliest year of this dataset
earliest_year=1981

#%% Import the current dataset
file_path=f'{dir_path}/econ_significant_rules_by_presidential_year.csv'

if os.path.exists(file_path):
    # Read the dataset if existing
    df=pd.read_csv(file_path)
    # The latest data-year in the current dataset
    last_year_with_data = int(df[df['Economically Significant Rules Published'].notnull()]['Presidential Year (February 1 - January 31)'].iloc[-1])
else:
    # Create a file
    df=pd.DataFrame(columns=['Presidential Year (February 1 - January 31)',
                             'Presidential Party',
                             'Economically Significant Rules Published'])
    last_year_with_data=earliest_year-1

#%% Import FR tracking data
df_fr = pd.read_csv(f'{dir_path}/../fr_tracking/fr_tracking.csv', encoding="ISO-8859-1")

df_fr['publication_date'] = pd.to_datetime(df_fr['publication_date'], format="mixed").dt.date
df_fr['econ_significant'] = pd.to_numeric(df_fr['econ_significant'], errors='coerce')
df_fr['3(f)(1) significant']=pd.to_numeric(df_fr['3(f)(1) significant'], errors='coerce')

#%% Function to count annual economically/section 3(f)(1) significant rules in FR tracking
def get_fr_data(start_year, end_year):
    result_dict={}  # List to store results
    for year in range(start_year,end_year+1):
        if year==2023:
            count1=df_fr[(df_fr['publication_date'] >= date(year,2,1)) & \
                         (df_fr['publication_date'] < date(year,4,6))]['econ_significant'].sum()
            count2=df_fr[(df_fr['publication_date'] >= date(year,4,6)) & \
                         (df_fr['publication_date'] <= date(year+1,1,31))]['3(f)(1) significant'].sum()
            count=count1+count2
        else:
            col='econ_significant' if year<2023 else '3(f)(1) significant'
            count=df_fr[(df_fr['publication_date']>=date(year,2,1)) & \
                         (df_fr['publication_date']<=date(year+1,1,31))][col].sum()

        # Append data
        result_dict[year]=count

    return result_dict

#%% Function to collect data for years that need to be updated
def update_data(first_year_to_update,last_year_to_update):
    if first_year_to_update>2020:
        print(f"Collecting data from FR tracking for presidential years {first_year_to_update}-{last_year_to_update}...")
        new_data_dict=get_fr_data(first_year_to_update,last_year_to_update)
    else:
        print(f"Collecting data from reginfo.gov for presidential years {first_year_to_update}-2020...")
        new_data_dict=get_reginfo_data(first_year_to_update,2020)
        print(f"Collecting data from FR tracking for presidential years 2021-{last_year_to_update}...")
        new_data_dict= new_data_dict | get_fr_data(2021,last_year_to_update)

    # Convert to dataframe
    df_new=pd.DataFrame(new_data_dict.items(),columns=['Presidential Year (February 1 - January 31)',
                                                       'Economically Significant Rules Published'])

    # Add presidential party
    df_new['Presidential Party']=df_new['Presidential Year (February 1 - January 31)'].apply(input_party)

    return df_new

#%% Function to verify previous data
def verify_previous_data(df,check):
    if check=='y':
        # Re-collect data
        if last_year_with_data<2021:
            print(f"Verifying data from reginfo.gov for presidential years {earliest_year}-{last_year_with_data}...")
            old_data_updated=get_reginfo_data(earliest_year,last_year_with_data)
        else:
            print(f"Verifying data from reginfo.gov for presidential years {earliest_year}-2020...")
            old_data_updated=get_reginfo_data(earliest_year,2020)
            print(f"Verifying data from FR tracking for presidential years 2021-{last_year_with_data}...")
            old_data_updated=old_data_updated | get_fr_data(2021,last_year_with_data)

        # Compare with the original data
        print('Comparing newly collected data with original data...')
        old_data_original=dict(zip(df['Presidential Year (February 1 - January 31)'],
                                   df['Economically Significant Rules Published'].fillna(-1).astype('int')))
        for k in old_data_updated:
            if old_data_updated[k]!=old_data_original[k]:
                print(f'Value for {k} has been updated from {old_data_original[k] if old_data_original[k]>=0 else None} to {old_data_updated[k]}.')
            else:
                pass
        print('All previous data have been verified.')

        # Convert re-collected data to dataframe and replace the original data
        df=pd.DataFrame(old_data_updated.items(),columns=['Presidential Year (February 1 - January 31)',
                                                          'Economically Significant Rules Published'])
        # Add presidential party
        df['Presidential Party'] = df['Presidential Year (February 1 - January 31)'].apply(input_party)

    else:
        pass

    return df

#%% Find years to be updated (if any)
# Years to be updated
current_year = date.today().year

if last_year_with_data<current_year-1:
    first_year_to_update=max(last_year_with_data+1,earliest_year)
    last_year_to_update=current_year-1
    print(f'Data update is needed for presidential year {first_year_to_update}-{last_year_to_update}.')

    # Update data
    df_new=update_data(first_year_to_update,last_year_to_update)

    # Verify previous data?
    if first_year_to_update>earliest_year:
        check = input(f'Do you want to verify/update all the previous data (it may take a few minutes)? [Y/N] >>> ')
        check = 'y' if (check.lower() in ['y', 'yes']) else 'n'
        df=verify_previous_data(df,check)

        # Append new data
        df_output = pd.concat([df[df['Economically Significant Rules Published'].notnull()],
                               df_new], ignore_index=True)
    else:
        df_output=df_new

else:
    print('The dataset is up-to-date. No update is needed.')

    # Verify previous data?
    check = input(f'Do you want to verify/update all the previous data (it may take a few minutes)? [Y/N] >>> ')
    check = 'y' if (check.lower() in ['y', 'yes']) else 'n'
    df_output=verify_previous_data(df,check)

#%% Reorder columns
df_output=df_output[['Presidential Year (February 1 - January 31)',
                     'Presidential Party',
                     'Economically Significant Rules Published']]

#%% Export
df_output.to_csv(file_path, index=False)
print('The dataset has been updated and saved. End of execution.')