# Custom RegStats Python Functions

## Overview
This directory contains custom Python functions that are used by scripts in the individual data subfolders to collect and process data prior to visualization. Some data are collected from our manually updated fr_tracking.csv, while the rest are scraped from reginfo.gov. The data from these sources are combined using update_annual.py and update_admin.py to generate annual (and in some cases, monthly) counts of economically significant, significant, and major rules across administrations. 

The RegInfo Advanced Search feature provides the ability to query regulatory data all the way back to the Reagan administration. However, the significance designations of the rules it returns are not always accurate. RegInfo will sometimes even retroactively revise significance designations. To achieve greater accuracy, RSC started manually collecting data from the Federal Register and entering it into our fr_tracking.csv at the beginning of the Biden administraion (February, 2021). Much of this data collection has since been automated by the [Retrieve Rules for FR Tracking web app](https://regulatorystudies.shinyapps.io/fr-tracking/). However, significance designations, RINs, and docket numbers still need to be manually verified and entered. Extending this manual review prior to the Biden administration would be very labor intensive, so scraping the results of RegInfo Advanced Search queries remains the best option to date. Consequently, the pre-Biden data from RegInfo needs to be combined with the data from fr_tracking.csv whenever we wish to create longitudinal datasets across multiple administrations. 

In the future, it might be possible to use the [Federal Register API](https://www.federalregister.gov/reader-aids/developer-resources/rest-api) to scrape the body texts of rules and add them to the fr_tracking.csv to use as a training dataset for an ML model. The ML model could assist with future fr_tracking.csv rule significance determinations and might even be able to verify some of the pre-Biden significance determinations (this depends on how far back the Federal Register has rules with machine-searcheable text. 

## agencies.py

## frcount.py

## party.py

## reginfo.py

## update_admin.py

## update_annual.py

