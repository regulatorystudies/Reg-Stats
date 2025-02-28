# Economically Significant Rules Data

## Update Instructions

The economically significant rules data are on a yearly frequency and should be updated **once a year**. Use either the automated process (preferred) or the manual process below to update the dataset.

*Note: We rely on the Federal Register for the data starting 2021 and Reginfo.gov for all the prior years. This is because there is a data update lag in the Published Date on Reginfo.gov, which makes the data for recent years incomplete on Reginfo.gov.*

### Automated Process

To update the dataset, follow these steps:

1. Ensure whether Python and the relevant packages are installed on your computer's environment (see instructions below on setting up your environment).
1. Run the Python script `update_es_rules.py` in your preferred IDE to update the dataset.

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

To update the number of economically significant rules for a new presidential year after 2021, follow these steps:

1. Go to the `fr_tracking` folder, open `fr_tracking.csv`.
2. In the Excel file, filter `publication_date` to show only documents from the presidential year you are updating (e.g., Feb 2021 – Jan 2022).
3. Use the filter to select `econ_significant = 1` (for rules published before April 6, 2023) or `3(f)(1) significant = 1` (for rules published on or after April 6, 2023).
4. The number of records found indicates the number of economically significant rules published during the selected presidential year.
5. Enter the number into the `Economically Significant Rules Published` column for the corresponding year in the `econ_significant_rules_by_presidential_year.csv` file.

To verify the data for years prior to 2021 (i.e., 1981-2020) from Reginfo.gov, follow these steps:

*Note: The data on Reginfo.gov may been updated since the last update of Reg Stats, which occurs more often for more recent years. By using the Reginfo.gov data, we are assuming that the Regulatory Review database reflects all the significant rules published in the Federal Register.*

1. Go to [Reginfo.gov](https://www.reginfo.gov/); under the Regulatory Review tab, click on Search.
2. On the [Search of Regulatory Review](https://www.reginfo.gov/public/do/eoAdvancedSearchMain) page, set the following search criteria:
   - Review Status = Concluded
   - Stage of Rulemaking = Interim Final Rule & Final Rule & Final Rule No Material Change
   - Economically Significant = Yes
   - Published Date Range = From 02/01/YYYY To 01/31/YYYY (start and end of a presidential year)
3. Click on Search.
4. On the Search Results page, the “Number Of Records Found” indicates the total number of significant rules published during the selected presidential year; enter the number into the `Economically Significant Rules Published` column for the corresponding year in the `econ_significant_rules_by_presidential_year.csv` file.
5. On the Search Results page, click on "View All" or go to the last page of the results.
6. Scroll down to the bottom of the table and check the Conclusion Action column to see if there are any Withdrawn rules.
7. If there are Withdrawn rules, deduct the number of withdrawn rules by the total number of economically significant rules, and enter the number into the `Excluding Withdrawn` column in the CSV file.