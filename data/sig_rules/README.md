## Instructions for Updating the Significant Rules Data

*March 21, 2023*

We rely on the Federal Register for the data starting 2021 and Reginfo.gov for all the prior years. This is because there is a data update lag in Published Date on Reginfo.gov, which makes the data for recent years incomplete on Reginfo.gov.

To update the number of significant rules for a new presidential year after 2021, follow these steps:
1.	Go to the data/fr_tracking directory, open the Excel file “fr_tracking_(date).xls”
2.	In the Excel file, use the filter function to select the publication_date = the presidential year you are updating (e.g., Feb 2021 – Jan 2022).
3.	Use the filter to select significant = 1.
4.	The number of records found indicates the number of significant rules published during the selected presidential year.
5.	Open the CSV file “significant_rules_by_presidential_year.csv” in this directory, and enter the number of significant rules into the **Significant Rules Published** column.

When updating the new presidential year, check all the years from Reginfo.gov (i.e., 1994-2020) in case the data on Reginfo.gov have been updated since the last update of Reg Stats (which occurs more often for more recent years):

6.	Go to [Reginfo.gov](https://www.reginfo.gov/public/); under the Regulatory Review tab, click on [Search](https://www.reginfo.gov/public/do/eoAdvancedSearchMain).
7.	On the Search of Regulatory Review page, set the following search criteria:
	- Review Status = Concluded
	- Stage of Rulemaking = Interim Final Rule & Final Rule & Final Rule No Material Change
	- Published Date Range = From 02/01/YYYY To 01/31/YYYY (start and end of a presidential year)
8.	Click on Search.
9.	On the Search Results page, the “Number Of Records Found” indicates the total number of significant rules published during the selected presidential year; enter the number into the Significant Rules Published column for the corresponding year in the Excel file.
10.	On the Search Results page, click on View All or go to the last page of the results.
11.	Scroll down to the bottom of the table and check the Conclusion Action column to see if there are any Withdrawn rules.
12.	If there are Withdrawn rules, deduct the total number of significant rules by the number of withdrawn rules, and enter the number into the Significant Rules Published (Excluding Withdrawn) in the CSV file.
13.	Save and upload the CSV file “significant_rules_by_presidential_year.csv” to Github.

*Note: We only collected the Federal Register data since 2021, so we use Reginfo.gov for the prior years. By using the Reginfo.gov data, we are assuming that the Regulatory Review database reflects all the significant rules published in the Federal Register.*
