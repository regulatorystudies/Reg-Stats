# Major Rules Data

## Last Updated

README: 2024-07-17

## Update Instructions

### Automated Program

1. Determine whether the data files and charts can be incremented by another year. The data for the prior presidential year can be updated on or after the first business day of February.

2. Ensure whether Python and the relevant packages are installed on your computer's environment (see instructions below on setting up your environment).

3. Run the program (two methods):
    - As Python scripts
      - In the `cradb/` folder, run `scraper.py` and `process_data.py` as scripts from the command line or your preferred IDE.
      - Follow the prompts that appear.
        - At a minimum, calling `scraper.py` will produce the following prompts:

          ```{bash}
          > Retrieve only new rules (i.e., those received by GAO since last retrieval date)? [yes/no]: 
          > Retrieve rule-level details? [yes/no]: 
          ```

        - At the moment, calling `process_data.py` will not produce any prompts requiring user input.

    - As a module
      - Run `python -m cradb` from the command line
      - Follow the prompts that appear, beginning with:

        ```{bash}
        > Do you want to retrieve data [r], process data [p], or both [b]? Enter selection [r/p/b]: 
        ```

      - The module will direct you through each step until the program finishes.

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

First, install a Python interpreter to run the code. Some suggested download options are from [Anaconda](https://www.anaconda.com/download) or [Python.org](https://www.python.org/downloads/).

Second, download the code by [cloning](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository) this Github repository.

Third, create a separate virtual environment for running the program. This is easy to do with the `venv` module in the [Python standard library](https://docs.python.org/3/library/venv.html) and the `requirements.txt` file in this repository. Enter the following commands in the terminal / command line:

```{sh}
cd "PATH/TO/YOUR/LOCAL/PROJECT/DIRECTORY/"

python -m venv myenv  # where myenv is your virtual environment's name

myvenv/scripts/activate  # activate on Windows
source myvenv/bin/activate  # activate on macOS/linux

python -m pip install -r requirements.txt
```

If you have issues installing the packages from the requirements.txt, it may be because OS-specific packages are included in the requirements.txt. To get around this, different requirements.txt files may exist in this repo (e.g., requirements-win.txt, requirements-mac.txt) that can be substituted in the commands used. Alternatively, generating a new requirements.txt using the [pip-tools](https://pip-tools.readthedocs.io/en/stable/) package would be a good approach. After activating your virtual environment, run the following commands in the terminal:

```{sh}
python -m pip install -U pip pip-tools

pip-compile -o my_requirements.txt requirements.in

pip-sync my_requirements.txt
```
