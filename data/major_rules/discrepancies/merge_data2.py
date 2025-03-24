# %%
# import libraries
import pandas as pd
import numpy as np  
# from IPython.display import display
import json
import re
import datetime

# %%
# load fr_tracking csv
csv1 = 'data/major_rules/discrepancies/fr_tracking_new.csv'

fr_tracking0 = pd.read_csv(csv1, encoding="ISO-8859-1", sep=None, engine="python", header=0)
print(fr_tracking0.head(5))

# %%
# load gao_cra json
json_file = "data/major_rules/discrepancies/gao_cra.json"

with open(json_file, "r", encoding="ISO-8859-1") as f:
    data = json.load(f) 
    
gao_cra0 = pd.DataFrame(data["results"])

print(gao_cra0.head(5))
# gao_cra0.to_csv("gao_cra.csv", index=False)

# %%
# fr_tracking df info
print("fr_tracking0 info:",fr_tracking0.info())

# gao_cra df info
print("gao_cra0 info:",gao_cra0.info())

#%% Refine the datasets to the same time period if publication dates are available
# change date columns to YYYY-MM-DD format
fr_date_cols = ["publication_date", "effective_on"]
fr_tracking0[fr_date_cols] = fr_tracking0[fr_date_cols].apply(pd.to_datetime, errors="coerce", format="mixed")

# change date columns to YYYY-MM-DD format
gao_date_cols = ["date_published_in_federal_register", "effective", "received"]
gao_cra0[gao_date_cols] = gao_cra0[gao_date_cols].apply(pd.to_datetime, errors="coerce")
gao_cra0[gao_date_cols] = gao_cra0[gao_date_cols].apply(lambda x: x.dt.tz_localize(None).dt.normalize())

# Check publication dates
print("Missing dates in FR data:",len(fr_tracking0[fr_tracking0['publication_date'].isnull()]))
print("Missing dates in GAO data:",len(gao_cra0[gao_cra0['date_published_in_federal_register'].isnull()]))

# Check GAO missing dates
# All but one rules missing publication dates are also missing FR citations; have to drop these rows?

# Date ranges
print("Range in FR data:",min(fr_tracking0['publication_date']),max(fr_tracking0['publication_date']))
print("Range in GAO data:",min(gao_cra0['date_published_in_federal_register']),\
                            max(gao_cra0['date_published_in_federal_register']))

# Refine to the same date range (if date is available)
fr_tracking0=fr_tracking0[(fr_tracking0['publication_date'].isnull()) |
                          ((fr_tracking0['publication_date']>datetime.datetime(2021,1,20)) &
                          (fr_tracking0['publication_date']<datetime.datetime(2025,1,21)))]
gao_cra0=gao_cra0[(gao_cra0['date_published_in_federal_register'].isnull()) |
                  ((gao_cra0['date_published_in_federal_register']>datetime.datetime(2021,1,20)) &
                  (gao_cra0['date_published_in_federal_register']<datetime.datetime(2025,1,21)))]

# Check dates again
print("Missing dates in FR data:",len(fr_tracking0[fr_tracking0['publication_date'].isnull()]))
print("Missing dates in GAO data:",len(gao_cra0[gao_cra0['date_published_in_federal_register'].isnull()]))
print("Range in FR data:",min(fr_tracking0['publication_date']),max(fr_tracking0['publication_date']))
print("Range in GAO data:",min(gao_cra0['date_published_in_federal_register']),\
                            max(gao_cra0['date_published_in_federal_register']))

#----------------------------------------------Merge using FR citations-------------------------------------------------
#%% Check citations in FR tracking
print("Missing citations in FR data:",len(fr_tracking0[fr_tracking0['citation'].isnull()]))
print("Incorrect citations in FR data:",len(fr_tracking0[~fr_tracking0['citation'].str.contains('FR')]))

#%% Check citations in GAO tracking
gao_cra0['fed_reg_number']=gao_cra0['fed_reg_number'].replace('N/A',np.nan)

print("Missing citations in GAO data:",len(gao_cra0[gao_cra0['fed_reg_number'].isnull()]))
print("Incorrect citations in GAO data:",len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]))

# Look into incorrect citations
# print(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]\
#           [['fed_reg_number','identifier']])

# Fix incorrect citations
gao_cra0['fed_reg_number']=gao_cra0['fed_reg_number'].str.replace('F.R.','FR').str.replace('fr','FR').str.replace('F ','FR ')

print("Incorrect citations in GAO data:",len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]))
# print(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]\
#           [['fed_reg_number','identifier']])

#%% Check issue number of citation in GAO data
gao_cra0[['Issue', 'FR', 'Page']] = gao_cra0['fed_reg_number'].str.split(' ',n=2,expand=True)
gao_cra0['Issue']=pd.to_numeric(gao_cra0['Issue'],errors='coerce')
# print(gao_cra0['Issue'].value_counts())

# Look into incorrect issue numbers
print("Incorrect FR Issue # in GAO data:",
      len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) &
                   ((gao_cra0['Issue'].isnull()) | (gao_cra0['Issue']>90) | (gao_cra0['Issue']<70) |
                    (gao_cra0['FR']!='FR') | (~gao_cra0['Page'].astype(str).str.isnumeric()))]))
# print(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & ((gao_cra0['Issue'].isnull()) | (gao_cra0['Issue']>90) | (gao_cra0['Issue']<70))][['fed_reg_number','Issue','FR','Page']])

#%% Export GAO citations that need to be manually fixed
gao_citation_check=gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & \
                            ((~gao_cra0['fed_reg_number'].astype(str).str.contains('FR')) |
                             (gao_cra0['Issue'].isnull()) | (gao_cra0['Issue']>90) | (gao_cra0['Issue']<70) |
                             (gao_cra0['FR']!='FR') | (~gao_cra0['Page'].astype(str).str.isnumeric()))].\
                            reset_index()
print('# of citations for mannual checking:',len(gao_citation_check))
gao_citation_check[['index','url','fed_reg_number']].to_csv('data/major_rules/discrepancies/gao_citation_check.csv',index=False)

#%% Import manually fixed citations
gao_citation_check=pd.read_csv('data/major_rules/discrepancies/gao_citation_checked.csv')
print(gao_citation_check.info())

# Merge it back to GAO data
gao_cra0.loc[gao_cra0.index.isin(gao_citation_check['index']), 'fed_reg_number'] = gao_citation_check['fed_reg_number'].values

#%% Check FR citations again
print("Incorrect citations in GAO data:",len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]))
gao_cra0[['Issue', 'FR', 'Page']] = gao_cra0['fed_reg_number'].str.split(' ',n=2,expand=True)
gao_cra0['Issue']=pd.to_numeric(gao_cra0['Issue'],errors='coerce')
print("Incorrect FR Issue # in GAO data:",
      len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) &
                   ((gao_cra0['Issue'].isnull()) | (gao_cra0['Issue']>90) |
                    (gao_cra0['Issue']<70) | (gao_cra0['FR']!='FR'))]))

#%% Check inconsistency between publication year
year_issue={2021:86,
            2022:87,
            2023:88,
            2024:89,
            2025:90,
            }

gao_cra0['publication_year']=gao_cra0['date_published_in_federal_register'].dt.year

gao_cra0['Issue2'] = gao_cra0['publication_year'].map(year_issue)
print('# of unmatched FR year vs issue:',len(gao_cra0[(gao_cra0['Issue'].notnull()) & (gao_cra0['Issue']!=gao_cra0['Issue2'])]))
# print(gao_cra0[(gao_cra0['Issue'].notnull()) & (gao_cra0['Issue']!=gao_cra0['Issue2'])]
#       [['date_published_in_federal_register','received','fed_reg_number','Issue2']])

# Correct Issue numbers based on pub years
gao_cra0.loc[gao_cra0['Issue'].notnull(),'Issue']=gao_cra0['Issue2']

# Re-generate fed_reg_number
gao_cra0['fed_reg_number']=gao_cra0['Issue'].astype('Int64').astype(str)+' '+gao_cra0['FR']+' '+gao_cra0['Page']

#%% All incorrect citations should have been fixed; now the only problem is the missing citations in GAO data
print("Missing citations in GAO data:",len(gao_cra0[gao_cra0['fed_reg_number'].isnull()]))

#%% Merge FR and GAO data using FR citations
fr_tracking0["in_fr_df"] = 1
gao_cra0["in_gao_df"] = 1

# Split GAO data with/without citations
gao_cra_citation=gao_cra0[gao_cra0['fed_reg_number'].notnull()]
gao_cra_nocitation=gao_cra0[gao_cra0['fed_reg_number'].isnull()]

# Merge
gao_cra_citation.rename(columns={'fed_reg_number':'citation','url':'gao_url'},inplace=True)

df_merge=fr_tracking0.merge(gao_cra_citation[['citation','gao_url','in_gao_df']],on='citation',how='outer')

# Check results
print(df_merge.info())

print("All rules in FR data:",len(fr_tracking0))
print("All rules in GAO data:",len(gao_cra0))
print("Rules in GAO data with citations:",len(gao_cra_citation))

print("Rules in both FR and GAO:",len(df_merge[(df_merge['in_fr_df']==1) & (df_merge['in_gao_df']==1)]))
print("Rules in FR but not in GAO:",len(df_merge[(df_merge['in_fr_df']==1) & (df_merge['in_gao_df']!=1)]))
print("Rules in GAO but not in FR:",len(df_merge[(df_merge['in_fr_df']!=1) & (df_merge['in_gao_df']==1)]))

#-----------------------------------------Merge using RIN & Publication Date--------------------------------------------

#%% For those without FR citations in GAO data, try to merge using RIN + publication date

# %% Check RINs in GAO data with no citations
# Rules with no RINs or dates
print("Rules without citations in GAO data:",len(gao_cra_nocitation))
print("Rules with no RINs:",len(gao_cra_nocitation[gao_cra_nocitation['identifier'].isnull()]))
print("Rules with no publication dates:",len(gao_cra_nocitation[gao_cra_nocitation['date_published_in_federal_register'].isnull()]))

# # drop rows with "N/A" or no values in the identifier and date_published_in_federal_register columns
# gao_cra_all_id_date = gao_cra0.replace("N/A", np.nan).dropna(subset=["identifier", "date_published_in_federal_register"])
#
# replace all "?" values in the identifier column with "-"
gao_cra_nocitation["identifier"] = gao_cra_nocitation["identifier"].str.replace("?", "-", regex=False)

# replace all "ZRIN ", "Z-RIN ", "RIN ", "OMB ", "AND " in identifier column with ""
gao_cra_nocitation["identifier"] = gao_cra_nocitation["identifier"].str.replace(r"\b(ZRIN |Z-RIN |RIN |OMB |AND )", "", regex=True)

#%% Refine GAO data to those with both RIN and pub date (i.e., those that can be merged)
gao_cra_nocitation_rin=gao_cra_nocitation[(gao_cra_nocitation['identifier'].notnull()) & (gao_cra_nocitation['date_published_in_federal_register'].notnull())]

# Check if RIN & publication date could be a unique identifier (duplicates should be 0)
print("Duplicated RINs & publication dates:",len(gao_cra_nocitation_rin[gao_cra_nocitation_rin.duplicated(subset=['identifier','date_published_in_federal_register'],keep=False)]))

#%% rename columns that will be used for anti-joining to match the corresponding FR tracking column names
gao_cra_nocitation_rin.rename(columns={
    "date_published_in_federal_register": "publication_date",
    "identifier": "regulation_id_number",
    'url':'gao_url',
}, inplace=True)

# %% merge on both "publication_date" and "regulation_id_number"
print(len(df_merge))
df_merge = df_merge.merge(
    gao_cra_nocitation_rin[['publication_date','regulation_id_number','gao_url','in_gao_df']],
    on=["publication_date", "regulation_id_number"],
    how="outer",
    suffixes=("", "2")
)
print(len(df_merge))

#%% Update columns
df_merge.loc[(df_merge['in_gao_df'].isnull()) & (df_merge['in_gao_df2'].notnull()),'in_gao_df']=df_merge['in_gao_df2']
df_merge.loc[(df_merge['gao_url'].isnull()) & (df_merge['gao_url2'].notnull()),'gao_url']=df_merge['gao_url2']
df_merge.drop(['in_gao_df2','gao_url2'],axis=1,inplace=True)

#%% Examine results
print("Rules in both FR and GAO:",len(df_merge[(df_merge['in_fr_df']==1) & (df_merge['in_gao_df']==1)]))
print("Rules in FR but not in GAO:",len(df_merge[(df_merge['in_fr_df']==1) & (df_merge['in_gao_df']!=1)]))
print("Rules in GAO but not in FR:",len(df_merge[(df_merge['in_fr_df']!=1) & (df_merge['in_gao_df']==1)]))

#%% Examine rules in GAO but not in FR
# Will need to manually check why these rules are in GAO data but not in FR data; maybe errors in GAO data
df_merge[(df_merge['in_fr_df']!=1) & (df_merge['in_gao_df']==1)][['citation','gao_url']].to_csv('data/major_rules/discrepancies/gao_rules_not_in_fr.csv',index=False)

#%% Examine rules in FR but not in GAO
df_fr_not_in_gao=df_merge[(df_merge['in_fr_df']==1) & (df_merge['in_gao_df']!=1)].reset_index(drop=True)
df_fr_not_in_gao['in_gao_df']=df_fr_not_in_gao['in_gao_df'].fillna(0)
print(len(df_fr_not_in_gao))

# Check if they are mostly recent rules
df_fr_not_in_gao['publication_year']=df_fr_not_in_gao['publication_date'].dt.year
print(df_fr_not_in_gao['publication_year'].value_counts(sort=False))

#%% Merge with significance data
fr_sig=pd.read_csv('data/fr_tracking/fr_tracking.csv', encoding="ISO-8859-1")
fr_sig=fr_sig[fr_sig['publication_date'].notnull()]
print(fr_sig.info())

#%% Select columns
sig_cols=['significant','econ_significant','3(f)(1) significant','Major']
fr_sig=fr_sig[['document_number']+sig_cols]

# Clean data
fr_sig['document_number']=fr_sig['document_number'].str.strip()

# print("Duplicated document numbers:",
#       len(fr_sig[fr_sig.duplicated(subset=['document_number'],keep=False)]))
# print(fr_sig[fr_sig.duplicated(subset=['document_number'],keep=False)])

#%% Merge on doc no
df_fr_not_in_gao=df_fr_not_in_gao.drop(sig_cols,axis=1).merge(fr_sig,on=['document_number'], how="left", validate="1:1")
print('# of missing data:',len(df_fr_not_in_gao[df_fr_not_in_gao['significant'].isnull()]))

print('# of significant rules:',len(df_fr_not_in_gao[df_fr_not_in_gao['significant']=='1']))
print('# of econ significant rules:',len(df_fr_not_in_gao[df_fr_not_in_gao['econ_significant']=='1']))
print('# of 3f1 significant rules:',len(df_fr_not_in_gao[df_fr_not_in_gao['3(f)(1) significant']=='1']))
print('# of major rules:',len(df_fr_not_in_gao[df_fr_not_in_gao['Major']=='1']))

#%% Export
df_fr_not_in_gao.drop(['Notes','gao_url','publication_year'],axis=1).\
    to_csv('data/major_rules/discrepancies/fr_rules_not_in_gao.csv',index=False)
