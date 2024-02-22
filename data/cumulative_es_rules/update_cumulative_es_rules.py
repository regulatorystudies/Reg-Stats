import pandas as pd
import os
import numpy as np
from datetime import date
from dateutil.relativedelta import relativedelta

#%% Define administrations and their start years
admin_year={'Reagan':1981,
            'Bush 41':1989,
            'Clinton':1993,
            'Bush 43':2001,
            'Obama':2009,
            'Trump':2017,
            'Biden':2021}

#%% Check the current data
# dir_path=os.path.dirname(os.path.realpath(__file__))
# file_path=f'{dir_path}/cumulative_econ_significant_rules_by_presidential_month.csv'
file_path='data/cumulative_es_rules/cumulative_econ_significant_rules_by_presidential_month.csv'

if os.path.exists(file_path):
    df=pd.read_csv(file_path)
    print('Current dataset:')
    print(df.info())

#%% First month to update
# The first null value
admin=df.columns[-1]
months_in_office=df[df[admin].isnull()]['Months in Office'].values[0]

# First month to update
admin_first_month = date(admin_year[admin], 1, 1)
first_month_to_update = admin_first_month + relativedelta(months=months_in_office)
print(first_month_to_update)

#%% Last month to update
today = date.today()
last_month_to_update=today.replace(day=1) - relativedelta(days=1)
print(last_month_to_update)

#%% FR tracking data
df_fr=pd.read_csv('data/fr_tracking/fr_tracking.csv',encoding = "ISO-8859-1")
print(df_fr.info())

df_fr['publication_date']=pd.to_datetime(df_fr['publication_date']).dt.date
df_fr['publication_year']=pd.to_datetime(df_fr['publication_date']).dt.year
df_fr['publication_month']=pd.to_datetime(df_fr['publication_date']).dt.month
df_fr['econ_significant']=pd.to_numeric(df_fr['econ_significant'], errors='coerce')
df_fr['3(f)(1) significant']=pd.to_numeric(df_fr['3(f)(1) significant'], errors='coerce')

df_fr_update=df_fr[(df_fr['publication_date']>=first_month_to_update) & (df_fr['publication_date']<=last_month_to_update)]
df_fr_update=df_fr_update[['publication_year','publication_month','econ_significant','3(f)(1) significant']].\
                groupby(['publication_year','publication_month']).sum()
print(df_fr_update.info())

#%% Append new data to the current dataset
for x in df_fr_update['3(f)(1) significant'].tolist():
    new_cum=df[df[admin].notnull()][admin].iloc[-1]+x
    df.loc[df['Months in Office']==months_in_office,admin]=new_cum
    months_in_office += 1
