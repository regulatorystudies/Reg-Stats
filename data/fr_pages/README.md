# Federal Register Pages Data

## Update Instructions

The Federal Register pages data should be updated **once a year**. Check and update the data and chart at the beginning of each calendar year.

### Automated Process

Follow these steps to update the dataset:

1. Ensure whether Python and the relevant packages are installed on your computer's environment (see instructions below on setting up your environment).
1. Run the Python script `update_fr_pages.py` in your preferred IDE to update the dataset.

#### Environment Set Up

If your computer's environment is set up with [Python 3.11](https://www.python.org/downloads/) and the necessary packages, you should be able to run the code.

Using [Anaconda](https://www.anaconda.com/products/distribution), the environment can be created and activated using the environment.yml file with the following commands in the terminal:

```{bash}
cd "NAVIGATE TO DIRECTORY WHERE YML IS STORED"

conda env create -f environment.yml

conda activate regstats_fr
```

See the [Anaconda documentation](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html) for more details.

### Manual Process

Follow these steps to update the dataset:

1. Go to the [Federal Register Statistics](https://www.federalregister.gov/reader-aids/federal-register-statistics) page.
2. Check for data updates by clicking on "[Federal Register Pages Published Per Category](https://www.federalregister.gov/reader-aids/federal-register-statistics/category-page-statistics)."
3. Add any new data to the CSV file in this folder named `federal_register_pages_by_calendar_year.csv`.