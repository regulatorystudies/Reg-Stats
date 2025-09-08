# Custom RegStats Python Functions

## Overview
This directory contains custom Python functions that are used by scripts in the individual data subfolders to collect and process data prior to visualization. Some data are collected from our manually updated `fr_tracking.csv`, while the rest are scraped from [reginfo.gov](https://www.reginfo.gov/). The data from these sources are combined using `update_annual.py` and `update_admin.py` to generate annual (and in some cases, monthly) counts of significant, economically significant, and major rules across administrations. 

The RegInfo Advanced Search feature provides the ability to query regulatory data all the way back to the Reagan administration. However, the significance designations of the rules it returns are not always accurate. RegInfo will sometimes even retroactively revise significance designations. To achieve greater accuracy, RSC began manually collecting data from the Federal Register and entering it into our `fr_tracking.csv` at the beginning of the Biden administration (February 2021). Much of this data collection has since been automated by the [Retrieve Rules for FR Tracking web app](https://regulatorystudies.shinyapps.io/fr-tracking/). However, significance designations, RINs, and docket numbers still need to be manually verified and entered. Extending this manual review to periods prior to the Biden administration would be very labor-intensive, so scraping the results of RegInfo Advanced Search queries remains the best option to date. Consequently, data from RegInfo must be combined with `fr_tracking.csv` whenever we wish to create longitudinal datasets across multiple administrations. 

In the future, it might be possible to use the [Federal Register API](https://www.federalregister.gov/reader-aids/developer-resources/rest-api) to scrape the body text of rules and add them to `fr_tracking.csv` for use as a training dataset in an ML model. The model could assist with future `fr_tracking.csv` rule significance determinations and might even be able to verify some of the earlier significance determinations (depending on how far back the Federal Register provides machine-searchable rule texts).

## agencies.py
This script uses an XML file [downloaded from RegInfo](https://www.reginfo.gov/public/do/XMLReportList#:~:text=Agency%20Reference%20Information) to generate a Python dictionary with the form 'ACRONYM': ('NAME', 'CODE') for all federal agencies. These agency codes are needed to scrape RegInfo using the [advanced search feature](https://www.reginfo.gov/public/do/eoAdvancedSearchMain). It also contains a second dictionary of agency acronyms paired with the corresponding name variations (e.g. "State Department" and "Department of State"). These name variations are used to aggregate agencies' annual and monthly regulatory activity from the 'fr_tracking.csv' dataset, in which agency names aren't always consistent.

## frcount.py
This script contains functions that generate annual and monthly counts of significant and economically/3(f)(1) significant rules from the 'fr_tracking.csv' dataset.
REVIEWED

## party.py
This scripts contains several Python dictionaries 
## reginfo.py

## update_admin.py

## update_annual.py
REVIEWED
