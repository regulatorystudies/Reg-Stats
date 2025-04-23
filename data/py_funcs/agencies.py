#%%
# Function to use the RegInfo xml to create a dictionary (agency_dict) with agency acronyms (including independent agencies) as keys and agency names and codes as values
# agency_dict entries will have the form 'ACRONYM': ('NAME', 'CODE')
# these keys and values are derived from the reginfo_agency_list.xml file stored in the es_rules data folder
# the RegInfo xml file was originally downloaded from here: https://www.reginfo.gov/public/do/XMLReportList#:~:text=Agency%20Reference%20Information
# note: agency_dict acronyms are all caps so they won't match aconyms in agency_name_variations without modification

import xml.etree.ElementTree as ET
import os

py_funcs_dir_path=os.path.dirname(os.path.realpath(__file__))
xml_file_path=f'{py_funcs_dir_path}/../es_rules/reginfo_agency_list.xml'

def parse_reginfo_xml(xml_file):
    try:
        tree = ET.parse(xml_file)
        root = tree.getroot()
    except ET.ParseError as e:
        print("Error parsing the XML file:", e)
        return {}
    except FileNotFoundError as e:
        print("File not found:", e)
        return {}

    agency_dict = {}
    
    for agency in root.findall("AGENCY"):
        name_element = agency.find("NAME")
        acronym_element = agency.find("ACRONYM")
        code_element = agency.find("AGENCY_CODE")
        
        name = name_element.text if name_element is not None else None
        acronym = acronym_element.text if acronym_element is not None else None
        agency_code = code_element.text if code_element is not None else None
        
        if acronym:
            agency_dict[acronym] = (name, agency_code)
    
    return agency_dict

agency_dict = parse_reginfo_xml(xml_file_path)

#%% Dictonary of agencies (excluding independent agencies) and the corresponding regex variations of their full names as expressed in the FR tracking dataset
agency_name_variations = {
    "DHS": ["homeland\\s+security\\s+department", "department\\s+of\\s+homeland\\s+security", "homeland\\s+security\\s+office"],
    "DOC": ["commerce\\s+department", "department\\s+of\\s+commerce"],
    "DOD": ["defense\\s+department", "department\\s+of\\s+defense"],
    "DOE": ["energy\\s+department", "department\\s+of\\s+energy"],
    "DOI": ["interior\\s+department", "department\\s+of\\s+interior"],
    "DOJ": ["justice\\s+department", "department\\s+of\\s+justice"],
    "DOL": ["labor\\s+department", "department\\s+of\\s+labor"],
   #"DOS": ["state\\s+department", "department\\s+of\\s+state"],
    "STATE": ["state\\s+department", "department\\s+of\\s+state"], # necessary to have this second key for DOS because the RegInfo xml used to generate agency_dict uses "STATE" not "DOS"
    "DOT": ["transportation\\s+department", "department\\s+of\\s+transportation"],
    "ED": ["education\\s+department", "department\\s+of\\s+education"],
    "EPA": ["environmental\\s+protection\\s+agency"],
    "HHS": ["health\\s+and\\s+human\\s+services\\s+department", "department\\s+of\\s+health\\s+and\\s+human\\s+services"],
    "HUD": ["housing\\s+and\\s+urban\\s+development\\s+department", "department\\s+of\\s+housing\\s+and\\s+urban\\s+development"],
    "SBA": ["small\\s+business\\s+administration"],
    "TREAS": ["treasury\\s+department", "department\\s+of\\s+the\\s+treasury", "treasury"],
    "USDA": ["agriculture\\s+department", "department\\s+of\\s+agriculture"],
    "VA": ["veterans\\s+affairs\\s+department", "department\\s+of\\s+veterans\\s+affairs"]
}