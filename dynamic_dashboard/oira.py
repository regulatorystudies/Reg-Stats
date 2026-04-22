import streamlit as st
import pandas as pd
import os
import requests
from datetime import datetime
from lxml import etree
import pandas_read_xml as pdx

# Constants
current_year = datetime.now().year
agy_url = 'https://raw.githubusercontent.com/zhoudanxie/regulatory_data_repository/main/other_data/AGY_AGENCY_LIST.xml'
agy_path = 'AGY_AGENCY_LIST.xml'

@st.cache_data
def download_agency_list():
    r = requests.get(agy_url)
    with open(agy_path, 'wb') as f:
        f.write(r.content)
    df = pdx.read_xml(open(agy_path).read(), ['OIRA_DATA']).pipe(pdx.flatten).pipe(pdx.flatten)
    return pd.DataFrame({
        'agency_code': df['AGENCY|AGENCY_CODE'].astype(int),
        'agency_name': df['AGENCY|NAME']
    })

def download_xml(year):
    filename = f'EO_RULE_COMPLETED_{year}.xml'
    url = f'https://www.reginfo.gov/public/do/XMLViewFileAction?f=EO_RULE_COMPLETED_{year}.xml' \
        if year != current_year else \
        'https://www.reginfo.gov/public/do/XMLViewFileAction?f=EO_RULE_COMPLETED_YTD.xml'

    if not os.path.exists(filename):
        r = requests.get(url)
        content = r.content.decode('utf-8')
        if 'DATE_RECEIVED' in content:
            with open(filename, 'wb') as f:
                f.write(r.content)
            return filename
        else:
            return None
    return filename

def oira_transformation(filepath, agy_info):
    parser = etree.XMLParser(encoding="UTF-8", recover=True)
    xml = etree.parse(filepath, parser).getroot()

    data = []
    for regact in xml.findall("REGACT"):
        row = {
            'agency_code': int(regact.findtext("AGENCY_CODE", default=-1)),
            'rin': regact.findtext("RIN", default="NA"),
            'title': regact.findtext("TITLE", default="NA"),
            'stage': regact.findtext("STAGE", default="NA"),
            'ES': regact.findtext("ECONOMICALLY_SIGNIFICANT", default="NA"),
            'date_received': regact.findtext("DATE_RECEIVED", default="NA"),
            'legal_deadline': regact.findtext("LEGAL_DEADLINE", default="NA"),
            'date_completed': regact.findtext("DATE_COMPLETED", default="NA"),
            'decision': regact.findtext("DECISION", default="NA"),
            'date_published': regact.findtext("DATE_PUBLISHED", default="NA"),
            'health_care_act': regact.findtext("HEALTH_CARE_ACT", default="NA"),
            'Dodd_Frank_Act': regact.findtext("DODD_FRANK_ACT", default="NA"),
            'international_impacts': regact.findtext("INTERNATIONAL_IMPACTS", default="NA"),
            'unfunded_mandates': regact.findtext("UNFUNDED_MANDATES", default="NA"),
            'major': regact.findtext("MAJOR", default="NA"),
            'homeland_security': regact.findtext("HOMELAND_SECURITY", default="NA"),
            'regulatory_flexibility_analysis': regact.findtext("REGULATORY_FLEXIBILITY_ANALYSIS", default="NA")
        }
        data.append(row)

    df = pd.DataFrame(data)
    df = df.merge(agy_info, on="agency_code", how='left')
    df.insert(1, 'agency_name', df.pop('agency_name'))
    return df

def process_oira_data(years):
    agy_info = download_agency_list()
    results = []
    for year in years:
        xml_file = download_xml(year)
        if xml_file:
            df = oira_transformation(xml_file, agy_info)
            results.append(df)
    if results:
        return pd.concat(results, ignore_index=True)
    return pd.DataFrame()

# --- Streamlit UI ---
st.set_page_config(page_title="OIRA Data Downloader", layout="centered")

st.title("OIRA Regulatory Data Downloader")

mode = st.radio("Select Mode:", ["Single Year", "Multiple Years"])
if mode == "Single Year":
    year = st.number_input("Enter Year", min_value=1981, max_value=current_year, step=1, value=current_year)
    if st.button("Download and Transform"):
        df = process_oira_data([year])
        if not df.empty:
            st.success("Data downloaded and processed.")
            st.dataframe(df.head())
            st.download_button("Download CSV", df.to_csv(index=False), file_name=f"OIRA_{year}.csv")
        else:
            st.error("Failed to fetch unified_agenda_data.")
else:
    start_year, end_year = st.slider("Select Year Range", min_value=1981, max_value=current_year, value=(2015, current_year))
    if st.button("Download and Transform Range"):
        df = process_oira_data(list(range(start_year, end_year + 1)))
        if not df.empty:
            st.success("Data downloaded and processed.")
            st.dataframe(df.head())
            st.download_button("Download CSV", df.to_csv(index=False), file_name=f"OIRA_{start_year}-{end_year}.csv")
        else:
            st.error("Failed to fetch unified_agenda_data.")
