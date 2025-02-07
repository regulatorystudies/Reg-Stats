#%% Import packages
import pandas as pd
import os
import sys
from datetime import date
from dateutil.relativedelta import relativedelta

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
    update_end_date = check_partial_month(df_fr, update_end_date)

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

        print(start_date.strftime("%m/%d/%Y"), end_date.strftime("%m/%d/%Y"))

        # Get data for the month
        result=get_reginfo_data(start_date, end_date, rule_type)
        # Add a row to the dataframe
        df_update.loc[len(df_update)] = [start_date.year, start_date.month, result]

        # Update month for iteration
        start_date=(start_date + relativedelta(months=1)).replace(day=1)

    return df_update

# %% A function to update data for an administration in the wide data format
def update_admin(dir_path,df,admin,update_start_date,update_end_date,rule_type='es',type='cumulative'):

    # For administrations prior to Biden, pull data from reginfo.gov
    if admin in ['Reagan','Bush 41','Clinton','Bush 43','Obama','Trump 45']:
        df_update=count_reginfo_monthly(update_start_date, update_end_date, rule_type='es')

    # For administrations starting Biden, pull data from FR tracking
    else:
        # Count monthly rules in FR tracking
        df_update=count_fr_monthly(dir_path,update_start_date,update_end_date)

    # Append new data to the current dataset (cumulative or monthly)
    first_month_no_data = df[df[admin].isnull()]['Months in Office'].values[0]
    if type=='cumulative':
        cum_count=0 if first_month_no_data==0 else df[df[admin].notnull()][admin].iloc[-1]
        for x in df_update[f'{rule_type}_count']:
            cum_count = cum_count + x
            df.loc[df['Months in Office'] == first_month_no_data, admin] = cum_count
            first_month_no_data += 1
    elif type=='monthly':
        for x in df_update[f'{rule_type}_count']:
            df.loc[df['Months in Office'] == first_month_no_data, admin] = x
            first_month_no_data += 1

    return df

#%% The main function to update the cumulative or monthly ES rules by presidential month datasets
def main(dir_path,file_path,rule_type='es',type='cumulative'):
    # Define administrations and their start & end years
    # If there is a new administration, add {president name: [start year, end year]} to the dictionary below.
    admin_year = {'Reagan': [1981, 1989],
                  'Bush 41': [1989, 1993],
                  'Clinton': [1993, 2001],
                  'Bush 43': [2001, 2009],
                  'Obama': [2009, 2017],
                  'Trump 45': [2017, 2021],
                  'Biden': [2021, 2025],
                  'Trump 47': [2025, 2029]}
    print(f"The current dataset covers the {', '.join(list(admin_year.keys()))} administrations.\n"
          f"If there is a new administration, revise the admin_year dictionary in frcount.main and re-run the code.")

    # Import the current dataset
    if os.path.exists(file_path):
        df = pd.read_csv(file_path)
    else:
        print('Error: no existing dataset.')
        sys.exit(0)

    # Rename the first Trump administration if existing in the current dataset
    if 'Trump' in df.columns:
        df.rename(columns={'Trump':'Trump 45'},inplace=True)
    else:
        pass

    # %% Create a new column if there is a new administration
    new_admin = [x for x in admin_year.keys() if x not in df.columns]
    if len(new_admin) > 0:
        for x in new_admin:
            df[x] = None
    else:
        pass

    # %% Check previous administrations (starting from Biden)
    for admin in df.columns[8:-1]:
        first_month_no_data = df[df[admin].isnull()]['Months in Office'].values[0]
        update_start_date = date(admin_year[admin][0], 1, 1) + relativedelta(months=first_month_no_data)

        if (update_start_date.year == admin_year[admin][1]) and (update_start_date.month == 2):
            print(f'The {admin} administration data is up-to-date.')
            pass

        else:
            # update start date
            if first_month_no_data == 0: update_start_date = update_start_date.replace(day=21)
            # update end date
            update_end_date = date(admin_year[admin][1], 1, 20)

            # update data
            print(f'Updating data from {update_start_date} to {update_end_date}...')
            df = update_admin(dir_path, df, admin, update_start_date, update_end_date, rule_type, type)
            print(f'The {admin} administration data has been updated.')

    # %% Check current administration (starting from Biden)
    admin = df.columns[-1]
    first_month_no_data = df[df[admin].isnull()]['Months in Office'].values[0]

    # update start date
    update_start_date = date(admin_year[admin][0], 1, 1) + relativedelta(months=first_month_no_data)
    if first_month_no_data == 0: update_start_date = update_start_date.replace(day=21)
    # update end date
    update_end_date = date.today().replace(day=1) - relativedelta(days=1)
    if len(admin_year[admin]) > 1:
        if (update_end_date.year == admin_year[admin][1]) and (update_end_date.month == 1):
            update_end_date = update_end_date.replace(day=20)

    # update data
    if update_start_date > update_end_date:
        print(f'The {admin} administration data is up-to-date.')
        pass
    else:
        print(f'Updating data from {update_start_date} to {update_end_date}...')
        df = update_admin(dir_path, df, admin, update_start_date, update_end_date, rule_type, type)
        print(f'The {admin} administration data has been updated.')

    return df