# Core Python Functions

## Overview
This directory contains core Python functions that are used by scripts in the individual data subfolders to collect and process data prior to visualization. Some data are collected from our [manually updated](https://github.com/regulatorystudies/Reg-Stats/tree/main/data/fr_tracking) `fr_tracking.csv`, while the rest are scraped from [reginfo.gov](https://www.reginfo.gov/). The data from these sources are combined using `update_annual.py` and `update_admin.py` to generate annual (and in some cases, monthly) counts of significant and economically significant rules across administrations. 

The RegInfo [Advanced Search](https://www.reginfo.gov/public/do/eoAdvancedSearchMain) feature provides the ability to query regulatory data all the way back to the Reagan administration. However, the significance designations of the rules it returns are not always accurate. RegInfo will sometimes even retroactively revise significance designations. To achieve greater accuracy, RSC began [manually collecting data](https://github.com/regulatorystudies/Reg-Stats/tree/main/data/fr_tracking) from the [Federal Register](https://www.federalregister.gov/) and entering it into our `fr_tracking.csv` at the beginning of the Biden administration (February 2021). Much of this data collection has since been automated by the [Retrieve Rules for FR Tracking web app](https://regulatorystudies.shinyapps.io/fr-tracking/). However, significance designations, RINs, and docket numbers still need to be manually verified and entered. Extending this manual review to periods prior to the Biden administration would be very labor-intensive, so scraping the results of RegInfo Advanced Search queries remains the best option to date. Consequently, data from RegInfo must be combined with `fr_tracking.csv` whenever we wish to create longitudinal datasets across multiple administrations. 

In the future, it might be possible to use the [Federal Register API](https://www.federalregister.gov/reader-aids/developer-resources/rest-api) to [scrape the body text](https://www.federalregister.gov/developers/documentation/api/v1) of rules and add them to `fr_tracking.csv` for use as a training dataset in a natural language processing model. The model could assist with future `fr_tracking.csv` rule significance determinations and might even be able to verify some of the earlier significance determinations (depending on how far back the Federal Register provides machine-searchable rule texts).

## agencies.py
This script uses an XML file [downloaded from RegInfo](https://www.reginfo.gov/public/do/XMLReportList#:~:text=Agency%20Reference%20Information) to generate a Python dictionary with the form 'ACRONYM': ('NAME', 'CODE') for all federal agencies. These agency codes are needed to scrape RegInfo using the [advanced search feature](https://www.reginfo.gov/public/do/eoAdvancedSearchMain). It also contains a second dictionary of agency acronyms paired with the corresponding name variations (e.g. "State Department" and "Department of State"). These name variations are used to aggregate agencies' annual and monthly regulatory activity from the 'fr_tracking.csv' dataset, in which agency names aren't always consistent.

## frcount.py
This script contains functions that generate annual and monthly counts of significant and economically/3(f)(1) significant rules from the `fr_tracking.csv` dataset. That dataset **must be updated through the last weekday** of the month or presidential year (Feb 1 - Jan 31) for these functions to run. 

## party.py
This script contains several Python dictionaries that identify the party of the president for any given year and the start and end years of specific presidential administrations. 

## reginfo.py
This script contains the function that scrapes RegInfo using the [advanced search feature](https://www.reginfo.gov/public/do/eoAdvancedSearchMain). It also contains functions that perform this web scraping over multiple months or presidential years.

## update_admin.py
This script contains the main function for initiating updates to all datasets that contain rule counts by administration (both cumulative and noncumulative). It also contains several functions that import preexisting datasets as dataframes, compare old data to new data, report discrepancies, and update the dataframes with the new values. These functions are used when a policy analyst chooses to verify the data for previous presidential years or months when updating a dataset. As explained in the overview, this verification is sometimes necessary due to retroactive changes to the RegInfo database.

## update_annual.py
This script contains the main function for initiating updates to all annual significant and economically significant rules datasets. It also contains associated functions that coordinate the collection and verification of data from RegInfo (prior to 2021) and `fr_tracking.csv` (2021 and onwards). As explained in the overview, this coordination is necessary due to discontinuity in RSC's data collection methods. 
