print('NOTE: The current code can only update data for the Biden and following administrations.')

#%% Import packages
import pandas as pd
import os
import sys
from datetime import datetime
from datetime import date
from dateutil.relativedelta import relativedelta
import calendar

# Import customized functions
dir_path=os.path.dirname(os.path.realpath(__file__))
sys.path.insert(0, f'{dir_path}/../py_funcs')
import frcount

#%% Define administrations and their start & end years (currently supporting "Biden" and "Trump 47")
# If there is a new administration, add {president name: [start year, end year]} to the dictionary below.
admin_year = {'Biden': [2021, 2025],
              'Trump 47': [2025, 2029]}

#%% Specify the file path of the current dataset
file_path=f"{dir_path}/monthly_significant_rules_by_admin.csv"

#%% A function to update data by admin
def update_by_admin(file_path,admin):
    # Import the current dataset
    if os.path.exists(file_path):
        df = pd.read_csv(file_path)
        if admin in df['Admin'].tolist():
            # df=df_all[df_all['Admin']==admin]
            df['Date'] = pd.to_datetime(df['Year'].astype(str) + df['Month'].astype(str), format='%Y%b')
            update_start_date=datetime.date(df[(df['Admin']==admin) & (df['Significant'].notnull())]['Date'].iloc[-1]+relativedelta(months=1))
            df.drop(['Date'], axis=1,inplace=True)
        else:
            update_start_date = date(admin_year[admin][0], 2, 1)
    else:
        # Create a file
        df=pd.DataFrame(columns=['Admin','Year','Month','Months in Office',
                                 'Significant','Economically Significant','Other Significant'])
        update_start_date=date(admin_year[admin][0],2,1)

    #%% Define update end date
    if update_start_date.year >= admin_year[admin][1]:
        update_end_date = date(admin_year[admin][1], 1, 20)
    else:
        if date.today()>date(admin_year[admin][1], 1, 20):
            update_end_date = date(admin_year[admin][1], 1, 20)
        else:
            update_end_date=date.today().replace(day=1) - relativedelta(days=1)

    #%% Update data
    print(update_start_date,update_end_date)
    if update_start_date > update_end_date:
        print(f'The {admin} administration data is up-to-date.')
        pass
    else:
        # Update data
        print(f'Updating {admin} data from {update_start_date} to {update_end_date}...')
        df_update=frcount.count_fr_monthly(dir_path,update_start_date,update_end_date)
        df_update.rename(columns={'publication_year':'Year','publication_month':'Month',
                                  'sig_count':'Significant','es_count':'Economically Significant'},inplace=True)
        df_update['Other Significant']=df_update['Significant']-df_update['Economically Significant']

        df_update['Date']=pd.to_datetime(df_update['Year'].astype(str)+df_update['Month'].astype(str), format='%Y%m')
        df_update['Months in Office'] = (df_update['Date'].dt.year-date(admin_year[admin][0],2,1).year) * 12 + (df_update['Date'].dt.month-date(admin_year[admin][0],2,1).month) + 1
        df_update['Month']=df_update['Month'].apply(lambda x: calendar.month_abbr[x])
        df_update['Admin']=admin

        # Append data for this admin
        df=pd.concat([df,df_update.drop(['Date'],axis=1)],ignore_index=True)

        # # Append data to all data
        # df_all=pd.concat([df_all,df],ignore_index=True)
        # df_all.sort_values(['Year','Month'],inplace=True)

    #%% Export
    if len(df)>0:
        df.to_csv(file_path, index=False)

    return

#%% Run function to update data
for admin in admin_year.keys():
    update_by_admin(file_path,admin)
print('The dataset has been updated and saved. End of execution.')