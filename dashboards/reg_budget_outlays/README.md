# Regulatory Agency Budget Outlays Dashboard

Streamlit dashboard of regulatory agency budget outlays by fiscal year (billions of 2012 U.S. dollars), from the latest Regulators' Budget report. Same layout and styling as `dashboards/reg_budget_personnel`.

## Data
- Main chart: `data/reg_budget/regulatory_agency_budget_outlays_by_fy.csv` (Economic, Social, TSA)
- Subcategory chart: `data/reg_budget/by_regulatory_subcategory/reg_subcategory_regulatory_agency_budget_outlays_by_fy.csv`

Source CSVs are in millions; the app divides by 1,000 to plot billions. TSA is included in Homeland Security in the subcategory data; `homeland_security_without_TSA` is Homeland Security minus the main file's `tsa` column (same as the personnel data).

## Run locally
From the repository root:
```bash
pip install -r dashboards/reg_budget_outlays/requirements.txt
streamlit run dashboards/reg_budget_outlays/reg_budget_outlays.py
```
Set `DATA_ROOT` to the repo root if the app can't find the data files.

## Deploy (Railway)
`railway.toml` builds and starts the app. The Railway service Root Directory must be the repository root. `kaleido==0.2.1` and `plotly<6.1` are pinned so PNG export works without a Chrome install.

Note below the dashboard -
This dashboard displays regulatory agency budget outlays by fiscal year, from the latest Regulators' Budget report. Use the drop-down menu to select one or more regulatory subcategories to display.
