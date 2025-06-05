# Public Laws Data

## Last Updated

README: 2025-06-02

## Update Instructions

### Automated Program

The Python script will collect all public laws enacted by the 94th Congress through the current Congress using Congress.gov API and get the page count and word count for each law. The dataset on word & page counts by congress (`public_law_word_count_by_congress.csv`) will only include completed congresses. To update the data:

1. Confirm that your have a Congress.gov API key saved in `api_key.txt` in this directory (`data/public_laws`).
   - If you don't have an API key, sign up for one at https://api.congress.gov/sign-up/ and save it in `data/public_laws/api_key.txt`.

1. Ensure whether Python and the relevant packages are installed on your computer's environment (see instructions below on setting up your environment).

1. Run the `collect_public_law_data.py` script.

## Environment Set Up

If your computer's environment is set up with [Python 3.11](https://www.python.org/downloads/) and the necessary packages, you should be able to run the code.

First, install a Python interpreter to run the code. Some suggested download options are from [Anaconda](https://www.anaconda.com/download) or [Python.org](https://www.python.org/downloads/).

Second, download the code by [cloning](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository) this Github repository.

Third, create a separate virtual environment for running the program. This is easy to do with the `venv` module in the [Python standard library](https://docs.python.org/3/library/venv.html) and the `requirements.txt` file in this repository. Enter the following commands in the terminal / command line:

```{sh}
cd "PATH/TO/YOUR/LOCAL/PROJECT/DIRECTORY/"

python -m venv venv  # where venv is your virtual environment's name

venv/scripts/activate  # activate on Windows
source venv/bin/activate  # activate on macOS/linux

python -m pip install -r requirements.txt
```