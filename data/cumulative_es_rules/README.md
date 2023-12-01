# Cumulative Economically Significant Rules Data

## Last Updated

README: 2023-11-21

Data: 2023-07-10

## Update Instructions

We rely on the Federal Register for the data starting the Biden administration and Reginfo.gov for all the prior administrations. This is because there is a data update lag in Published Date on Reginfo.gov, which makes the data for recent years incomplete on Reginfo.gov.

To update the number of cumulative economically significant rules for a new month during or after the Biden administration, follow these steps:

1. Access/open the CSV file `cumulative_econ_significant_rules_by_presidential_month.csv` in this directory.
1. Open the latest `fr_tracking.xls` spreadsheet in the data/fr_tracking directory.
1. In the fr_tracking spreadsheet, use the Filter to count the number of economically significant rules:
   - Select econ_significant=1.
   - Select publication_date to include the months you are counting. For example, Feb 2021 for one month Biden in office; Feb 2021-Mar 2021 for two months Biden in office; Feb 2021-Jan 2022 for 12 months Biden in office.
   - The number of records found indicates the cumulative number of economically significant rules for the X months the president in office.
1. Enter the number into the CSV file.
1. Close `fr_tracking.xls` without saving.
1. Update the dates in the CSV file to current date.
1. Save and upload the CSV file to Github.

To check the number of cumulative economically significant rules for the prior administrations:

1. Go to Reginfo.gov; under the Regulatory Review tab, click on Search.  
1. On the Search of Regulatory Review page, set the following search criteria:  
   - Review Status = Concluded
   - Stage of Rulemaking = Interim Final Rule & Final Rule & Final Rule No Material Change
   - Economically Significant = Yes
   - Published Date Range = From (start date of the cumulative months) To (end date of the cumulative months) (e.g., 2/1/2017-2/28/2017 for one month Trump in office; 2/1/2017-3/31/2017 for two months Trump in office; 2/1/2017-1/31/2021 for 48 months Trump in office).  
    *Note: We do not cut off the date by the inauguration day (i.e. 1/20) for each administration, because some rules finalized at the end of a previous administration may be published on the FR a few days after the inauguration day, and in that case, it would be unfair to count those rules under the new administration.*  
1. Click on Search.  
1. On the Search Results page, the “Number Of Records Found” indicates the cumulative number of economically significant rules for the selected months the president was in office.
