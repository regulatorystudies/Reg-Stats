import warnings
warnings.filterwarnings('ignore') # Ignore warnings
import pandas as pd
import os
from lxml import etree
import requests
from bs4 import BeautifulSoup
import re
from io import BytesIO
import base64

pd.set_option('display.width', 1000)
pd.set_option('display.max_columns', 10)

import streamlit as st
from unified_agenda_data import *
from oira_review_data_collector import *

# Import analysis from repo-root unified_agenda_data (plots and logic for tab3)
import sys
_repo_root = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))
_ua_analysis_dir = os.path.join(_repo_root, 'unified_agenda_data')
if _ua_analysis_dir not in sys.path:
    sys.path.insert(0, _ua_analysis_dir)
import unified_agenda_data.unified_agenda_data_analysis as ua_analysis
from unified_agenda_data.helper import collect_ua_data, xml_to_csv, download_file, reorder_columns, get_latest_year_season
import matplotlib.pyplot as plt

# Directory to store downloaded XML and generated CSV files for Unified Agenda
BASE_DIR = os.path.dirname(__file__)
UA_OUTPUT_DIR = os.path.join(BASE_DIR, "ua_downloads")
os.makedirs(UA_OUTPUT_DIR, exist_ok=True)

# 3 things to work on -
# - add a txt file with all the data
# - plot slideshow based on how the user selects the file
# - table with the minimum information



st.markdown(
    """
    <style>
    .stApp{
        background-color: #033C5A;
    }
    </style>
    """,
    unsafe_allow_html=True
)
st.image("images/logo.png",use_container_width=True)



def safe_find_text(node, tag, index=None):

    element = node.find(tag)
    if element is not None:
        try:
            if index is not None:
                return element[index].text if len(element) > index else ""
            return element.text or ""
        except:
            return ""
    return ""


current_year, current_season = get_latest_year_season()
# Unified Agenda uses Spring (roughly Jan–Jun) and Fall (Jul–Dec)
current_season = "fall" if current_time.month >= 7 else "spring"



tab1, tab2, tab3 = st.tabs(["Unified Agenda Data","OIRA Review Data","Unified Agenda Data Analysis"])

with tab1:
    st.markdown(
        "<h1 style='color:#AA9868';>Unified Agenda data</h1>",
        unsafe_allow_html=True
    )
    st.write(f'The Unified Agenda data are available from Fall 1995 through {current_season.title()} {current_year}.\n')
    st.write(
        f'To request data, please enter the year and season range between Fall 1995 and {current_season.title()} {current_year}.')
    col1, col2 = st.columns(2)
    def season_options(year):
        if year in [1995,2012]:
            return ["fall"]
        if year == current_year: return ["spring"]
        return ["spring","fall"]
    with col1:
        start_year = st.selectbox("Start Year", list(range(1995,current_year+1)),index=0)
        start_season = st.selectbox("Start Season",
                                    season_options(start_year),
                                    key="start_season")
    with col2:
        end_year = st.selectbox("End Year", list(range(1995, current_year+1)), index=0)
        end_season = st.selectbox("End Season",
                                  season_options(end_year),
                                  key="end_season")

    # Agency filter (optional) — cached so it only fetches once
    @st.cache_data
    def download_agency_list_tab1():
        agy_url = 'https://raw.githubusercontent.com/zhoudanxie/regulatory_data_repository/main/other_data/AGY_AGENCY_LIST.xml'
        r = requests.get(agy_url)
        r.raise_for_status()
        root = etree.fromstring(r.content)
        agency_names = []
        for ag in root.findall("AGENCY"):
            name_el = ag.find("NAME")
            if name_el is not None and name_el.text:
                agency_names.append(name_el.text.strip())
        # de-dupe + sort
        return sorted(set(agency_names))

    agency_names = download_agency_list_tab1()
    selected_agencies = st.multiselect(
        "Filter by Agency (optional)",
        options=agency_names,
        key="ua_selected_agencies",
    )
    st.caption("Leave blank to include all agencies.")

    if st.button("More Information"):
        st.write("More Information about the dataset")
        st.image("images/data.png")

    if st.button("Display Data"):
        st.info("Collecting data, please wait...")

        df = collect_ua_data(
            start_year,
            start_season,
            end_year,
            end_season,
            UA_OUTPUT_DIR,
            status_callback=st.write,
        )

        if df is None or df.empty:
            st.error("No data could be collected for the selected range.")
        else:
            # Apply agency filter (if any)
            if selected_agencies:
                df = df[df['agency_name'].isin(selected_agencies)]
                if df.empty:
                    st.warning("No data found for the selected agencies.")

            name = f'REGINFO_RIN_DATA_{start_year}{start_season}-{end_year}{end_season}.csv'
            full_path = os.path.join(UA_OUTPUT_DIR, name)
            df.to_csv(full_path, index=False)
            st.subheader("Data Preview")
            st.dataframe(df.head(20))

            csv_data = df.to_csv(index=False).encode("utf-8")
            st.download_button(
                label="Download Data",
                data=csv_data,
                file_name=name,
                mime="text/csv",
            )

with tab2:
    st.markdown(
        "<h1 style='color:#AA9868';>Office of Information and Regulatory Affairs (OIRA) Review Data.</h1>",
        unsafe_allow_html=True
    )

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

    mode = st.radio("Select Mode:", ["Single Year", "Multiple Years"])
    if mode == "Single Year":
        year = st.number_input("Enter Year", min_value=1981, max_value=current_year, step=1, value=current_year)
        if st.button("Download and Transform"):
            df = process_oira_data([year])
            if not df.empty:
                st.success("Data downloaded and processed.")
                st.dataframe(df.head())
                st.download_button("Download CSV", df.to_csv(index=False), file_name=f"OIRA_{year}.csv")

                # --- Charts ---
                st.subheader("Charts")

                agency_counts = df['agency_name'].value_counts().sort_values(ascending=False)
                top15 = agency_counts.iloc[:15]
                others_sum = agency_counts.iloc[15:].sum()
                if others_sum > 0:
                    top15 = pd.concat([top15, pd.Series({'Others': others_sum})])
                fig_bar, ax_bar = plt.subplots(figsize=(14, 6))
                colors_bar = plt.cm.tab20.colors[:len(top15)]
                bars = ax_bar.bar(top15.index, top15.values, color=colors_bar)
                for bar in bars:
                    ax_bar.text(
                        bar.get_x() + bar.get_width() / 2,
                        bar.get_height() + 0.3,
                        str(int(bar.get_height())),
                        ha='center', va='bottom', fontsize=8,
                    )
                ax_bar.set_xlabel("Agency", fontsize=10)
                ax_bar.set_ylabel("Number of Actions", fontsize=10)
                ax_bar.set_title("REGULATORY ACTIONS BY AGENCY", fontweight='bold', fontsize=11)
                plt.xticks(rotation=45, ha='right', fontsize=8)
                plt.tight_layout()
                st.pyplot(fig_bar)
                plt.close(fig_bar)

                st.markdown("---")

                stage_counts = df['stage'].value_counts()
                fig_pie, ax_pie = plt.subplots(figsize=(10, 8))
                wedge_colors = plt.cm.tab20.colors[:len(stage_counts)]
                wedges, texts, autotexts = ax_pie.pie(
                    stage_counts.values,
                    labels=None,
                    colors=wedge_colors,
                    autopct=lambda p: str(int(round(p * stage_counts.sum() / 100))),
                    startangle=140,
                )
                for at in autotexts:
                    at.set_fontsize(9)
                ax_pie.legend(
                    wedges,
                    stage_counts.index,
                    title="Stage",
                    loc="center left",
                    bbox_to_anchor=(1, 0, 0.5, 1),
                    fontsize=8,
                )
                ax_pie.set_title("Actions By Rule Stage", fontsize=11)
                plt.tight_layout()
                st.pyplot(fig_pie)
                plt.close(fig_pie)
            else:
                st.error("Failed to fetch data.")
    else:
        start_year, end_year = st.slider("Select Year Range", min_value=1981, max_value=current_year,
                                         value=(2015, current_year))
        if st.button("Display data"):
            df = process_oira_data(list(range(start_year, end_year + 1)))
            if not df.empty:
                st.success("Data downloaded and processed.")
                st.dataframe(df.head())
                st.download_button("Download CSV", df.to_csv(index=False),
                                   file_name=f"OIRA_{start_year}-{end_year}.csv")

                # --- Charts ---
                st.subheader("Charts")

                agency_counts = df['agency_name'].value_counts().sort_values(ascending=False)
                top15 = agency_counts.iloc[:15]
                others_sum = agency_counts.iloc[15:].sum()
                if others_sum > 0:
                    top15 = pd.concat([top15, pd.Series({'Others': others_sum})])
                fig_bar, ax_bar = plt.subplots(figsize=(14, 6))
                colors_bar = plt.cm.tab20.colors[:len(top15)]
                bars = ax_bar.bar(top15.index, top15.values, color=colors_bar)
                for bar in bars:
                    ax_bar.text(
                        bar.get_x() + bar.get_width() / 2,
                        bar.get_height() + 0.3,
                        str(int(bar.get_height())),
                        ha='center', va='bottom', fontsize=8,
                    )
                ax_bar.set_xlabel("Agency", fontsize=10)
                ax_bar.set_ylabel("Number of Actions", fontsize=10)
                ax_bar.set_title("REGULATORY ACTIONS BY AGENCY", fontweight='bold', fontsize=11)
                plt.xticks(rotation=45, ha='right', fontsize=8)
                plt.tight_layout()
                st.pyplot(fig_bar)
                plt.close(fig_bar)

                st.markdown("---")

                stage_counts = df['stage'].value_counts()
                fig_pie, ax_pie = plt.subplots(figsize=(10, 8))
                wedge_colors = plt.cm.tab20.colors[:len(stage_counts)]
                wedges, texts, autotexts = ax_pie.pie(
                    stage_counts.values,
                    labels=None,
                    colors=wedge_colors,
                    autopct=lambda p: str(int(round(p * stage_counts.sum() / 100))),
                    startangle=140,
                )
                for at in autotexts:
                    at.set_fontsize(9)
                ax_pie.legend(
                    wedges,
                    stage_counts.index,
                    title="Stage",
                    loc="center left",
                    bbox_to_anchor=(1, 0, 0.5, 1),
                    fontsize=8,
                )
                ax_pie.set_title("Actions By Rule Stage", fontsize=11)
                plt.tight_layout()
                st.pyplot(fig_pie)
                plt.close(fig_pie)
            else:
                st.error("Failed to fetch data.")

with tab3:
    st.markdown(
        "<h1 style='color:#AA9868';>Unified Agenda Analysis Dashboard</h1>",
        unsafe_allow_html=True
    )
    st.write(f"Select a Unified Agenda (year and season) to run the same analysis and plots.")

    # Hard cap: latest available data is Spring 2025
    MAX_YEAR = 2025
    MAX_SEASON = "spring"

    year = st.number_input("Enter Year here", min_value=1995, max_value=MAX_YEAR, step=1, value=MAX_YEAR)

    if year in [1995, 2012]:
        season_opts = ["fall"]
    elif year == MAX_YEAR:
        season_opts = ["spring"]  # only spring for 2025
    else:
        season_opts = ["spring", "fall"]

    season = st.selectbox("Please enter the season", season_opts)


    if st.button("Run Analysis", key="tab3_run"):
        with st.spinner("Loading agenda data and building plots…"):
            try:
                summary, figures, df = ua_analysis.run_analysis_for_dashboard(year, season, current_year=current_year)
                st.success(f"Loaded **{summary['total_actions']}** actions for {season.capitalize()} {year}.")

                st.subheader("Summary")
                col1, col2 = st.columns(2)
                with col1:
                    st.write("**By stage**")
                    st.dataframe(summary['stage_counts'].reset_index(name="Count"), use_container_width=True, hide_index=True)
                with col2:
                    st.write("**By priority**")
                    st.dataframe(summary['priority_counts'].reset_index(name="Count"), use_container_width=True, hide_index=True)
                if summary.get('midnight_agenda'):
                    st.caption("This is a midnight agenda (fall of last year of an administration).")

                if df is not None and not df.empty:
                    with st.expander("View Raw Data (click to expand)"):
                        st.caption(f"Showing {len(df)} total rows")
                        st.dataframe(df, use_container_width=True)
                        st.download_button(
                            "Download Raw Data as CSV",
                            df.to_csv(index=False),
                            file_name=f"UA_Analysis_{year}_{season}.csv",
                            mime="text/csv",
                        )

                st.subheader("Plots")
                for fig, title in figures:
                    st.markdown(f"**{title}**")
                    st.pyplot(fig)
                    plt.close(fig)
            except Exception as e:
                st.error(f"Analysis failed: {e}")
                import traceback
                st.code(traceback.format_exc())
