<!-- title: README -->

# Federal Register Rules Data

## Overview

The graph of Federal Register (FR) rules, including both final and proposed rules, should be updated annually. The data come from the Federal Register API, which reflects daily updates by the Office of the Federal Register (OFR). Because the data are updated each business day and we currently depict charts by "[presidential year](https://regulatorystudies.columbian.gwu.edu/reg-stats)," this chart should be updated every year in early February.

## Last Updated

README: 2024-07-30

Data: ~annually

## Update Instructions

Follow these procedures to update the data:

1. Determine whether the data filess and chart can be incremented by another year. The data for the prior presidential year can be updated on or after the first business day of February.

1. Ensure whether Python and the relevant packages are installed on your computer's environment (see instructions below).

1. Retrieve the raw data from the Federal Register API to update the presidential year data:
    - Aggregate data
      - Run the python code in `fr_rules_presidential_year.py` as a script (it can be executed in the IDE or editor of your choice or from the command line)
      - Ensure that the code is executed correctly; if errors, troubleshoot
      - Ensure that data saved in JSON and CSV files
        - The JSON files will be located in an untracked `fr_rules/_api/` folder, and the CSV files will be located in the `fr_rules/` root folder
    - Agency-level data
      - This code relies on the retrieved API data, so it is necessary to run the aggregate data script first
      - Run the `agency_fr_rules_presidential_year.py` script from an IDE or the command line
      - The ouput CSV file will be located in the `fr_rules/` root folder

## Environment Set Up

If your computer's environment is set up with [Python 3.10](https://www.python.org/downloads/) (or newer) and the necessary packages, you should be able to run the code.

Using [Anaconda](https://www.anaconda.com/products/distribution), the environment can be created using the environment.yml file with the following commands in the terminal:

```{bash}
cd "NAVIGATE TO DIRECTORY WHERE YML IS STORED"

conda env create -f environment.yml

conda activate regstats_fr

conda env list
```

See the [Anaconda documentation](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html) for more details.
