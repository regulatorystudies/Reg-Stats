# Daily Federal Register Tracking

## Last Updated

README: 2024-06-12

Data: ~weekly

## Update Instructions

1. Check the date through which the data in `fr_tracking.csv` have been updated. Retrieve the rules published between the last issue included in the tracking document and the current issue of the Federal Register. There are two ways to do this:
    - Use the [web app](https://regulatorystudies.shinyapps.io/fr-tracking/) to retrieve the rules (excluding corrections) and download them as a csv file.
    - Use the command line Python program to retrieve the rules (excluding corrections) and download them as a csv file. You will need Python 3.10 or greater installed on your computer. See commands below (creating the virtual environment and installing dependencies is only necessary the first time).
      - Navigate to the local folder where the program is located: `cd USER/PATH/TO/Reg-Stats/data/fr_tracking`
      - Create a virtual environment: `python -m venv myenv`
        - you can name the virtual environment anything you'd like (here it's "myenv")
     - Activate the virtual environment:
       - macOS/linux: `source myenv/bin/activate`
       - Windows: `myenv/scripts/activate`
     - Install the dependencies into myenv: `python -m pip install -r requirements.txt`
     - Run the code: `python ./rule_tracking/retrieve_rules.py`
   
1. Add the retrieved rules as new rows to the spreadsheet.
1. Work through the new rules one by one. Pull up the rule on [federalregister.gov](https://www.federalregister.gov) using the url in the spreadsheet. Supplement missing values in the columns with metadata from the Federal Register website.
    - Many values can be found in the grey box at the top right. Typically, you can find “RIN” and “Agency/Docket Number” there.   
    - RIN is sometimes missing from this box, and Agency/Docket Number often is. It’s often worth a quick scan of the document to look for RIN elsewhere, or worth checking reginfo.gov, but sometimes one just doesn’t exist. Don’t worry if Agency/Docket information is missing. 
1. To determine if a rule is significant/economically significant, search by “Control-F”ing the word “significant” on the webpage, as well as “12866”. This should bring you to the part of the document which discusses whether it is a significant rule. Enter a “1” if it is significant (and a 1 in the economically significant column as well if it is economically significant). If it is not, enter a “0”. If it does not say, enter a “.”.  
![](examples/12866.png)
1. To determine if a rule is “major” search by “Control-F”ing the word “major” on the webpage, as well as “Congressional”. This should bring you to the part of the document which discusses whether it is a major rule. Enter a “1” if it is major. If it is not, enter a “0”. If it does not say, enter a “.”.  
![](examples/major.png)
   - Alternatively, an agency may identify a rule as major by referring to the relevant section of the U.S. Code. You may come aross a sentence alongs the lines of: "This action meets the criteria set forth in 5 U.S.C. 804(2)." Also mark such rules as major=1.

Other Tips:  
  - To double-check on a confusing regulation, search it in reginfo.gov and compare.  
    - To search at reginfo.gov, use the search box in the upper right. Make sure “Reg Review” is ticked off, and search the RIN or rule name. This will often bring you to an advanced search page where you can enter more information about the rule. If this does not turn up any results, search again with “Unified Agenda” ticked off instead.  
  - For missing values, add a “.” In the cell so reviewers know you did not just forget.  
