import pandas as pd
from datetime import datetime

#%% Import FR tracking data
df=pd.read_csv('data/fr_tracking/fr_tracking.csv',encoding="latin")
print(df.info())

#%% Check duplicates
df['publication_date']=df['publication_date'].astype('datetime64[ns]')
# print(f'Number of duplicates: {len(df[df.duplicated(keep=False)])}')
print('Number of duplicates:',len(df[df.duplicated(subset=['document_number'],keep=False)]))

print('Number of duplicated significant rules:',len(df[df.duplicated(subset=['document_number'],keep=False)][df['significant']==1]))
print('Number of duplicated econ significant rules:',len(df[df.duplicated(subset=['document_number'],keep=False)][(df['econ_significant']==1) | (df['3(f)(1) significant']==1)]))

#%% Print duplicates
print(df[df.duplicated(subset=['document_number'],keep=False)].sort_values(['document_number','publication_date'])[['publication_date','document_number','significant','3(f)(1) significant']])

#%% Save duplicates
if len(df[df.duplicated(subset=['document_number'],keep=False)])>0:
    df[df.duplicated(subset=['document_number'],keep=False)].sort_values(['document_number','publication_date']).to_csv('data/fr_tracking/fr_tracking_duplicates.csv',index=False)
else:
    pass

#%% Drop duplicates
# Federal holidays included in the original data
df_new=df[~((df['publication_date']==datetime(2021,5,31)) | (df['publication_date']==datetime(2021,11,11)))]
print('Duplicates removed:',len(df)-len(df_new))

# Other duplicates (keep last)
# Including removing 12/14/2023 2023-27495; 12/14/2023 2023-27523; 12/14/2023 2023-27617 (these were published 12/15/2023)
lenb4=len(df_new)
df_new=df_new.sort_values(['document_number','publication_date','significant','econ_significant','3(f)(1) significant','Major']).\
    drop_duplicates(subset=['document_number'],keep='last',ignore_index=True)
print('Duplicates removed:',lenb4-len(df_new))

print('Number of duplicates:',len(df_new[df_new.duplicated(subset=['document_number'],keep=False)]))

#%% Save revised dataframe
df_new['publication_date']=df_new['publication_date'].dt.date
df_new.sort_values(['publication_date','document_number'],inplace=True)
df_new.to_csv('data/fr_tracking/fr_tracking.csv',index=False)