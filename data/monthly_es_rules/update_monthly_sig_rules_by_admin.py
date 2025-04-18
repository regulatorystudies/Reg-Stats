#------------------------------Code to Update Monthly Significant Rules by Administration------------------------------
#-----------------------------------------Author: Zhoudan Xie----------------------------------------------------------

#%% Import packages
import pandas as pd
import os
import sys
from datetime import datetime
from datetime import date
from dateutil.relativedelta import relativedelta
import calendar
import numpy as np

# Import customized functions
dir_path=os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, f'{dir_path}/../py_funcs')
from frcount import *
from reginfo import *
from party import *
from update_admin import *

# Report the admin coverage
print(f"The current dataset covers the {', '.join(list(admin_year.keys()))} administrations.\n"
      f"If there is a new administration, revise the admin_year dictionary in py_funcs/party.py and re-run the code.")

#%% Specify the file path of the current dataset
file_path=f"{dir_path}/monthly_significant_rules_by_admin.csv"

#%% Get input on whether to verify all previous data (if previous data exist)
check_input = input(
    f'Do you want to verify/update all the previous data (it may take a few minutes)? [Y/N] >>> ')
check_input = 'y' if (check_input.lower() in ['y', 'yes']) else 'n'

#%% Check and update data for all administrations
for admin in admin_year.keys():
    # Import the current dataset
    if os.path.exists(file_path):
        # Import existing file
        df = pd.read_csv(file_path)
        # Define update_start_date
        if admin in df['Admin'].tolist():
            df['Date'] = pd.to_datetime(df['Year'].astype(str) + df['Month'].astype(str), format='%Y%b')
            update_start_date=datetime.date(df[(df['Admin']==admin) & (df['Economically Significant'].notnull())]['Date'].iloc[-1]+relativedelta(months=1))

            # Update previous-data-check
            check=check_input

        else:
            update_start_date = date(admin_year[admin][0], 1, 21)
            df['Date']=pd.Series(dtype='datetime64[ns]')

            # Update previous-data-check
            check='n'

    else:
        # Create a file
        df=pd.DataFrame(columns=['Admin','Year','Month','Months in Office',
                                 'Significant','Economically Significant','Other Significant',
                                 "Date"])
        update_start_date=date(admin_year[admin][0],1,21)

        # Update previous-data-check
        check='n'

    #%% Revise update_start_date, if previous-data-check is selected
    update_start_date = date(admin_year[admin][0], 1, 21) if check=='y' else update_start_date

    #%% Define update end date
    if update_start_date.year >= admin_year[admin][1]:
        update_end_date = date(admin_year[admin][1], 1, 20)
    else:
        if date.today()>date(admin_year[admin][1], 1, 20):
            update_end_date = date(admin_year[admin][1], 1, 20)
        else:
            update_end_date=date.today().replace(day=1) - relativedelta(days=1)

    #%% Update data
    if update_start_date > update_end_date:
        print(f'The {admin} administration data are up-to-date.')
        pass
    else:
        print(f'Updating {admin} data from {update_start_date} to {update_end_date}...')
        # Update data for prior administrations
        if admin_year[admin][0]<2021:
            df_update_es = count_reginfo_monthly(update_start_date, update_end_date, rule_type='es')
            df_update_sig = count_reginfo_monthly(update_start_date, update_end_date, rule_type='sig')
            df_update=df_update_es.merge(df_update_sig,on=['publication_year','publication_month'],how='outer')
        # Update data for Biden and following administrations
        else:
            df_update=count_fr_monthly(dir_path,update_start_date,update_end_date)

        # Rename columns
        df_update.rename(columns={'publication_year':'Year','publication_month':'Month',
                                  'sig_count':'Significant','es_count':'Economically Significant'},inplace=True)

        # Remove "economically significant" before Feb 1981 (EO 12291 signed on Feb 17, 1981)
        df_update.loc[(df_update['Year']<1981) | ((df_update['Year']==1981) & (df_update['Month']<2)),'Economically Significant']=None
        # Remove "significant" before 1994 (EO 12866 signed on Sep 30, 1993, but reginfo.gov data show a clear cut in Jan 1994)
        df_update.loc[df_update['Year']<1994,'Significant']=None

        # Add other columns
        df_update['Other Significant']=df_update['Significant']-df_update['Economically Significant']
        df_update['Date']=pd.to_datetime(df_update['Year'].astype(str)+df_update['Month'].astype(str), format='%Y%m')
        df_update['Months in Office'] = (df_update['Date'].dt.year-date(admin_year[admin][0],2,1).year) * 12 + (df_update['Date'].dt.month-date(admin_year[admin][0],2,1).month) + 1
        df_update['Month']=df_update['Month'].apply(lambda x: calendar.month_abbr[x])
        df_update['Admin']=admin

        # Compare newly collected data with original data, if previous-data-check is selected
        if check == 'y':
            print('Comparing newly collected data with original data. Differences (if any) will be shown here.')

            # Store two comparable dataframes
            df_old_data_original=df[df['Admin']==admin].set_index('Months in Office')\
                        [['Significant','Economically Significant','Other Significant']].\
                        astype('int', errors='ignore')
            df_old_data_updated = df_update[df_update['Months in Office'].isin(df_old_data_original.index)].\
                        set_index('Months in Office')[['Significant','Economically Significant','Other Significant']].\
                        astype('int', errors='ignore')

            # Report differences
            compare_df(df_old_data_original,df_old_data_updated)

        else: pass

        # Append/replace updated data for this admin
        df=pd.concat([df[(df['Admin']!=admin) | (df['Date']<pd.to_datetime(update_start_date.replace(day=1)))],
                      df_update.drop(['Date'],axis=1)],
                     ignore_index=True)

        # Export
        if len(df)>0:
            df.drop(['Date'], axis=1).to_csv(file_path, index=False)
        else: pass
        print(f'The {admin} administration data have been verified/updated.')

print('The dataset has been updated and saved. End of execution.')