# Economically Significant Rules Data

## Last Updated

README: 2023-11-21

Data: 2023-07-10

## Update Instructions

We rely on the Federal Register for the data starting 2021 and Reginfo.gov for all the prior years. This is because there is a data update lag in Published Date on Reginfo.gov, which makes the data for recent years incomplete on Reginfo.gov.

To update the number of economically significant rules for a new presidential year after 2021, follow these steps:

1. Go to the FR Tracking folder, open the Excel file `fr_tracking.xls`.
2. In the Excel file, filter `publication_date` to show only documents from the presidential year you are updating (e.g., Feb 2021 – Jan 2022).
3. Use the filter to select `econ_significant = 1`.
4. The number of records found indicates the number of economically significant rules published during the selected presidential year.
5. Enter the number into the `Economically Significant Rules Published` column for the corresponding year in the file, `econ_significant_rules_by_presidential_year.csv`.

When updating the new presidential year, check all the years from Reginfo.gov (i.e., 1981-2020) in case the data on Reginfo.gov have been updated since the last update of Reg Stats (which occurs more often for more recent years):

1. Go to [Reginfo.gov](https://www.reginfo.gov/); under the Regulatory Review tab, click on Search.
2. On the [Search of Regulatory Review](https://www.reginfo.gov/public/do/eoAdvancedSearchMain) page, set the following search criteria:
   - Review Status = Concluded
   - Stage of Rulemaking = Interim Final Rule & Final Rule & Final Rule No Material Change
   - Economically Significant = Yes
   - Published Date Range = From 02/01/YYYY To 01/31/YYYY (start and end of a presidential year)
3. Click on Search.
4. On the Search Results page, the “Number Of Records Found” indicates the total number of significant rules published during the selected presidential year; enter the number into the `Economically Significant Rules Published` column for the corresponding year in the csv file.
5. On the Search Results page, click on "View All" or go to the last page of the results.
6. Scroll down to the bottom of the table and check the Conclusion Action column to see if there are any Withdrawn rules.
7. If there are Withdrawn rules, deduct the number of withdrawn rules by the total number of economically significant rules, and enter the number into the `Excluding Withdrawn` column in the csv file.
8. Save the csv file.

*Note: We only collected the Federal Register data since 2021, so we use Reginfo.gov for the prior years. By using the Reginfo.gov data, we are assuming that the Regulatory Review database reflects all the significant rules published in the Federal Register.*
