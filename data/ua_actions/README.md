# Unified Agenda Data

## Update Instructions

The Unified Agenda is published twice a year (in the spring and fall of each year), and this dataset should be updated **twice a year** after each Unified Agenda is published. Use either the automated process (preferred) or the manual process below to update the dataset.

### Automated Process

To update the dataset, follow these steps:

1. Ensure whether Python and the relevant packages are installed on your computer's environment (see instructions below on setting up your environment).
1. Run the Python script `update_ua_actions.py` in your preferred IDE to update the dataset.

#### Environment Set Up

If your computer's environment is set up with [Python 3.11](https://www.python.org/downloads/) and the necessary packages, you should be able to run the code.

Using [Anaconda](https://www.anaconda.com/products/distribution), the environment can be created and activated using the environment.yml file with the following commands in the terminal:

```{bash}
cd "NAVIGATE TO DIRECTORY WHERE YML IS STORED"

conda env create -f environment.yml

conda activate regstats_ua
```

See the [Anaconda documentation](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html) for more details.

### Manual Process

1. Go to the [Unified Agenda page](https://www.reginfo.gov/public/do/eAgendaMain) on Reginfo.gov
2. On the top menu bar, under “Unified Agenda,” select “Search”
3. Choose “Advanced Search” on the Search page
4. Here you can choose to “Search most recent publication only,” “Search all available publications,” or “Search selected publications.” If just updating the data for the most recent Unified Agenda, select the first option. If searching for a specific Unified Agenda data, select the third option. For the purposes of updating this data set, the first search option is used most often. Click “Continue.”
5. On the next page, chose “All” to include all agencies. Click “Continue.”
6. On the “Advanced Search - Select Additional Fields” page, make sure “Active Actions” is selected. There is no need to filter for other information. Click “Search.”
7. At the top of this page, “Number of Records Found” indicates the total number of active rules in the searched Unified Agenda. This is the data point used for the total number of active regulations in that particular Unified Agenda.
8. Open the `active_actions_by_unified_agenda.csv` file, and enter the data into the file by inserting a new row.
