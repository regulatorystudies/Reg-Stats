# Cumulative economically significant rules by administrations

This dashboard helps the user with keeping the track of cumulative economically significant rules made by administration by giving options to choose the aPNG format.
Also the created custom plot can be downloaded using the given data download button in PNG format.<br>
Data download button is also provided in the dashboard.

## Railway deployment

Railway often runs `dash1.py` from `/app/dash1.py` when the service **Root Directory** is `dashboards/cumulative_econ_sig_rules`. That layout has no `parents[2]` repo root, so the app must find data another way.

**Option A (recommended): deploy from repo root**

1. Set Railway **Root Directory** to the repository root (leave blank).
2. Set the start command to:

   `streamlit run dashboards/cumulative_econ_sig_rules/dash1.py --server.port $PORT --server.address 0.0.0.0`

3. Ensure `requirements.txt` for this app is used (copy or point Railway at `dashboards/cumulative_econ_sig_rules/requirements.txt`).

**Option B: keep Root Directory on this folder**

Include the CSV in the deploy image, e.g. copy to:

`dashboards/cumulative_econ_sig_rules/data/cumulative_es_rules/cumulative_econ_significant_rules_by_presidential_month.csv`

(source: `data/cumulative_es_rules/cumulative_econ_significant_rules_by_presidential_month.csv` in the repo).

**Option C: environment variables**

| Variable | Purpose |
|----------|---------|
| `CUMULATIVE_ES_RULES_CSV` | Absolute path to the CSV file |
| `DATA_ROOT` | Repo root if data lives under `data/` or `charts/` |
| `STYLE_DIR` | Directory containing logo and Avenir font (optional) |

Logo/font are optional; the app runs without them but uses system fonts and skips the logo.