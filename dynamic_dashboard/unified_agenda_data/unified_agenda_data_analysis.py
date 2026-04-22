#----------------------------------Analysis of a Unified Agenda----------------------------------------------#

import pandas as pd
import os
from lxml import etree
import numpy as np
import requests
import re
pd.set_option('display.width', 1000)
pd.set_option('display.max_columns', 10)
import datetime
from bs4 import BeautifulSoup

import warnings
warnings.simplefilter(action='ignore', category=pd.errors.PerformanceWarning)

import matplotlib
try:
    # Use a non-interactive backend so imports work inside Streamlit
    matplotlib.use('Agg')
except Exception:
    pass
import matplotlib.pyplot as plt
from matplotlib import rcParams
rcParams['font.family'] = "Times New Roman"


def _ordinal(n: int) -> str:
    if 10 <= (n % 100) <= 20:
        suffix = "th"
    else:
        suffix = {1: "st", 2: "nd", 3: "rd"}.get(n % 10, "th")
    return f"{n}{suffix}"

#%% Define administrations
# NOTE: End years are exclusive (like Python ranges).
ADMIN_TERMS = {
    'Clinton': [(1993, 2001)],
    'Bush 43': [(2001, 2009)],
    'Obama': [(2009, 2017)],
    'Trump 45': [(2017, 2021)],
    'Biden': [(2021, 2025)],
    'Trump 47': [(2025, 2029)],
}


def _admin_for_year(year: int):
    for admin, terms in ADMIN_TERMS.items():
        for start, end in terms:
            if start <= year < end:
                return admin
    return None


def _admin_total_agendas(admin: str) -> int:
    # Each year has 2 agendas (spring/fall)
    return int(sum((end - start) * 2 for start, end in ADMIN_TERMS[admin]))


def _agenda_number_within_admin(admin: str, year: int, season: str) -> int:
    """
    Agenda number is 1-based within an administration.
    """
    season_offset = 1 if season == 'spring' else 2
    agendas_before = 0
    for start, end in ADMIN_TERMS[admin]:
        if year < start:
            break
        if start <= year < end:
            return agendas_before + (year - start) * 2 + season_offset
        agendas_before += (end - start) * 2
    raise ValueError(f"Year {year} not in administration {admin}.")


def _agenda_year_for_admin_n(admin: str, n: int, season: str) -> int:
    """
    Inverse of agenda numbering: return the year for the nth agenda of `season`
    within an administration, accounting for non-consecutive terms.
    """
    if n < 1:
        raise ValueError("Agenda number must be >= 1.")

    # Ensure requested season matches n parity (odd=spring, even=fall)
    if (season == 'spring' and n % 2 == 0) or (season == 'fall' and n % 2 == 1):
        raise ValueError("Season does not match agenda number parity.")

    remaining = n
    for start, end in ADMIN_TERMS[admin]:
        term_total = (end - start) * 2
        if remaining > term_total:
            remaining -= term_total
            continue
        # remaining is within this term
        year_offset = (remaining - 1) // 2
        year_val = start + year_offset
        if not (start <= year_val < end):
            raise ValueError("Computed year is outside admin term bounds.")
        return year_val

    raise ValueError(f"Administration {admin} does not have agenda #{n}.")

#%% Set directory
directory="unified_agenda_data"
# directory=os.path.dirname(os.path.realpath(__file__))

#%% Create subdirectories if not exist
folder_path1=f"{directory}/raw_data"
if not os.path.exists(folder_path1):
    os.makedirs(folder_path1)

folder_path1=f"{directory}/output"
if not os.path.exists(folder_path1):
    os.makedirs(folder_path1)

#%% Function to convert date
def convert_date(str_val):
    if str_val is None:
        return None
    try:
        parts = str(str_val).split('/')
        if len(parts) >= 3 and parts[0].isdigit():
            return datetime.datetime(int(parts[2]), int(parts[0]), 1)
        return None
    except Exception:
        return None

#-----------------------------------------------------------------------------------------------------------------------
#%% Function to load XML reports
def import_xml(file,year,midnight=0):
    df_xml = pd.DataFrame()
    parser = etree.XMLParser(encoding="UTF-8", recover=True)
    parsed_xml = etree.parse(file, parser)  # prevent form issue
    root = parsed_xml.getroot()
    row=0
    for child in root:
        pub = child.find('PUBLICATION')
        df_xml.at[row, 'publication_date'] = pub[0].text if pub is not None and len(pub) > 0 else None

        rin = child.find('RIN')
        df_xml.at[row, 'RIN'] = rin.text if rin is not None else None

        agy = child.find('AGENCY')
        if agy is not None:
            df_xml.at[row, 'agency_code'] = agy[0].text if len(agy) > 0 else None
            agy_name = agy.find('NAME')
            if agy_name is not None:
                df_xml.at[row, 'agency_name'] = agy_name.text

        pa = child.find('PARENT_AGENCY')
        if pa is not None:
            df_xml.at[row, 'department_code'] = pa[0].text if len(pa) > 0 else None
            df_xml.at[row, 'department_name'] = pa[1].text if len(pa) > 1 else None

        rt = child.find('RULE_TITLE')
        df_xml.at[row, 'rule_title'] = rt.text if rt is not None else None

        ab = child.find('ABSTRACT')
        df_xml.at[row, 'abstract'] = ab.text if ab is not None else None

        if child.find('PRIORITY_CATEGORY')!=None:
            df_xml.at[row, 'priority']=child.find('PRIORITY_CATEGORY').text
        if child.find('RIN_STATUS')!=None:
            df_xml.at[row, 'RIN_status']=child.find('RIN_STATUS').text
        if child.find('RULE_STAGE')!=None:
            df_xml.at[row, 'rule_stage']=child.find('RULE_STAGE').text
        if child.find('MAJOR')!=None:
            df_xml.at[row, 'major']=child.find('MAJOR').text
        else:
            df_xml.at[row, 'major']=None

        if child.find('CFR_LIST')!=None:
            index=0
            text=''
            cfr_list = child.find('CFR_LIST')
            while (index<len(list(cfr_list))):
                node = cfr_list[index]
                add = node.text if node is not None else None
                if add is not None:
                    text = add if text=='' else text+"; "+str(add)
                index=index+1
            df_xml.at[row, 'CFR'] = text

        if child.find('LEGAL_AUTHORITY_LIST')!=None:
            index=0
            text=''
            lauth_list = child.find('LEGAL_AUTHORITY_LIST')
            while (index<len(list(lauth_list))):
                node = lauth_list[index]
                add = node.text if node is not None else None
                if add is not None:
                    text = add if text=='' else text+"; "+str(add)
                index=index+1
            df_xml.at[row, 'legal_authority']=text

        # # Extract all actions in the timetable
        # if child.find('TIMETABLE_LIST')!=None:
        #     index=0
        #     while (index<len(list(child.find('TIMETABLE_LIST')))):
        #         colname='action_date_FR'+str(index+1)
        #         if child.find('TIMETABLE_LIST')[index].find('FR_CITATION')!=None:
        #             df_xml.at[row, colname]=child.find('TIMETABLE_LIST')[index][0].text+'; '+child.find('TIMETABLE_LIST')[index][1].text+'; '+child.find('TIMETABLE_LIST')[index][2].text
        #         else:
        #             if child.find('TIMETABLE_LIST')[index].find('TTBL_DATE')!=None:
        #                 df_xml.at[row, colname] = child.find('TIMETABLE_LIST')[index][0].text + '; ' + \
        #                                        child.find('TIMETABLE_LIST')[index][1].text
        #             else:
        #                 df_xml.at[row, colname] = child.find('TIMETABLE_LIST')[index][0].text
        #         index=index+1

        # # Extract the last action in the timetable
        # if child.find('TIMETABLE_LIST')!=None:
        #     index=-1
        #     if child.find('TIMETABLE_LIST')[index].find('FR_CITATION')!=None:
        #         df_xml.at[row, 'action_type']=child.find('TIMETABLE_LIST')[index][0].text
        #         df_xml.at[row, 'action_date'] = child.find('TIMETABLE_LIST')[index][1].text
        #         df_xml.at[row, 'fr_citation'] = child.find('TIMETABLE_LIST')[index][2].text
        #     else:
        #         if child.find('TIMETABLE_LIST')[index].find('TTBL_DATE')!=None:
        #             df_xml.at[row, 'action_type'] = child.find('TIMETABLE_LIST')[index][0].text
        #             df_xml.at[row, 'action_date'] = child.find('TIMETABLE_LIST')[index][1].text
        #         else:
        #             df_xml.at[row, 'action_type'] = child.find('TIMETABLE_LIST')[index][0].text

        # Extract potential might actions
        if midnight==1:
            tt = child.find('TIMETABLE_LIST')
            if tt is not None:
                action_type = action_date = fr_citation = None
                for index in range(len(list(tt))):
                    node = tt[index]
                    if node is None:
                        continue
                    if node.find('FR_CITATION') is not None:
                        action_type = node[0].text if len(node) > 0 else None
                        action_date  = node[1].text if len(node) > 1 else None
                        fr_citation  = node[2].text if len(node) > 2 else None
                    else:
                        if node.find('TTBL_DATE') is not None:
                            action_type = node[0].text if len(node) > 0 else None
                            action_date  = node[1].text if len(node) > 1 else None
                            fr_citation  = None
                        else:
                            action_type = node[0].text if len(node) > 0 else None
                            action_date = fr_citation = None

                    if convert_date(action_date)!=None:
                        if convert_date(action_date)>datetime.datetime(year,11,30):
                            break
                        else:
                            pass
                    else:
                        pass

                df_xml.at[row, 'action_type']=action_type
                df_xml.at[row, 'action_date'] = action_date
                df_xml.at[row, 'fr_citation'] = fr_citation

        row=row+1
    return df_xml
#%%
# function to add the agenda count
def add_agenda_number(df):
    if 'publication_date' not in df.columns:
        df['agenda_number'] = np.nan
        return df

    # extract year and season from publication_date
    df['pub_str'] = df['publication_date'].apply(lambda x: str(int(x)) if pd.notna(x) and str(x).replace('.0', '').isdigit() else '')
    df['agenda_year'] = pd.to_numeric(df['pub_str'].str[:4], errors='coerce').fillna(0).astype(int)
    df['agenda_code'] = df['pub_str'].str[4:]

    df['agenda_season'] = df['agenda_code'].map({
        '04': 'spring',
        '10': 'fall'
    })

    df['administration'] = df['agenda_year'].apply(_admin_for_year)

    def _compute_n(row):
        admin = row['administration']
        if admin is None:
            return np.nan
        return _agenda_number_within_admin(admin, int(row['agenda_year']), str(row['agenda_season']))

    df['agenda_number'] = df.apply(_compute_n, axis=1)

    return df

#%% Function to download an XML file
def download_file(year, season_no='10'):
    if year == 2012:
        file_name = f'REGINFO_RIN_DATA_{year}.xml'
        file_url = f'https://www.reginfo.gov/public/do/XMLViewFileAction?f=REGINFO_RIN_DATA_{year}.xml'
    else:
        file_name = f'REGINFO_RIN_DATA_{year}{season_no}.xml'
        file_url = f'https://www.reginfo.gov/public/do/XMLViewFileAction?f=REGINFO_RIN_DATA_{year}{season_no}.xml'

    file_path = f'{directory}/raw_data/{file_name}'

    try:
        if not os.path.exists(file_path):
            r = requests.get(file_url, allow_redirects=True)
            open(file_path, 'wb').write(r.content)
            print(f'{file_name} has been downloaded.')
        else:
            print(f'{file_name} already exists in the directory.')

        return file_path

    except:
        print(f'ERROR: {file_name} cannot be downloaded.')

#%% Function to save an agenda as excel
def import_excel(year,season='fall',midnight=0):
    season_no='04' if season=='spring' else '10'
    excel_path=f'{directory}/raw_data/Unified Agenda {year}{season_no}.xlsx'
    if not os.path.exists(excel_path):
        file_path=download_file(year,season_no)
        print('Converting XML to Dataframe...')
        df = import_xml(file_path,year,midnight)
        fr_cols = [col for col in df if col.startswith('action')]
        la_cols=[col for col in df if col.startswith('legal_deadline')]
        desired_cols = ['publication_date', 'RIN', 'rule_title', 'agency_code', 'agency_name', 'department_code',
                        'department_name', 'abstract', 'priority', 'major', 'RIN_status', 'rule_stage', 'CFR']
        available_cols = [col for col in desired_cols if col in df.columns] + la_cols + fr_cols
        df = df[available_cols]
        df.to_excel(excel_path, index=False)
        # print(f'Unified Agenda {year}{season_no}.xlsx has been saved.')
    else:
        df=pd.read_excel(excel_path)

    return df


#%% By Stage helper
def convert_stage(df):
    stage_col = next((c for c in df.columns if c.lower() == 'rule_stage'), None)
    if stage_col is None:
        df['stage'] = 'Unknown'
        return df
    rs = df[stage_col].fillna('').astype(str).str.strip()

    # Default bucket (Prerule/Proposed/Final/etc.)
    df['stage'] = 'Active Actions'

    # Completed / Long-term buckets are explicit in Unified Agenda outputs,
    # but we normalize minor naming variations.
    df.loc[rs.str.casefold().eq('completed actions'), 'stage'] = 'Completed Actions'
    df.loc[
        rs.str.casefold().isin(['long-term actions', 'long term actions']),
        'stage'
    ] = 'Long-Term Actions'

    return df


def sig_filter(df):
    df = df.copy()
    priority_col = next((c for c in df.columns if c.lower() == 'priority'), None)
    if priority_col is None:
        df['priority'] = 'Unknown'
        return df.iloc[0:0].reset_index(drop=True)  # empty frame with correct structure
    df.loc[
        (df[priority_col] == 'Economically Significant') |
        (df[priority_col] == 'Section 3(f)(1) Significant'),
        priority_col
    ] = 'Economically Significant'
    df_sig = df[
        (df[priority_col] == 'Economically Significant') |
        (df[priority_col] == 'Other Significant')
    ].reset_index(drop=True)
    return df_sig


def get_nth_publication(year, season):
    admin = _admin_for_year(year)
    if admin is None:
        return None
    return _agenda_number_within_admin(admin, year, season)


def get_start_year_for_admin(year):
    admin = _admin_for_year(year)
    if admin is None:
        return None
    return min(start for start, _end in ADMIN_TERMS[admin])


def _admin_agendas_up_to(admin: str, year: int, season: str):
    """
    List (year, season) tuples for all agendas in an administration up to (year, season) inclusive.
    """
    target_n = _agenda_number_within_admin(admin, year, season)
    items = []
    for n in range(1, target_n + 1):
        s = 'spring' if n % 2 == 1 else 'fall'
        y = _agenda_year_for_admin_n(admin, n, s)
        items.append((y, s))
    return items


def run_analysis_for_dashboard(agenda_year, agenda_season, current_year=None):
    """
    Run the unified agenda analysis for a given year/season and return
    (summary dict, list of (matplotlib_figure, title), raw DataFrame).
    """
    import traceback as _tb

    _step = "initialisation"
    summary = {"total_actions": 0, "priority_counts": pd.Series(dtype=int),
                "stage_counts": pd.Series(dtype=int), "midnight_agenda": False}
    figures = []
    _df_out = pd.DataFrame()
    _step = "initialisation"

    try:
        if current_year is None:
            current_year = datetime.datetime.now().year

        _step = "mapping year to administration"
        agenda_admin = _admin_for_year(agenda_year)
        if agenda_admin is None:
            raise ValueError(f"Year {agenda_year} does not map to a known administration.")

        _step = "computing agenda number"
        agenda_number = _agenda_number_within_admin(agenda_admin, agenda_year, agenda_season)
        total_agendas_for_admin = _admin_total_agendas(agenda_admin)

        # Midnight agenda rule:
        # - one-term presidents: midnight agenda number = 8
        # - two-term presidents: midnight agenda number = 16
        # (Trump 45 + Trump 47 treated as one two-term president, so midnight=16)
        agenda_midnight = 1 if (agenda_number == total_agendas_for_admin and agenda_season == 'fall') else 0

        # Load current agenda
        _step = "loading agenda data"
        df = import_excel(agenda_year, agenda_season, agenda_midnight)
        df = convert_stage(df)
        df = add_agenda_number(df)
        _df_out = df.copy()

        # Ensure priority column exists (older XMLs may omit it)
        if 'priority' not in df.columns:
            df['priority'] = 'Unknown'

        _step = "building summary"
        stage_counts = df['stage'].value_counts(dropna=False)
        stage_counts.loc['Total'] = int(stage_counts.sum())

        summary = {
            "total_actions": int(len(df)),
            "priority_counts": df['priority'].value_counts(dropna=False),
            "stage_counts": stage_counts,
            "midnight_agenda": bool(agenda_midnight)
        }

        # ----- Active ES by agency (and midnight split if applicable) -----
        _step = "building ES-by-agency plot data"
        if agenda_midnight == 1:
            action_date_col = next((c for c in df.columns if c.lower() == 'action_date'), None)
            if action_date_col is not None:
                df['action_date2'] = df[action_date_col].apply(convert_date)
            else:
                df['action_date2'] = None
            df_es = df[
                ((df['priority'] == 'Economically Significant') |
                 (df['priority'] == 'Section 3(f)(1) Significant')) &
                (df['stage'] == 'Active Actions')
            ].reset_index(drop=True)

            df_es['midnight'] = 0
            if 'action_date2' in df_es.columns:
                valid_dates = df_es['action_date2'].notna()
                df_es.loc[
                    valid_dates &
                    (df_es['action_date2'] < datetime.datetime(agenda_year + 1, 2, 1)) &
                    (df_es['action_date2'] > datetime.datetime(agenda_year, 11, 30)),
                    'midnight'
                ] = 1

            type_excl = [
                'NPRM Comment Period End', 'Analyzing Comments', 'Next Action Undetermined',
                'Notice', 'Analyze Stakeholder Comments', 'NPRM Comment Period Extended End',
                'Final Rule Effective', 'Informal Public Hearing (11/12/2024)'
            ]
            action_type_col = next((c for c in df_es.columns if c.lower() == 'action_type'), None)
            if action_type_col is not None:
                df_es.loc[df_es[action_type_col].isin(type_excl), 'midnight'] = 0
        else:
            df_es = df[
                ((df['priority'] == 'Economically Significant') |
                 (df['priority'] == 'Section 3(f)(1) Significant')) &
                (df['stage'] == 'Active Actions')
            ].reset_index(drop=True)

        # Fallback: fill missing department_name from agency_name (guard both columns)
        if 'department_name' not in df.columns:
            df['department_name'] = df['agency_name'] if 'agency_name' in df.columns else 'Unknown'
        elif 'agency_name' in df.columns:
            df.loc[df['department_name'].isnull(), 'department_name'] = df['agency_name']
        if 'department_name' not in df_es.columns:
            df_es['department_name'] = df_es['agency_name'] if 'agency_name' in df_es.columns else 'Unknown'
        elif 'agency_name' in df_es.columns:
            df_es.loc[df_es['department_name'].isnull(), 'department_name'] = df_es['agency_name']

        df_es_agency = df_es['department_name'].value_counts(dropna=False).reset_index()

        if agenda_midnight == 1:
            df_es_mid = df_es[df_es['midnight'] == 1]['department_name'].value_counts(dropna=False).reset_index()
            df_es_agency = df_es_agency.merge(
                df_es_mid,
                on='department_name',
                how='left',
                suffixes=('_total', '_midnight'),
            )
            df_es_agency.rename(columns={'index': 'department_name'}, inplace=True)
            df_es_agency['count_midnight'] = df_es_agency['count_midnight'].fillna(0)
            df_es_agency['count_non_midnight'] = (
                df_es_agency['count_total'] - df_es_agency['count_midnight']
            )
        else:
            df_es_agency.rename(columns={'count': 'count_total', 'index': 'department_name'}, inplace=True)

        agency_dict = {
            'Department of Health and Human Services': 'HHS',
            'Department of the Treasury': 'TREAS',
            'Small Business Administration': 'SBA',
            'Department of Labor': 'DOL',
            'Environmental Protection Agency': 'EPA',
            'Department of Transportation': 'DOT',
            'Department of Education': 'ED',
            'Department of Energy': 'DOE',
            'Department of Homeland Security': 'DHS',
            'Department of Veterans Affairs': 'VA',
            'Department of Agriculture': 'USDA',
            'Department of the Interior': 'DOI',
            'Nuclear Regulatory Commission': 'NRC',
            'Securities and Exchange Commission': 'SEC',
            'Commodity Futures Trading Commission': 'CFTC',
        }

        df_es_agency = df_es_agency.iloc[0:10].copy()
        df_es_agency['department_acronym'] = [
            agency_dict.get(name, name) for name in df_es_agency['department_name']
        ]

        _step = "plot 1 — ES actions by agency"
        fig1, ax1 = plt.subplots(figsize=(12, 7))
        bars = ax1.bar(
            df_es_agency['department_acronym'],
            df_es_agency['count_total'],
            color='#033C5A',
            width=0.5,
        )
        ax1.bar_label(bars)
        ax1.set_ylabel("Number of Actions", fontsize=12)
        ax1.set_title(
            f"Active Economically Significant Actions in the {agenda_season.capitalize()} {agenda_year}\n"
            f"Unified Agenda for Select Agencies",
            fontsize=16,
        )
        ax1.tick_params(axis='both', which='major', labelsize=12, color='#d3d3d3')
        ax1.spines['top'].set_visible(False)
        ax1.spines['right'].set_visible(False)
        ax1.spines['left'].set_color('#d3d3d3')
        ax1.spines['bottom'].set_color('#d3d3d3')
        figures.append((fig1, "Active Economically Significant Actions by Agency"))

        if agenda_midnight == 1:
            _step = "plot 2 — midnight vs non-midnight"
            df_mid_plot = df_es_agency[['department_acronym', 'count_midnight', 'count_non_midnight']].set_index(
                'department_acronym'
            )
            df_mid_plot.loc[df_mid_plot['count_non_midnight'] == 0, 'count_non_midnight'] = np.nan
            df_mid_plot.rename(
                columns={
                    'count_midnight': f'Proposed or Final Rule Expected in Dec {agenda_year} or Jan {agenda_year + 1}',
                    'count_non_midnight': f'Next Rulemaking Action Expected After Jan {agenda_year + 1}',
                },
                inplace=True,
            )
            fig2, ax2 = plt.subplots(figsize=(12, 7))
            df_mid_plot.plot.bar(
                stacked=True,
                rot=0,
                color=['#0190DB', '#033C5A'],
                ax=ax2,
            )
            for c in ax2.containers:
                labels = [int(x) if x > 0 else '' for x in c.datavalues]
                ax2.bar_label(c, labels=labels, label_type='center', color='white', fontsize=10)
            ax2.legend(loc='lower center', bbox_to_anchor=(0.5, -0.22), ncol=1, fontsize=14)
            ax2.set_ylabel('Number of Actions', fontsize=12)
            ax2.set_xlabel('')
            ax2.tick_params(axis='y', which='major', labelsize=12, color='#d3d3d3')
            ax2.tick_params(axis='x', which='major', labelsize=14, color='#d3d3d3')
            ax2.set_title(
                f"Active Economically Significant Actions in the {agenda_season.capitalize()} {agenda_year}\n"
                f"Unified Agenda for Select Agencies (Midnight vs Non‑Midnight)",
                fontsize=18,
            )
            ax2.spines['top'].set_visible(False)
            ax2.spines['right'].set_visible(False)
            ax2.spines['left'].set_color('#d3d3d3')
            ax2.spines['bottom'].set_color('#d3d3d3')
            figures.append((fig2, "Midnight vs Non‑Midnight ES Actions by Agency"))

        # ----- Compare with previous agendas under same administration -----
        if agenda_number != 1:
            _step = "plot 3 — comparing agendas within same administration"
            agenda_list = _admin_agendas_up_to(agenda_admin, agenda_year, agenda_season)
            # exclude the current agenda (we add it back below when building df_compare)
            agenda_list = agenda_list[:-1]

            df_all = df.copy()
            for y, s in agenda_list:
                try:
                    df_add = import_excel(y, s)
                    df_all = pd.concat([df_all, df_add], ignore_index=True)
                except Exception as _e:
                    print(f"Warning: could not load {s} {y} for comparison: {_e}")
                    continue

            # Safe numeric conversion of publication_date (may contain NaN from older files)
            df_all['publication_date'] = pd.to_numeric(
                df_all['publication_date'], errors='coerce'
            ).fillna(0).astype(int)
            df_all = convert_stage(df_all)

            df_compare = pd.DataFrame(columns=['stage'])
            for y, s in agenda_list + [(agenda_year, agenda_season)]:
                season_no = '04' if s == 'spring' else '10'
                df_stage = df_all[df_all['publication_date'] == int(f'{y}{season_no}')]['stage'].value_counts(
                    dropna=False
                ).reset_index(name=f'{s.capitalize()} {y}')
                df_compare = df_compare.merge(df_stage, on='stage', how='outer')
            df_compare = df_compare.set_index('stage')
            # Enforce bottom-to-top stacking order: Active → Long-Term → Completed
            _stage_order = ['Active Actions', 'Long-Term Actions', 'Completed Actions']
            df_compare = df_compare.reindex([s for s in _stage_order if s in df_compare.index])

            fig3, ax3 = plt.subplots(figsize=(12, 7))
            df_compare.T.plot.bar(
                stacked=True,
                rot=0,
                color=['#033C5A', '#0190DB', '#AA9868'],
                ax=ax3,
            )
            for c in ax3.containers:
                ax3.bar_label(c, label_type='center', color='white', fontsize=12)
            ax3.legend(loc='lower center', bbox_to_anchor=(0.5, -0.22), ncol=3, fontsize=14)
            ax3.set_ylabel('Number of Actions', fontsize=12)
            ax3.tick_params(axis='y', which='major', labelsize=12, color='#d3d3d3')
            ax3.tick_params(axis='x', which='major', labelsize=12, color='#d3d3d3', rotation=30)
            ax3.set_title(
                f"{agenda_season.capitalize()} {agenda_year} and Previous Agendas under the Same Administration",
                fontsize=18,
            )
            ax3.spines['top'].set_visible(False)
            ax3.spines['right'].set_visible(False)
            ax3.spines['left'].set_color('#d3d3d3')
            ax3.spines['bottom'].set_color('#d3d3d3')
            figures.append((fig3, "Current vs Previous Agendas under Same Administration"))

        # ----- Compare nth agenda across administrations (ES stage stacked bar) -----
        _step = "plot 4 — ES comparison across administrations"
        n_val = agenda_number

        df_es_stage = df[
            (df['priority'] == 'Economically Significant') |
            (df['priority'] == 'Section 3(f)(1) Significant')
        ]['stage'].value_counts(dropna=False).reset_index(
            name=f'{agenda_admin}\n({agenda_season.capitalize()} {agenda_year})'
        )

        df_compare_es = df_es_stage.set_index('stage')

        # Only include administrations that actually have agenda #n_val
        for admin in [a for a in reversed(list(ADMIN_TERMS.keys())) if a != agenda_admin]:
            if _admin_total_agendas(admin) < n_val:
                continue
            try:
                year_add_admin = _agenda_year_for_admin_n(admin, n_val, agenda_season)
            except Exception:
                continue
            if not (1995 <= year_add_admin <= current_year):
                continue
            try:
                df_admin = import_excel(year_add_admin, agenda_season)
                df_admin = convert_stage(df_admin)
                # Guard: ensure priority exists before filtering
                if 'priority' not in df_admin.columns:
                    df_admin['priority'] = 'Unknown'
                df_admin_es = df_admin[
                    (df_admin['priority'] == 'Economically Significant') |
                    (df_admin['priority'] == 'Section 3(f)(1) Significant')
                ]['stage'].value_counts(dropna=False).reset_index(
                    name=f'{admin}\n({agenda_season.capitalize()} {year_add_admin})'
                )
                df_compare_es = df_compare_es.merge(
                    df_admin_es.set_index('stage'),
                    left_index=True,
                    right_index=True,
                    how='outer',
                )
            except Exception as _e:
                print(f"Warning: skipping {admin} ({agenda_season} {year_add_admin}) in ES comparison: {_e}")
                continue

        n_word = _ordinal(n_val) if isinstance(n_val, int) else str(n_val)

        # Enforce bottom-to-top stacking order: Active → Long-Term → Completed
        _stage_order = ['Active Actions', 'Long-Term Actions', 'Completed Actions']
        df_compare_es = df_compare_es.reindex([s for s in _stage_order if s in df_compare_es.index])
        # Drop any administration column where every stage value is 0 or NaN (empty bar)
        df_compare_es = df_compare_es.loc[:, df_compare_es.fillna(0).sum(axis=0) > 0]

        fig4, ax4 = plt.subplots(figsize=(12, 7))
        df_compare_es.T.plot.bar(
            stacked=True,
            rot=0,
            color=['#033C5A', '#0190DB', '#AA9868'],
            ax=ax4,
        )
        for c in ax4.containers:
            ax4.bar_label(c, label_type='center', color='white', fontsize=12)
        ax4.legend(loc='lower center', bbox_to_anchor=(0.5, -0.22), ncol=3, fontsize=14)
        ax4.set_ylabel('Number of Actions', fontsize=12)
        ax4.tick_params(axis='y', which='major', labelsize=12, color='#d3d3d3')
        ax4.tick_params(axis='x', which='major', labelsize=12, color='#d3d3d3')
        ax4.set_title(
            f"Economically Significant Actions Published in the {n_word.capitalize()} Unified Agenda\n"
            f"under Different Administrations",
            fontsize=18,
        )
        ax4.spines['top'].set_visible(False)
        ax4.spines['right'].set_visible(False)
        ax4.spines['left'].set_color('#d3d3d3')
        ax4.spines['bottom'].set_color('#d3d3d3')
        figures.append((fig4, f"Economically Significant Actions in the {n_word.capitalize()} Agendas under Administrations"))

        # ----- Active Significant (ES vs Other Significant) across administrations -----
        _step = "plot 5 — significant actions comparison across administrations"
        df_sig = sig_filter(df)
        df_sig_active = df_sig[df_sig['stage'] == 'Active Actions']
        df_sig_stage = df_sig_active['priority'].value_counts(dropna=False).reset_index(
            name=f'{agenda_admin}\n({agenda_season.capitalize()} {agenda_year})'
        )
        df_compare_sig = df_sig_stage.set_index('priority')

        for admin in [a for a in reversed(list(ADMIN_TERMS.keys())) if a != agenda_admin]:
            if _admin_total_agendas(admin) < n_val:
                continue
            try:
                year_add_admin = _agenda_year_for_admin_n(admin, n_val, agenda_season)
            except Exception:
                continue
            if not (1995 <= year_add_admin <= current_year):
                continue
            try:
                df_admin = import_excel(year_add_admin, agenda_season)
                df_admin = convert_stage(df_admin)
                # Guard: ensure priority exists before sig_filter
                if 'priority' not in df_admin.columns:
                    df_admin['priority'] = 'Unknown'
                df_admin_sig = sig_filter(df_admin)
                df_admin_sig_active = df_admin_sig[df_admin_sig['stage'] == 'Active Actions']
                df_admin_sig_stage = df_admin_sig_active['priority'].value_counts(dropna=False).reset_index(
                    name=f'{admin}\n({agenda_season.capitalize()} {year_add_admin})'
                )
                df_compare_sig = df_compare_sig.merge(
                    df_admin_sig_stage.set_index('priority'),
                    left_index=True,
                    right_index=True,
                    how='outer',
                )
            except Exception as _e:
                print(f"Warning: skipping {admin} ({agenda_season} {year_add_admin}) in sig comparison: {_e}")
                continue

        priority_order = ['Other Significant', 'Economically Significant']
        df_compare_sig = df_compare_sig.reindex(priority_order).fillna(0)
        for col in df_compare_sig.columns:
            df_compare_sig[col] = pd.to_numeric(df_compare_sig[col], errors='coerce').fillna(0)
        # Drop any administration column where every priority value is 0 (empty bar)
        df_compare_sig = df_compare_sig.loc[:, df_compare_sig.sum(axis=0) > 0]

        fig5, ax5 = plt.subplots(figsize=(12, 7))
        df_compare_sig.T.plot.bar(
            stacked=True,
            rot=0,
            color=['#033C5A', '#0190DB'],
            ax=ax5,
        )
        for c in ax5.containers:
            ax5.bar_label(c, label_type='center', color='white', fontsize=12)
        ax5.legend(loc='lower center', bbox_to_anchor=(0.5, -0.22), ncol=2, fontsize=14)
        ax5.set_ylabel('Number of Actions', fontsize=12)
        ax5.tick_params(axis='y', which='major', labelsize=12, color='#d3d3d3')
        ax5.tick_params(axis='x', which='major', labelsize=12, color='#d3d3d3')
        ax5.set_title(
            f"Active Significant Actions Published in the {n_word.capitalize()} Unified Agenda\n"
            f"under Different Administrations",
            fontsize=18,
        )
        ax5.spines['top'].set_visible(False)
        ax5.spines['right'].set_visible(False)
        ax5.spines['left'].set_color('#d3d3d3')
        ax5.spines['bottom'].set_color('#d3d3d3')
        figures.append((fig5, f"Active Significant Actions in the {n_word.capitalize()} Agendas under Administrations"))

        return summary, figures, _df_out

    except Exception as _exc:
        import traceback as _tb
        raise RuntimeError(
            f"Analysis failed at step '{_step}': {_exc}\n\n{_tb.format_exc()}"
        ) from _exc


def _cli_main():
    # Preserve original command-line behaviour, but behind a main guard
    page = requests.get("https://www.reginfo.gov/public/do/eAgendaXmlReport")
    soup = BeautifulSoup(page.content, 'html.parser')
    newest_file_info = soup.select('li')[0].text[1:-6]
    current_year_season = re.split(r"\s", newest_file_info, 1)
    curr_year = int(current_year_season[1])
    curr_season = current_year_season[0].lower()

    print(
        f'The Unified Agenda data are available from Fall 1995 through '
        f'{curr_season.title()} {curr_year}.\n'
    )
    print(
        f'To analyze data, please enter the year and season range between '
        f'Fall 1995 and {curr_season.title()} {curr_year}.'
    )

    def input_year(year_type='year'):
        year_range = range(1995, curr_year + 1)
        while True:
            year_val = int(input(f'Please enter the {year_type} of the Unified Agenda you are analyzing (e.g. 2024): '))
            if year_val in year_range:
                return year_val
            else:
                print(f'ERROR: Your input year {year_val} is not in the valid time range.')

    def input_season():
        sea_option = ['spring', 'fall']
        while True:
            season_val = input('Please enter the season of the Agenda ("spring" or "fall"): ').lower()
            if season_val in sea_option:
                return season_val
            else:
                print(f'ERROR: Your input season "{season_val}" is not valid.')

    def restrict_season(year_val):
        if year_val == 1995:
            print(f'Only fall agenda is available for {year_val}.')
            return 'fall'
        if year_val == 2012:
            print(f'Only one agenda was published in {year_val}.')
            return 'fall'
        if year_val == curr_year:
            if curr_season == 'spring':
                print(f'The most recent Unified Agenda is {curr_season.title()} {curr_year}')
                return 'spring'
            return input_season()
        return input_season()

    agenda_year = input_year()
    agenda_season = restrict_season(agenda_year)
    run_analysis_for_dashboard(agenda_year, agenda_season, current_year=curr_year)


if __name__ == "__main__":
    _cli_main()
