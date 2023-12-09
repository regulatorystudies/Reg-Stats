# Major Rules Data

## Last Updated

README: 2023-11021

Data: 2022-11-03

## Update Instructions

### Automated Program

1. Determine whether the data files and charts can be incremented by another year. The data for the prior presidential year can be updated on or after the first business day of February.

2. Ensure whether Python and the relevant packages are installed on your computer's environment (see instructions below on setting up your environment).

3. Run the program (two methods):
    - In the `cradb/` folder, run scraper.py and process_data.py as scripts from the command line or your preferred IDE.
      - Follow the prompts that appear
      - Run the python code in "fr_rules_presidential_year.py" as a script (it can be executed in the IDE or editor of your choice or from the command line)
      - Ensure that the code is executed correctly; if errors, troubleshoot
      - Ensure that data saved in json and csv files
    - Calendar year
      - In progress (script: "fr_rules_calendar_year.py")

### Manual Process

Note: This method can only be used to update the data based on the received date, not the published date.

1. Update data in the spreadsheet `major_rules_by_presidential_year.csv`:

    - Go to GAO’s Congressional Review Act (CRA) [page](https://www.gao.gov/legal/other-legal-work/congressional-review-act).  
    - Scroll down to “Search Database of Rules” and fill in the following fields to get the number of major rules for the specified year:  
      - Rule Type: select “Major”
      - Rule Priority: select “All” for updating “Total Major Rules” or “Significant/Substantive” for updating “Total Major Rules, excluding non-significant”
      - Input “Date Received by GAO” by presidential year, so for example, “02/01/2021” to “02/01/2022” for Presidential Year 2021 (the database excludes documents received on the end date from the results).
    - Click SEARCH and get the total number of results from “Displaying 1 - 20 of X”.  
    - Add/update the new data into the spreadsheet.  
    - The sum and avg statistics should be automatically updated based on the pre-written formulas, but double check if the data range in the formulas include the new data you just added.  
    - Update the “Date retrieved” at the end of the spreadsheet.  

    Note: the GAO may update the underlying data from the CRA database, so always check whether the data for previous years in the spreadsheet still match the current version of the GAO database and update the data if necessary.

2. Save the CSV (Comma delimited) file.

## Environment Set Up

If your computer's environment is set up with [Python 3.11](https://www.python.org/downloads/) and the necessary packages, you should be able to run the code.

Using [Anaconda](https://www.anaconda.com/products/distribution), the environment can be created and activated using the environment.yml file with the following commands in the terminal:

```{bash}
cd "NAVIGATE TO DIRECTORY WHERE YML IS STORED"

conda env create -f environment.yml

conda activate regstats_gao
```

See the [Anaconda documentation](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html) for more details.
