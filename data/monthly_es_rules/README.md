# Monthly Economically Significant Rules Data

## Update Instructions

The monthly economically significant rules data are on a monthly frequency and should be updated **once a month**. Use either the automated process (preferred) or the manual process below to update the dataset.

*Note: We rely on the Federal Register for the data starting the Biden administration and Reginfo.gov for all the prior administrations. This is because there is a data update lag in the Published Date on Reginfo.gov, which makes the data for recent years incomplete on Reginfo.gov.*

### Automated Process

1. Ensure whether Python and the relevant packages are installed on your computer's environment (see instructions below on setting up your environment).
1. Run the Python script `update_monthly_es_rules.py` in your preferred IDE to update the dataset.

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
To update the number of monthly economically significant rules for a new month during or after the Biden administration, follow these steps:

1. Access/open the CSV file `monthly_econ_significant_rules_by_presidential_month.csv` in this directory.
1. Open the `fr_tracking` spreadsheet in the data/fr_tracking directory.
1. In the fr_tracking spreadsheet, use the Filter to count the number of economically significant rules:
   - Select `econ_significant = 1` (for rules published before April 6, 2023) or `3(f)(1) significant = 1` (for rules published on or after April 6, 2023).
   - Select publication_date to filter the data you are counting. For example, Feb 2021 for the first month of the Biden administration.
   - The number of records found indicates the monthly number of economically significant rules for the selected month.
1. Enter the number into the `monthly_econ_significant_rules_by_presidential_month.csv` file.

To check the number of monthly economically significant rules for the prior administrations:

*Note: The data on Reginfo.gov may have been updated since the last update of Reg Stats, which occurs more often for more recent years. By using the Reginfo.gov data, we are assuming that the Regulatory Review database reflects all the significant rules published in the Federal Register.*

1. Go to Reginfo.gov; under the Regulatory Review tab, click on Search.  
1. On the Search of Regulatory Review page, set the following search criteria:  
   - Review Status = Concluded
   - Stage of Rulemaking = Interim Final Rule & Final Rule & Final Rule No Material Change
   - Economically Significant = Yes
   - Published Date Range = From (start date of the month) To (end date of the month) (e.g., 2/1/2017-2/28/2017 for the first month of the Trump administration).
    *Note: We do not cut off the date by the inauguration day (i.e. 1/20) for each administration, because some rules finalized at the end of a previous administration may be published on the FR a few days after the inauguration day, and in that case, it would be unfair to count those rules under the new administration.*  
1. Click on Search.  
1. On the Search Results page, the “Number Of Records Found” indicates the monthly number of economically significant rules for the selected month.
