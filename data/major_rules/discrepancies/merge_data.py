# %%
# import libraries
import pandas as pd
import numpy as np  
import json
import re

# %%
# load fr_tracking csv
csv1 = 'data/major_rules/discrepancies/fr_tracking.csv'

fr_tracking0 = pd.read_csv(csv1, encoding="ISO-8859-1", sep=None, engine="python", header=0)
print(fr_tracking0.head(5))

# %%
# load gao_cra json
json_file = "data/major_rules/discrepancies/gao_cra.json"

with open(json_file, "r", encoding="ISO-8859-1") as f:
    data = json.load(f) 
    
gao_cra0 = pd.DataFrame(data["results"])

print(gao_cra0.head(5))
gao_cra0.to_csv("gao_cra.csv", index=False)

# %%
# fr_tracking df info
print("fr_tracking0 info:",fr_tracking0.info())

# %%
# gao_cra df info
print("gao_cra0 info:",gao_cra0.info())

# %%
# fr_tracking data manipulation

# change date columns to YYYY-MM-DD format
fr_date_cols = ["publication_date", "effective_on"]
fr_tracking0[fr_date_cols] = fr_tracking0[fr_date_cols].apply(pd.to_datetime, errors="coerce", format="mixed")

# change id columns to string
fr_id_cols = ["citation", "regulation_id_number"]
fr_tracking0[fr_id_cols] = fr_tracking0[fr_id_cols].astype("string")

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

print(gao_cra0.info())

# %%
# fr_tracking data cleaning

# drop rows with "N/A" or no values in the citation column
fr_tracking_all_fr_cit = fr_tracking0.replace("N/A", np.nan).dropna(subset=["citation"])

# only keep rows that contain "FR" plus numbers (eleminates abnormalities)
fr_tracking_all_fr_cit = fr_tracking_all_fr_cit[fr_tracking_all_fr_cit["citation"].str.fullmatch(r".*\bFR\b.*", na=False)]

# %%
# gao_cra data cleaning

# drop rows with "N/A" or no values in the fed_reg_number column
gao_cra_all_fr_cit = gao_cra0.replace("N/A", np.nan).dropna(subset=["fed_reg_number"])

# only keep rows that contain "FR" plus numbers (eleminates abnormalities)
gao_cra_all_fr_cit = gao_cra_all_fr_cit[gao_cra_all_fr_cit["fed_reg_number"].str.fullmatch(r".*\bFR\b.*", na=False)]

# # %%
# # fr_tracking anti-join on citation/fed_reg_number
# fr_tracking_unmatched_on_fr_cit = fr_tracking_all_fr_cit[~fr_tracking_all_fr_cit["citation"].isin(gao_cra_all_fr_cit["fed_reg_number"])]
# fr_tracking_unmatched_on_fr_cit.info()
# fr_tracking_unmatched_on_fr_cit.to_csv("fr_tracking_unmatched_on_fr_cit.csv", index=False)
#
# # %%
# # gao_cra anti-join on citation/fed_reg_number
# gao_cra_unmatched_on_fr_cit = gao_cra_all_fr_cit[~gao_cra_all_fr_cit["fed_reg_number"].isin(fr_tracking_all_fr_cit["citation"])]
# gao_cra_unmatched_on_fr_cit.info()
# gao_cra_unmatched_on_fr_cit.to_csv("gao_cra_unmatched_on_fr_cit.csv", index=False)

# %%
# fr_tracking data cleaning

# drop rows with "." or no values in the regulation_id_number column
fr_tracking_all_id_date = fr_tracking0.replace(".", np.nan).dropna(subset=["regulation_id_number"])

# drop rows containing "Docket No", "Doc. No.", or "FR"
fr_tracking_all_id_date = fr_tracking_all_id_date[~fr_tracking_all_id_date["regulation_id_number"].str.contains(r"Docket No|Doc\. No\.|FR", na=False, regex=True)]

# convert regulation_id_number column to a list of lists (so groups of RINs can be searched for individual RINs)
fr_tracking_all_id_date["regulation_id_number"] = fr_tracking_all_id_date["regulation_id_number"].str.split(r"\s*;\s*")

# %%
# gao_cra data cleaning (CONTINUE WORKING HERE)

# drop rows with "N/A" no values in the identifier column
gao_cra_all_id_date = gao_cra0.replace("N/A", np.nan).dropna(subset=["identifier"])

#gao_cra_all_id_date.to_csv("gao_cra_all_id_date.csv", index=False)

# %%
# fr_tracking anti-join on BOTH RIN and pub date
# unmatched_fr_tracking2 = fr_tracking0.merge(
#     gao_cra0,
#     left_on=["regulation_id_number", "publication_date"],
#     right_on=["identifier", "date_published_in_federal_register"],
#     how="left",
#     indicator=True
# ).query('_merge == "left_only"').drop(columns=["_merge"])

# unmatched_fr_tracking2.info()
#unmatched_fr_tracking2.to_csv("unmatched_fr_tracking2.csv", index=False)

# %%
# gao_cra anti-join on BOTH RIN and pub date
# unmatched_gao_cra2 = gao_cra0.merge(
#     fr_tracking0,
#     left_on=["identifier", "date_published_in_federal_register"],
#     right_on=["regulation_id_number", "publication_date"],
#     how="left",
#     indicator=True
# ).query('_merge == "left_only"').drop(columns=["_merge"])

# unmatched_gao_cra2.info()
#unmatched_gao_cra2.to_csv("unmatched_gao_cra2.csv", index=False)

# %%
# combine dfs and remove duplicates
# unmatched_fr_tracking3 = pd.concat([unmatched_fr_tracking1, unmatched_fr_tracking2]).drop_duplicates(subset=["citation"]).reset_index(drop=True)
# unmatched_fr_tracking3.info()
# unmatched_fr_tracking3.to_csv("unmatched_fr_tracking3.csv", index=False)

# %%
# combine dfs and remove duplicates
# unmatched_gao_cra3 = pd.concat([unmatched_gao_cra1, unmatched_gao_cra2]).drop_duplicates(subset=["fed_reg_number"]).reset_index(drop=True)
# unmatched_gao_cra3.info()
# unmatched_gao_cra3.to_csv("unmatched_gao_cra3.csv", index=False)

#%% Merge two datasets
fr_tracking_all_fr_cit['FR']=1
gao_cra_all_fr_cit['GAO']=1
df_merged_all=fr_tracking_all_fr_cit.merge(gao_cra_all_fr_cit.rename(columns={'title':'title_gao'}),\
            left_on='citation',right_on='fed_reg_number',how='outer')
print(df_merged_all.info())
print(f"# of rules in both FR and GAO:"
      f"{len(df_merged_all[(df_merged_all['FR']==1) & (df_merged_all['GAO']==1)])}")
print(f"# of rules in FR but not in GAO:"
      f"{len(df_merged_all[(df_merged_all['FR']==1) & (df_merged_all['GAO']!=1)])}")
print(f"# of rules in GAO but not in FR:"
      f"{len(df_merged_all[(df_merged_all['FR']!=1) & (df_merged_all['GAO']==1)])}")

#%% Examine rules in GAO but not in FR
for i in df_merged_all[(df_merged_all['FR']!=1) & (df_merged_all['GAO']==1)].index[0:5]:
    print(df_merged_all['title_gao'].iloc[i])
    print(df_merged_all[['fed_reg_number','date_published_in_federal_register']].iloc[i])
# some FR citations in GAO dataset are not correct (e.g., 7 FR 14155 should be 87 FR 14155)

#%% Split FR citations
df_gao=gao_cra0
df_gao[['Issue', 'FR', 'Page']] = df_gao['fed_reg_number'].str.split(' ',n=2,expand=True)
df_gao['Issue']=pd.to_numeric(df_gao['Issue'],errors='coerce')
print(df_gao['Issue'].value_counts())
print(df_gao[df_gao['FR']!='FR'][['fed_reg_number','date_published_in_federal_register']])

#%% Correct FR citations in GAO data
df_gao['fed_reg_number']=df_gao['fed_reg_number'].str.replace('F.R.','FR').str.replace('fr','FR')

def add_space_around_string(text, target_string='FR'):
    """Adds a space before and after target_string in text if no space exists."""
    pattern = r"(?<!\s)" + re.escape(target_string) + r"(?!\s)"
    return re.sub(pattern, r" " + target_string + " ", str(text))

df_gao['fed_reg_number']=df_gao['fed_reg_number'].apply(add_space_around_string)

df_gao.loc[df_gao['fed_reg_number']=='2021 86 FR 33512','fed_reg_number']='86 FR 33512'
df_gao.loc[df_gao['fed_reg_number']=='86 F 21185','fed_reg_number']='86 FR 21185'

#%% Split again
df_gao[['Issue', 'FR', 'Page']] = df_gao['fed_reg_number'].str.split(' ',n=2,expand=True)
df_gao['Issue']=pd.to_numeric(df_gao['Issue'],errors='coerce')
print(df_gao['Issue'].value_counts())
print(df_gao[df_gao['FR']!='FR'][['fed_reg_number','date_published_in_federal_register']])


#%% Merge using RIN and pub date instead
df_gao=gao_cra0
df_gao.loc[~df_gao['identifier'].str.contains('-'),'identifier']=np.nan
print('GAO data with RINs:',len(df_gao[df_gao['identifier'].notnull()]))