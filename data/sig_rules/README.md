# Significant Rules Data

## Update Instructions

The significant rules data are on a yearly frequency and should be updated **once a year**. Use either the automated process (preferred) or the manual process below to update the dataset.

*Note: We rely on the Federal Register for the data starting 2021 and Reginfo.gov for all the prior years. This is because there is a data update lag in the Published Date on Reginfo.gov, which makes the data for recent years incomplete on Reginfo.gov.*

### Automated Process

To update the dataset for a new presidential year after 2021, follow these steps:

1. Ensure whether Python and the relevant packages are installed on your computer's environment (see instructions below on setting up your environment).
1. Run the Python script `update_sig_rules.py` in your preferred IDE to update the dataset.

#### Environment Set Up

If your computer's environment is set up with [Python 3.11](https://www.python.org/downloads/) and the necessary packages, you should be able to run the code.

Using [Anaconda](https://www.anaconda.com/products/distribution), the environment can be created and activated using the environment.yml file with the following commands in the terminal:

```{bash}
cd "NAVIGATE TO DIRECTORY WHERE YML IS STORED"

conda env create -f environment.yml

conda activate regstats_sig
```

See the [Anaconda documentation](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html) for more details.

### Manual Process

To update the number of significant rules for a new presidential year after 2021, follow these steps:

1. Go to the data/fr_tracking directory, open the file `fr_tracking.csv`
1. In the file, use the filter function to select the publication_date = the presidential year you are updating (e.g., Feb 2021 – Jan 2022).
1. Use the filter to select `significant = 1`.
1. The number of records found indicates the number of significant rules published during the selected presidential year.
1. Open the file `significant_rules_by_presidential_year.csv` in this directory, and enter the number of significant rules into the `Significant Rules Published` column.

To verify the data for years prior to 2021 (i.e., 1994-2020) from Reginfo.gov, follow these steps:

*Note: The data on Reginfo.gov may been updated since the last update of Reg Stats, which occurs more often for more recent years. By using the Reginfo.gov data, we are assuming that the Regulatory Review database reflects all the significant rules published in the Federal Register.*

1. Go to [Reginfo.gov](https://www.reginfo.gov/public/); under the Regulatory Review tab, click on [Search](https://www.reginfo.gov/public/do/eoAdvancedSearchMain).  
1. On the Search of Regulatory Review page, set the following search criteria:
   - Review Status = Concluded
   - Stage of Rulemaking = Interim Final Rule & Final Rule & Final Rule No Material Change
   - Published Date Range = From 02/01/YYYY To 01/31/YYYY (start and end of a presidential year)  
1. Click on Search.
1. On the Search Results page, the “Number Of Records Found” indicates the total number of significant rules published during the selected presidential year; enter the number into the `Significant Rules Published` column for the corresponding year in the `significant_rules_by_presidential_year.csv` file.
1. On the Search Results page, click on View All or go to the last page of the results.
1. Scroll down to the bottom of the table and check the Conclusion Action column to see if there are any Withdrawn rules.
1. If there are Withdrawn rules, deduct the total number of significant rules by the number of withdrawn rules, and enter the number into the `Significant Rules Published (Excluding Withdrawn)` in the CSV file.