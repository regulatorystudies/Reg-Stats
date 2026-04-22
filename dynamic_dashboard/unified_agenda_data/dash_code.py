# import pandas as pd
# import matplotlib.pyplot as plt
# from plotly.tools import mpl_to_plotly
# import numpy as np
# import seaborn as sns
# import plotly.express as px
# from plotly.subplots import make_subplots
# import plotly.graph_objects as go
# from datetime import datetime
# from sklearn.preprocessing import StandardScaler
# from sklearn.decomposition import PCA
# from numpy import linalg as LA
# import statsmodels.api as sm
# from scipy import stats
# from scipy.stats import shapiro
# from scipy.stats import normaltest
# import dash as dash
# from dash import dcc, html, dash_table
# from dash.dependencies import Input, Output, State
import warnings
import pandas as pd
import os
from lxml import etree
import requests
import re
from dash import Dash, html, dcc, Input, Output, State
from dash import dash_table
from dash.dash_table.Format import Group
import base64
import io
warnings.filterwarnings('ignore')
#%%

external_stylesheets = ['https://codepen.io/chriddyp/pen/bWLwgP.css']
my_app = Dash('my-app', external_stylesheets=external_stylesheets)

# Import required libraries

# Initialize the Dash app
app = Dash(__name__)
#%%
# Function to replace None values
def replace_noun(text):
    return 'N/A' if text is None else text

# Function to remove HTML tags
def remove_html_tags(text):
    if text is not None:
        clean_text = re.compile('<.*?>|&([a-z0-9]+|#[0-9]{1,6}|#x[0-9a-f]{1,6});')
        return re.sub(clean_text, ' ', text).strip()
    return None

# Function to convert XML to CSV
def xml_to_csv(file):
    agenda_date, RIN, agency_code, agency_name, department_code, department_name, rule_title, abstract, \
    priority, RIN_status, rule_stage, major, CFR, legal_authority, legal_deadline_list, action_list, \
    regulatory_flexibility_analysis, statement_of_need, summary_of_the_legal_basis, alternatives, \
    cost_and_benefits, risks, agency_list = ([] for _ in range(23))

    parser = etree.XMLParser(encoding="UTF-8", recover=True)
    parsed_xml = etree.parse(file, parser)
    root = parsed_xml.getroot()

    for child in root:
        agenda_date.append(child.find('PUBLICATION')[0].text)
        RIN.append(child.find('RIN').text)
        agency_code.append(child.find('AGENCY')[0].text)

        agency_name.append(child.find('AGENCY').find('NAME').text if child.find('AGENCY').find('NAME') else '')
        if child.find('PARENT_AGENCY') is not None:
            department_code.append(child.find('PARENT_AGENCY')[0].text)
            department_name.append(child.find('PARENT_AGENCY')[1].text)
        else:
            department_code.append('')
            department_name.append('')

        rule_title.append(child.find('RULE_TITLE').text)
        abstract.append(remove_html_tags(child.find('ABSTRACT').text))
        priority.append(child.find('PRIORITY_CATEGORY').text if child.find('PRIORITY_CATEGORY') else '')
        RIN_status.append(child.find('RIN_STATUS').text if child.find('RIN_STATUS') else '')
        rule_stage.append(child.find('RULE_STAGE').text if child.find('RULE_STAGE') else '')
        major.append(child.find('MAJOR').text if child.find('MAJOR') else '')

        cfr_text = ''
        if child.find('CFR_LIST') is not None:
            for cfr in child.find('CFR_LIST'):
                cfr_text += (cfr_text + "; " if cfr_text else "") + cfr.text
        CFR.append(cfr_text)

        lauth_text = ''
        if child.find('LEGAL_AUTHORITY_LIST') is not None:
            for lauth in child.find('LEGAL_AUTHORITY_LIST'):
                lauth_text += (lauth_text + "; " if lauth_text else "") + lauth.text
        legal_authority.append(lauth_text)

        legal_deadlines = []
        if child.find('LEGAL_DLINE_LIST') is not None and child.find('LEGAL_DLINE_LIST').find('LEGAL_DLINE_INFO') is not None:
            for element in child.find('LEGAL_DLINE_LIST').findall('LEGAL_DLINE_INFO'):
                lddl_text = f"{replace_noun(element.find('DLINE_TYPE').text)}; {replace_noun(element.find('DLINE_ACTION_STAGE').text)}; {replace_noun(element.find('DLINE_DATE').text)}; {replace_noun(element.find('DLINE_DESC').text)}"
                legal_deadlines.append(lddl_text)
        legal_deadline_list.append(legal_deadlines)

        actions = []
        if child.find('TIMETABLE_LIST') is not None:
            for element in child.find('TIMETABLE_LIST').findall('TIMETABLE'):
                action_text = f"{element.find('TTBL_ACTION').text}; {element.find('TTBL_DATE').text}"
                action_text += f"; {element.find('FR_CITATION').text}" if element.find('FR_CITATION') is not None else ""
                actions.append(action_text)
        action_list.append(actions)

        regulatory_flexibility_analysis.append(child.find('RFA_REQUIRED').text if child.find('RFA_REQUIRED') else '')

        if child.find('RPLAN_INFO') is not None:
            statement_of_need.append(child.find('RPLAN_INFO').find('STMT_OF_NEED').text if child.find('RPLAN_INFO').find('STMT_OF_NEED') else '')
            summary_of_the_legal_basis.append(child.find('RPLAN_INFO').find('LEGAL_BASIS').text if child.find('RPLAN_INFO').find('LEGAL_BASIS') else '')
            alternatives.append(child.find('RPLAN_INFO').find('ALTERNATIVES').text if child.find('RPLAN_INFO').find('ALTERNATIVES') else '')
            cost_and_benefits.append(child.find('RPLAN_INFO').find('COSTS_AND_BENEFITS').text if child.find('RPLAN_INFO').find('COSTS_AND_BENEFITS') else '')
            risks.append(child.find('RPLAN_INFO').find('RISKS').text if child.find('RPLAN_INFO').find('RISKS') else '')

            agency = []
            if child.find('AGENCY_CONTACT_LIST') is not None and child.find('AGENCY_CONTACT_LIST').findall('CONTACT') is not None:
                for element in child.find('AGENCY_CONTACT_LIST').findall('CONTACT'):
                    agency_text = f"{replace_noun(element.find('FIRST_NAME').text)}; {replace_noun(element.find('LAST_NAME').text)}; {replace_noun(element.find('PHONE').text)}; {replace_noun(element.find('TITLE').text)}"
                    agency.append(agency_text)
            agency_list.append(agency)

    df_xml = pd.DataFrame(list(zip(agenda_date, RIN, agency_code, agency_name, department_code, department_name,
                                   rule_title, abstract, priority, RIN_status, rule_stage, major, CFR, legal_authority,
                                   legal_deadline_list, regulatory_flexibility_analysis, action_list,
                                   statement_of_need, summary_of_the_legal_basis, alternatives, cost_and_benefits, risks,
                                   agency_list)),
                          columns=['agenda_date', 'RIN', 'agency_code', 'agency_name', 'department_code', 'department_name',
                                   'rule_title', 'abstract', 'priority', 'RIN_status', 'rule_stage', 'major', 'CFR', 'legal_authority',
                                   'legal_deadline_list', 'regulatory_flexibility_analysis', 'action_list', 'statement_of_need',
                                   'summary_of_the_legal_basis', 'alternatives', 'cost_and_benefits', 'risks', 'agency_list'])

    lddl_cols = [f'legal_deadline{i + 1}' for i in range(max(len(l) for l in df_xml['legal_deadline_list']))]
    action_cols = [f'action{i + 1}' for i in range(max(len(l) for l in df_xml['action_list']))]

    df_xml[lddl_cols] = pd.DataFrame(df_xml['legal_deadline_list'].tolist(), index=df_xml.index)
    df_xml[action_cols] = pd.DataFrame(df_xml['action_list'].tolist(), index=df_xml.index)

    df_xml.drop(['legal_deadline_list', 'action_list'], axis=1, inplace=True)

    return df_xml
#%%
# Function to convert season string to integer
def season_transform(season):
    return '04' if season == 'spring' else '10' if season == 'fall' else None

# Function to download an XML file
def download_file(year, season='fall'):
    file_name = f'REGINFO_RIN_DATA_{year}.xml' if year == 2012 else f'REGINFO_RIN_DATA_{year}{season_transform(season)}.xml'
    file_url = f'https://www.reginfo.gov/public/do/XMLViewFileAction?f={file_name}'
    file_path = f'./{file_name}'

    if not os.path.exists(file_path):
        r = requests.get(file_url, allow_redirects=True)
        with open(file_path, 'wb') as file:
            file.write(r.content)
    return file_path

# Function to reorder columns in concatenated dataframes
def reorder_columns(df):
    action_col = [col for col in df if col.startswith('action')]
    other_col = [col for col in df if not col.startswith('action')]
    return df[other_col + action_col]

# Main function to download XML and convert to CSV within a given time interval
def collect_ua_data(start_year, start_season, end_year, end_season):
    result_xml = []
    result_csv = []
    sea_option = ['spring', 'fall']

    if end_year == start_year:
        if start_year == 2012:
            df = xml_to_csv(download_file(start_year))
            df.to_csv(f'./REGINFO_RIN_DATA_{start_year}.csv', index=False)
        else:
            if start_season == end_season:
                df = xml_to_csv(download_file(start_year, start_season))
                df.to_csv(f'./REGINFO_RIN_DATA_{start_year}{season_transform(start_season)}.csv', index=False)
            else:
                for season in sea_option:
                    df = xml_to_csv(download_file(start_year, season))
                    df.to_csv(f'./REGINFO_RIN_DATA_{start_year}{season_transform(season)}.csv', index=False)

        result_xml.append(df)
    else:
        for year in range(start_year, end_year + 1):
            if year == start_year:
                for season in sea_option:
                    if season == start_season or (season == 'fall' and start_season == 'spring'):
                        df = xml_to_csv(download_file(year, season))
                        df.to_csv(f'./REGINFO_RIN_DATA_{year}{season_transform(season)}.csv', index=False)
                        result_xml.append(df)
            elif year == end_year:
                for season in sea_option:
                    if season == end_season or (season == 'spring' and end_season == 'fall'):
                        df = xml_to_csv(download_file(year, season))
                        df.to_csv(f'./REGINFO_RIN_DATA_{year}{season_transform(season)}.csv', index=False)
                        result_xml.append(df)
            else:
                for season in sea_option:
                    df = xml_to_csv(download_file(year, season))
                    df.to_csv(f'./REGINFO_RIN_DATA_{year}{season_transform(season)}.csv', index=False)
                    result_xml.append(df)

    for frame in result_xml:
        result_csv.append(reorder_columns(frame))

    final_df = pd.concat(result_csv, axis=0, ignore_index=True)
    final_df.to_csv(f'./REGINFO_RIN_DATA_{start_year}{season_transform(start_season)}_{end_year}{season_transform(end_season)}.csv', index=False)

    return final_df
#%%
# Helper function to convert a dataframe to CSV and encode it in base64
def df_to_csv(df):
    csv_buffer = io.StringIO()
    df.to_csv(csv_buffer, index=False)
    return base64.b64encode(csv_buffer.getvalue().encode()).decode()

# Define the app layout
app.layout = html.Div([
    html.H1('Unified Agenda Data Viewer'),
    html.Div([
        html.Label('Start Year'),
        dcc.Input(id='start_year', type='number', value=1995),
        html.Label('Start Season'),
        dcc.Dropdown(
            id='start_season',
            options=[{'label': 'Spring', 'value': 'spring'}, {'label': 'Fall', 'value': 'fall'}],
            value='fall'
        ),
        html.Label('End Year'),
        dcc.Input(id='end_year', type='number', value=2023),
        html.Label('End Season'),
        dcc.Dropdown(
            id='end_season',
            options=[{'label': 'Spring', 'value': 'spring'}, {'label': 'Fall', 'value': 'fall'}],
            value='fall'
        ),
        html.Button(id='submit', n_clicks=0, children='Submit'),
    ]),
    dash_table.DataTable(id='table', columns=[], data=[]),
    html.Div(id='download_link_div')
])

@app.callback(
    [Output('table', 'columns'),
     Output('table', 'data'),
     Output('download_link_div', 'children')],
    [Input('submit', 'n_clicks')],
    [State('start_year', 'value'), State('start_season', 'value'), State('end_year', 'value'), State('end_season', 'value')]
)
def update_table(n_clicks, start_year, start_season, end_year, end_season):
    if n_clicks > 0:
        df = collect_ua_data(start_year, start_season, end_year, end_season)
        columns = [{'name': col, 'id': col} for col in df.columns]
        data = df.to_dict('records')
        csv_string = df_to_csv(df)
        download_link = html.A(
            'Download CSV',
            id='download_link',
            download='data.csv',
            href=f'data:text/csv;base64,{csv_string}',
            target='_blank'
        )
        return columns, data, download_link
    return [], [], None

# Run the Dash app
if __name__ == '__main__':
    app.run(debug=True)
