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

#----------------------------------------------Merge using FR citations-------------------------------------------------
#%% Check citations in FR tracking
print("Missing citations in FR data:",len(fr_tracking0[fr_tracking0['citation'].isnull()]))
print("Incorrect citations in FR data:",len(fr_tracking0[~fr_tracking0['citation'].str.contains('FR')]))

#%% Check citations in GAO tracking
gao_cra0['fed_reg_number']=gao_cra0['fed_reg_number'].replace('N/A',np.nan)

print("Missing citations in GAO data:",len(gao_cra0[gao_cra0['fed_reg_number'].isnull()]))
print("Incorrect citations in GAO data:",len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]))

# Look into incorrect citations
print(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]\
          [['fed_reg_number','identifier']])

# Fix incorrect citations
gao_cra0['fed_reg_number']=gao_cra0['fed_reg_number'].str.replace('F.R.','FR').str.replace('fr','FR').str.replace('F ','FR ')

print("Incorrect citations in GAO data:",len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]))
print(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]\
          [['fed_reg_number','identifier']])

#%% Check issue number of citation in GAO data
gao_cra0[['Issue', 'FR', 'Page']] = gao_cra0['fed_reg_number'].str.split(' ',n=2,expand=True)
gao_cra0['Issue']=pd.to_numeric(gao_cra0['Issue'],errors='coerce')
print(gao_cra0['Issue'].value_counts())

# Look into incorrect issue numbers
print("Incorrect FR Issue # in GAO data:",
      len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & ((gao_cra0['Issue'].isnull()) | (gao_cra0['Issue']>90) | (gao_cra0['Issue']<70))]))
print(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & ((gao_cra0['Issue'].isnull()) | (gao_cra0['Issue']>90) | (gao_cra0['Issue']<70))][['fed_reg_number','Issue','FR','Page']])

#%% Export GAO citations that need to be manually fixed
gao_citation_check=gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & \
                            ((~gao_cra0['fed_reg_number'].astype(str).str.contains('FR')) | (gao_cra0['Issue'].isnull()) | (gao_cra0['Issue']>90) | (gao_cra0['Issue']<70))].\
                            reset_index()
gao_citation_check[['index','url','fed_reg_number']].to_csv('data/major_rules/discrepancies/gao_citation_check.csv',index=False)

#%% Import manually fixed citations
gao_citation_check=pd.read_csv('data/major_rules/discrepancies/gao_citation_checked.csv')
print(gao_citation_check.info())

# Merge it back to GAO data
gao_cra0.loc[gao_cra0.index.isin(gao_citation_check['index']), 'fed_reg_number'] = gao_citation_check['fed_reg_number'].values

# Check FR citations again
print("Incorrect citations in GAO data:",len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & (~gao_cra0['fed_reg_number'].astype(str).str.contains('FR'))]))
gao_cra0[['Issue', 'FR', 'Page']] = gao_cra0['fed_reg_number'].str.split(' ',n=2,expand=True)
gao_cra0['Issue']=pd.to_numeric(gao_cra0['Issue'],errors='coerce')
print("Incorrect FR Issue # in GAO data:",
      len(gao_cra0[(gao_cra0['fed_reg_number'].notnull()) & ((gao_cra0['Issue'].isnull()) | (gao_cra0['Issue']>90) | (gao_cra0['Issue']<70))]))

# All incorrect citations have been fixed; now the only problem is the missing citations in GAO data
print("Missing citations in GAO data:",len(gao_cra0[gao_cra0['fed_reg_number'].isnull()]))

#%% Merge FR and GAO data using FR citations
fr_tracking0["in_fr_df"] = 1
gao_cra0["in_gao_df"] = 1
gao_cra0.rename(columns={'fed_reg_number':'citation','url':'gao_url'},inplace=True)

df_merge=fr_tracking0.merge(gao_cra0[['citation','gao_url','in_gao_df']],on='citation',how='outer')

# Check results
print(df_merge.info())

print("All rules in FR data:",len(fr_tracking0))
print("All rules in GAO data:",len(gao_cra0))

print("Rules in both FR and GAO:",len(df_merge[(df_merge['in_fr_df']==1) & (df_merge['in_gao_df']==1)]))
print("Rules in FR but not in GAO:",len(df_merge[(df_merge['in_fr_df']==1) & (df_merge['in_gao_df']!=1)]))
print("Rules in GAO but not in FR:",len(df_merge[(df_merge['in_fr_df']!=1) & (df_merge['in_gao_df']==1)]))




#-----------------------------------------Merge using RIN & Publication Date--------------------------------------------

# %%
# fr_tracking data manipulation

# change date columns to YYYY-MM-DD format
fr_date_cols = ["publication_date", "effective_on"]
fr_tracking0[fr_date_cols] = fr_tracking0[fr_date_cols].apply(pd.to_datetime, errors="coerce", format="mixed")

# change id columns to string
fr_id_cols = ["citation", "regulation_id_number"]
fr_tracking0[fr_id_cols] = fr_tracking0[fr_id_cols].astype("string")

# add df id column
fr_tracking0["in_fr_df"] = 1

print(fr_tracking0.info())

# %%
# gao_cra data manipulation

# change date columns to YYYY-MM-DD format
gao_date_cols = ["date_published_in_federal_register", "effective", "received"]
gao_cra0[gao_date_cols] = gao_cra0[gao_date_cols].apply(pd.to_datetime, errors="coerce")
gao_cra0[gao_date_cols] = gao_cra0[gao_date_cols].apply(lambda x: x.dt.tz_localize(None).dt.normalize())

# change id columns to string
gao_id_cols = ["fed_reg_number", "identifier"]
gao_cra0[gao_id_cols] = gao_cra0[gao_id_cols].astype("string")

# add df id column
gao_cra0["in_gao_df"] = 1

print(gao_cra0.info())

#%% Check publication dates
print("Missing dates in FR data:",len(fr_tracking0[fr_tracking0['publication_date'].isnull()]))
print("Missing dates in GAO data:",len(gao_cra0[gao_cra0['date_published_in_federal_register'].isnull()]))

# Check GAO missing dates
# All but one rules missing publication dates are also missing FR citations; have to drop these rows?

# Date ranges
print("Range in FR data:",min(fr_tracking0['publication_date']),max(fr_tracking0['publication_date']))
print("Range in GAO data:",min(gao_cra0['date_published_in_federal_register']),\
                            max(gao_cra0['date_published_in_federal_register']))

# Refine to the same date range
fr_tracking0=fr_tracking0[(fr_tracking0['publication_date']>datetime.datetime(2021,1,20)) &
                          (fr_tracking0['publication_date']<datetime.datetime(2025,1,21))]
gao_cra0=gao_cra0[(gao_cra0['date_published_in_federal_register']>datetime.datetime(2021,1,20)) &
                  (gao_cra0['date_published_in_federal_register']<datetime.datetime(2025,1,21))]

# Date ranges
print("Range in FR data:",min(fr_tracking0['publication_date']),max(fr_tracking0['publication_date']))
print("Range in GAO data:",min(gao_cra0['date_published_in_federal_register']),\
                            max(gao_cra0['date_published_in_federal_register']))

#%%
# print(fr_tracking0.info())
# print(gao_cra0.info())

# %% Check RINs
# FR Tracking

# Rules with no RINs or dates
print("All rules in FR data:",len(fr_tracking0))
print("Rules with no RINs:",len(fr_tracking0[fr_tracking0['regulation_id_number'].isnull()]))
print("Rules with no publication dates:",len(fr_tracking0[fr_tracking0['publication_date'].isnull()]))

# drop rows with "." or no values in the regulation_id_number column
fr_tracking_all_id_date = fr_tracking0.replace(".", np.nan).dropna(subset=["regulation_id_number"])

# drop rows containing "Docket No", "Doc. No.", or "FR"
#fr_tracking_all_id_date = fr_tracking_all_id_date[~fr_tracking_all_id_date["regulation_id_number"].str.contains(r"Docket No|Doc\. No\.|FR", na=False, regex=True)]

# Check if RIN & publication date could be a unique identifier (duplicates should be 0)
print("Duplicated RINs & publication dates:",len(fr_tracking_all_id_date[fr_tracking_all_id_date.duplicated(subset=['regulation_id_number','publication_date'],keep=False)]))

# %%
# gao_cra data cleaning

# Rules with no RINs or dates
print("All rules in GAO data:",len(gao_cra0))
print("Rules with no RINs:",len(gao_cra0[gao_cra0['identifier'].isnull()]))
print("Rules with no publication dates:",len(gao_cra0[gao_cra0['date_published_in_federal_register'].isnull()]))

# drop rows with "N/A" or no values in the identifier and date_published_in_federal_register columns
gao_cra_all_id_date = gao_cra0.replace("N/A", np.nan).dropna(subset=["identifier", "date_published_in_federal_register"])

# replace all "?" values in the identifier column with "-"
gao_cra_all_id_date["identifier"] = gao_cra_all_id_date["identifier"].str.replace("?", "-", regex=False)

# replace all "ZRIN ", "Z-RIN ", "RIN ", "OMB ", "AND " in identifier column with ""
gao_cra_all_id_date["identifier"] = gao_cra_all_id_date["identifier"].str.replace(r"\b(ZRIN |Z-RIN |RIN |OMB |AND )", "", regex=True)

# Check if RIN & publication date could be a unique identifier (duplicates should be 0)
print("Duplicated RINs & publication dates:",len(gao_cra_all_id_date[gao_cra_all_id_date.duplicated(subset=['identifier','date_published_in_federal_register'],keep=False)]))


#%% Convert columns for merging (if RIN & publication date can be used as a unique identifier)
# convert regulation_id_number column to a list of lists (so groups of RINs can be searched for individual RINs)
fr_tracking_all_id_date["regulation_id_number"] = fr_tracking_all_id_date["regulation_id_number"].str.split(r"\s*;\s*")

# convert identifier column to a list of lists (converting "&" and "," to spaces)
gao_cra_all_id_date["identifier"] = gao_cra_all_id_date["identifier"].apply(lambda x: re.split(r"\s*[,&]\s*", x))

# rename columns that will be used for anti-joining to match the corresponding FR tracking column names
gao_cra_all_id_date.rename(columns={
    "date_published_in_federal_register": "publication_date",
    "identifier": "regulation_id_number",
}, inplace=True)

#gao_cra_all_id_date.to_csv("gao_cra_all_id_date.csv", index=False)


# %%

# make a long df with a row for each unique combo of publication date and RIN
# ensure regulation_id_number are lists
fr_tracking_all_id_date["regulation_id_number"] = fr_tracking_all_id_date["regulation_id_number"].apply(lambda x: x if isinstance(x, list) else [x])
gao_cra_all_id_date["regulation_id_number"] = gao_cra_all_id_date["regulation_id_number"].apply(lambda x: x if isinstance(x, list) else [x])

# explode regulation_id_number into separate rows (essentially making a long df with a row for each unique combination of publication date and RIN)
fr_exploded = fr_tracking_all_id_date.explode("regulation_id_number")
gao_exploded = gao_cra_all_id_date.explode("regulation_id_number")

# merge on both "publication_date" and "regulation_id_number"
merged_df = fr_exploded.merge(
    gao_exploded,
    on=["publication_date", "regulation_id_number"],
    how="left",  # leeps all fr_exploded rows, adds matching gao_exploded rows
    suffixes=("_fr", "_gao")
)

# re-group regulation_id_number back into lists while keeping all other columns
grouping_columns = [col for col in merged_df.columns if col not in ["regulation_id_number"]]
merged_df = merged_df.groupby(grouping_columns, dropna=False)["regulation_id_number"].apply(list).reset_index()

# convert the in_gao_df column to int and add 0s in the place of NaNs
# merged_df["in_gao_df"] = merged_df["in_gao_df"].fillna(0).astype(int)

# export
#merged_df.to_csv("merged_df.csv", index=False)

# %%
# clean and filter merged df
# create new df with only the rows where in_gao_df = 0
filtered_df1 = merged_df[merged_df["in_gao_df"] == 0]

# only keep helpful columns
filtered_df1 = filtered_df1[["publication_date", "effective_on", "department", "agency_fr", "independent_reg_agency", "title_fr", "abstract", "action", "citation", "document_number", "docket_number", "html_url", "in_fr_df", "in_gao_df", "regulation_id_number"]]

# filter out rows based on keywords in action column
keywords_to_remove = ["delay", "request", "correction", "correcting", "continuation", "withdrawal", "rescission", "notification", "amendment", "amendments", "determination", "determinations"]
filtered_df2 = filtered_df1[~filtered_df1["action"].str.contains("|".join(keywords_to_remove), na=False, case=False)]

# export
# filtered_df2.to_csv("filtered_df2.csv", index=False)

#%% Check results
print(merged_df.info())
print("Rules in both FR and GAO:",len(merged_df[(merged_df['in_fr_df']==1) & (merged_df['in_gao_df']==1)]))
print("Rules in FR but not in GAO:",len(merged_df[(merged_df['in_fr_df']==1) & (merged_df['in_gao_df']!=1)]))
print("Rules in GAO but not in FR:",len(merged_df[(merged_df['in_fr_df']!=1) & (merged_df['in_gao_df']==1)]))