# Daily Federal Register Tracking

## Last Updated

README: 2024-06-12

Data: ~weekly

## Update Instructions

1. Check the date through which the data in `fr_tracking.csv` have been updated. Retrieve the rules published between the last issue included in the tracking document and the current issue of the Federal Register. There are two ways to do this:
    - Use the [web app](https://regulatorystudies.shinyapps.io/fr-tracking/) to retrieve the rules (excluding corrections) and download them as a csv file.
    - Use the command line Python program to retrieve the rules (excluding corrections) and download them as a csv file. See commands below (lines 2 and 3 are only necessary to set up your environment the first time).
     ```bash
     cd ~/Reg-Stats/data/fr_tracking
     python -m venv .venv
     python -m pip install -r requirements.txt
     python ./rule_tracking/retrieve_rules.py
     ```
   
1. Add the retrieved rules as new rows to the spreadsheet.
1. Work through the new rules one by one. Pull up the rule on [federalregister.gov](https://www.federalregister.gov) using the url in the spreadsheet. Supplement missing values in the columns with metadata from the Federal Register website.
    - Many values can be found in the grey box at the top right. Typically, you can find “RIN” and “Agency/Docket Number” there.   
    - RIN is sometimes missing from this box, and Agency/Docket Number often is. It’s often worth a quick scan of the document to look for RIN elsewhere, or worth checking reginfo.gov, but sometimes one just doesn’t exist. Don’t worry if Agency/Docket information is missing. 
1. To determine if a rule is significant/economically significant, search by “Control-F”ing the word “significant” on the webpage, as well as “12866”. This should bring you to the part of the document which discusses whether it is a significant rule. Enter a “1” if it is significant (and a 1 in the economically significant column as well if it is economically significant). If it is not, enter a “0”. If it does not say, enter a “.”.  
![](examples/12866.png)
1. To determine if a rule is “major” search by “Control-F”ing the word “major” on the webpage, as well as “Congressional”. This should bring you to the part of the document which discusses whether it is a major rule. Enter a “1” if it is major. If it is not, enter a “0”. If it does not say, enter a “.”.  
![](examples/major.png)
1. Copy the URL of the webpage into the far right column for each rule.  

Other Tips:  
  - To double-check on a confusing regulation, search it in reginfo.gov and compare.  
    - To search at reginfo.gov, use the search box in the upper right. Make sure “Reg Review” is ticked off, and search the RIN or rule name. This will often bring you to an advanced search page where you can enter more information about the rule. If this does not turn up any results, search again with “Unified Agenda” ticked off instead.  
  - If you miss a day, click on the same link under Current Issue but use Advanced Search to select just the rules from the day you missed before filling in more recent days.  
  - For missing values, add a “.” In the cell so reviewers know you did not just forget.  
