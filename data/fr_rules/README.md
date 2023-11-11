<!-- title: README -->

# Federal Register Rules

## Overview

The graph of Federal Register (FR) rules, including both final and proposed rules, should be updated annually. The data come from the Federal Register API, which reflects daily updates by the Office of the Federal Register (OFR). Because the data are updated each business day and we currently depict charts by "[presidential year](https://regulatorystudies.columbian.gwu.edu/reg-stats)," this chart should be updated every year in early February.

## Last Updated

README: 2023-05-23

Data: 2023-03-28

Charts: 2023-03-28

## Update Instructions

Follow these procedures to update the data:

1. Determine whether the data files and charts can be incremented by another year. The data for the prior calendar year can be updated on or after the first business day of January. The data for the prior presidential year can be updated on or after the first business day of February.

2. Ensure whether python and the relevant packages are installed on your computer's environment.

3. Retrieve the raw data from the Federal Register API to update the calendar year and presidential year data:
    - Presidential year
      - Run the python code in "fr_rules_presidential_year.py" as a script (it can be executed in the IDE or editor of your choice or from the command line)
      - Ensure that the code is executed correctly; if errors, troubleshoot
      - Ensure that data saved in json and csv files
    - Calendar year
      - In progress (script: "fr_rules_calendar_year.py")

4. Append the source note at bottom of the data files for sharing:
    - Open the files "federal_register_rules_calendar_year.csv" and "federal_register_rules_presidential_year.csv"
    - Add the citation text at the bottom of each file, starting two cells below the last line of data (see the citation text below)

Follow these procedures to update the charts:

1. Open each csv file with the newly processed data.

2. Copy the data from the csv file into the first sheet of the corresponding Excel workbook (extension .xlsx).

3. Update the chart in the second sheet in the Excel workbook.

## Citation Text

Produced by the George Washington University Regulatory Studies Center, https://regulatorystudies.columbian.gwu.edu/  
Source: Office of the Federal Register API, https://www.federalregister.gov/reader-aids/developer-resources/rest-api  
Updated: yyyy-mm-dd  
Notes: Excludes corrections to final and proposed rules.  

## Environment Instructions

If your computer's environment is set up with [Python 3.10](https://www.python.org/downloads/) (or newer) and the necessary packages, you should be able to run the code.

Using [Anaconda](https://www.anaconda.com/products/distribution), the environment can be created using the environment.yml file with the following commands in the terminal:

```{bash}
cd "NAVIGATE TO DIRECTORY WHERE YML IS STORED"

conda env create -f environment.yml

conda activate regstats1

conda env list
```

See the [Anaconda documentation](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html) for more details.
