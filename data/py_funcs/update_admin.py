import pandas as pd

from frcount import *
from reginfo import *
from party import *

# %% A function to update data for an administration in the wide data format
def update_admin(dir_path,df,admin,update_start_date,update_end_date,rule_type='es',data_type='cumulative'):

    # For administrations prior to Biden, pull data from reginfo.gov
    if admin_year[admin][0]<2021:
        df_update=count_reginfo_monthly(update_start_date, update_end_date, rule_type)

    # For administrations starting Biden, pull data from FR tracking
    else:
        # Count monthly rules in FR tracking
        df_update=count_fr_monthly(dir_path,update_start_date,update_end_date)

    # Append new data to the current dataset (cumulative or monthly)
    first_month_no_data = df[df[admin].isnull()]['Months in Office'].values[0]
    if data_type=='cumulative':
        cum_count=0 if first_month_no_data==0 else df[df[admin].notnull()][admin].iloc[-1]
        for x in df_update[f'{rule_type}_count']:
            cum_count = cum_count + x
            df.loc[df['Months in Office'] == first_month_no_data, admin] = cum_count
            first_month_no_data += 1
    elif data_type=='monthly':
        for x in df_update[f'{rule_type}_count']:
            df.loc[df['Months in Office'] == first_month_no_data, admin] = x
            first_month_no_data += 1

    return df

# %% Function to import the current dataset
def import_file(file_path):
    if os.path.exists(file_path):
        df = pd.read_csv(file_path)
    else:
        # Create a file
        df = pd.DataFrame(columns=['Month', 'Months in Office'])
        df['Months in Office'] = list(range(0, 97))
        list_of_months = [date(2024, i, 1).strftime('%b') for i in range(1, 13)]
        df['Month'] = np.tile(list_of_months, len(df) // len(list_of_months) + 1)[:len(df)]

    # Rename the first Trump administration if existing in the current dataset
    if 'Trump' in df.columns:
        df.rename(columns={'Trump': 'Trump 45'}, inplace=True)
    else:
        pass

    # Create a new column if an administration is not in the dataset
    new_admin = [x for x in admin_year.keys() if x not in df.columns]
    if len(new_admin) > 0:
        for x in new_admin:
            df[x] = None
    else:
        pass

    return df

#%% Function to update data for all administrations in the dataset
def main(dir_path,file_path,rule_type,data_type):
    # Report the admin coverage
    print(f"The current dataset covers the {', '.join(list(admin_year.keys()))} administrations.\n"
          f"If there is a new administration, revise the admin_year dictionary in py_funcs/party.py and re-run the code.")

    # Import dataset
    df=import_file(file_path)

    # Check if data for an administration are complete
    for admin in df.columns[2:]:
        if len(df[df[admin].isnull()]) == 0:
            print(f'The {admin} administration data is up-to-date.')
            pass
        else:
            first_month_no_data = df[df[admin].isnull()]['Months in Office'].values[0]
            update_start_date = date(admin_year[admin][0], 1, 1) + relativedelta(months=first_month_no_data)

            # If update start date is later than the last day of the admin or later than the last day of last month
            if (update_start_date > date(admin_year[admin][1], 1, 20)) or (
                    update_start_date > (date.today().replace(day=1) - relativedelta(days=1))):
                print(f'The {admin} administration data is up-to-date.')
                pass

            else:
                # For current administration
                if admin == list(admin_year.keys())[-1]:
                    # update start date
                    if first_month_no_data == 0: update_start_date = update_start_date.replace(day=21)
                    # update end date
                    update_end_date = date.today().replace(day=1) - relativedelta(days=1)

                # For previous administrations
                else:
                    # update start date
                    if first_month_no_data == 0: update_start_date = update_start_date.replace(day=21)
                    # update end date
                    update_end_date = date(admin_year[admin][1], 1, 20)

                # Update data
                print(f'Updating data for the {admin} administration from {update_start_date} to {update_end_date}...')
                df = update_admin(dir_path, df, admin, update_start_date, update_end_date, rule_type, data_type)
                print(f'The {admin} administration data has been updated.')

    return df