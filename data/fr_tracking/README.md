# Daily Federal Register Tracking

## Last Updated

README: 2023-12-01

Data: 2023-12-29

## Update Instructions

1. Go to https://www.federalregister.gov/ and click on “X Rules” under Current Issue  
1. This pulls up the day’s (or next day’s) rules, typically 5-25. Click on the rules one by one. Information from each rule will be added to the `fr_tracking.xlsx` Excel workbook.  
1. Each rule will be a row in the Excel sheet. Fill in the values based on column titles.  
1. Many values can be found in the grey box at the top right. Typically, you can find “effective date”, “document citation”, “document number”, “RIN” and “Agency/Docket Number” there.   
	- RIN is sometimes missing from this box, and Agency/Docket Number often is. It’s often worth a quick scan of the document to look for RIN elsewhere, or worth checking reginfo.gov, but sometimes one just doesn’t exist. Don’t worry if Agency/Docket information is missing. 
1. Title, agency, action, and summary can be found in the opening lines of the written text and copied over to the Excel sheet.  
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
