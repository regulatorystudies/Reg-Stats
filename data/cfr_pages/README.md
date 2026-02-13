# CFR Pages Data

## Update Instructions

The CFR pages data should be updated **once a year**. Since the date when the data for the latest year becomes available is unclear, check frequently during the first few months of each calendar year to see if the latest data are updated.

Follow these steps to update the dataset:

1. Visit the [Federal Register Statistics](https://www.federalregister.gov/reader-aids/federal-register-statistics) page. 
1. Click CFR Volumes and Page Breakdown to download the latest year_CFR_Charts.XLSX file and save it to this folder as "aggregated_charts_frstats.xlsx" (replace the existing file if necessary).
1. Run the Python script `update_cfr_pages.py` in your preferred IDE to update the dataset.
1. Update the caption_text in the corresponding cfr_pages.Rmd file to reflect the last year of data in the latest Federal Register Statistics XLSX file.

#### Environment Set Up

Using [Anaconda](https://www.anaconda.com/products/distribution), the environment can be created and activated using the environment.yml file with the following commands in the terminal:

```{bash}
cd "NAVIGATE TO DIRECTORY WHERE YML IS STORED"

conda env create -f environment.yml

conda activate regstats_cfr
```

See the [Anaconda documentation](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html) for more details.
