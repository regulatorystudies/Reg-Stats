# Dashboards: Handover and Troubleshooting Guide

This guide is for the next person who looks after the RegStats interactive dashboards. It covers:

- what each dashboard does and which files it reads
- how the environments and deployments are set up
- what tends to break, and how to fix it
- what is likely to break when Python or a library is upgraded
- the places where this repo does things differently from common practice

It was written in October 2026 from the code on the `reg-budget` branch. If the code has changed since then, trust the code over this guide.

> **Short version:** every dashboard is a single Streamlit Python file. It reads a CSV from `data/`, draws a Plotly chart, and runs on Railway. Most problems fall into one of three groups: **the app can't find a file**, **the data changed shape**, or **a library version changed**. Section 7 is a symptom → fix table.

---

## Contents

1. [The big picture](#1-the-big-picture)
2. [Quick reference table](#2-quick-reference-table)
3. [What all dashboards have in common](#3-what-all-dashboards-have-in-common)
4. [Environments and deployment (Railway)](#4-environments-and-deployment-railway)
5. [Dashboard by dashboard](#5-dashboard-by-dashboard)
6. [What can break when versions change](#6-what-can-break-when-versions-change)
7. [Troubleshooting playbook](#7-troubleshooting-playbook)
8. [Unusual practices you should know about](#8-unusual-practices-you-should-know-about)
9. [Routine jobs: checklists](#9-routine-jobs-checklists)
10. [Known issues and to-do list](#10-known-issues-and-to-do-list)

---

## 1. The big picture

```
 data/  (CSV files, updated by scripts or by hand)
   │
   │  the app reads the CSV every time a page loads (or from a cache, see §3.5)
   ▼
 dashboards/<name>/<app>.py   (a Streamlit app: Python that turns into a web page)
   │
   │  deployed as its own "service" on Railway
   ▼
 Public URL, embedded on the GW Regulatory Studies Center website
```

Key ideas:

- **Dashboards never create data.** They only read CSV files that already exist in `data/`. A wrong number on a dashboard is almost always a problem in the CSV, not in the dashboard.
- **Each dashboard is its own Railway service.** Seven dashboards means seven services, each with its own build and its own installed libraries.
- **Every dashboard is deployed from the repository root**, not from its own folder. This is the single most important deployment rule (see §4.2).
- **The look and feel come from shared assets** in `charts/style/`: the GW logo (`gw_ci_rsc_2cs_pos.png`) and the Avenir font (`a-avenir-next-lt-pro.otf`). If the app can't find them, it still runs, but with no logo and a plain font.

**Words used in this guide:**

| Word | Meaning |
|------|---------|
| Streamlit | The Python library that turns a script into a web page. The script re-runs from top to bottom every time a user clicks something. |
| Plotly | The charting library. It draws the interactive charts. |
| Kaleido | A helper Plotly uses to save a chart as a PNG. It contains its own hidden copy of Chrome. |
| Railway | The hosting service that runs the dashboards on the internet. |
| Nixpacks | Railway's build tool. It reads your files and works out how to install and start the app. |
| `requirements.txt` | The list of Python libraries (and versions) to install. |
| `railway.toml` | Tells Railway how to build and start one dashboard. |
| Pinning | Fixing a library to an exact version (`kaleido==0.2.1`) or a range (`plotly<6.1`) so upgrades can't break the app without warning. |

---

## 2. Quick reference table

| Dashboard (folder) | App file | Data it reads (under `data/`) | Deploy config | Saves PNG? |
|---|---|---|---|---|
| `cfr_by_title` | `cfr_by_title.py` | `cfr_pages/by_title/cfr_words_pages_by_title.csv` | `railway.toml` ✅ | No (CSV only) |
| `cumulative_econ_sig_rules_by_admin` | `cumulative_econ_sig_rules.py` | `cumulative_es_rules/cumulative_econ_significant_rules_by_presidential_month.csv` | ⚠️ **no `railway.toml`**, only a `Procfile` | Yes |
| `econ_sig_rules_by_agency` | `by_agency_econ_rules.py` | `es_rules/agency_econ_significant_rules_by_presidential_year.csv` and `es_rules/econ_significant_rules_by_presidential_year.csv` | `railway.toml` ✅ | Yes |
| `fr_rules_by_agency` | `by_agency_rules.py` | `fr_rules/agency_federal_register_rules_by_presidential_year.csv` and `fr_rules/federal_register_rules_by_presidential_year.csv` | `railway.toml` ✅ | Yes |
| `monthly_sig_rules_by_admin` | `files/monthly_sig_rules.py` (note the extra `files/` folder) | `monthly_es_rules/monthly_significant_rules_by_admin.csv` | `files/railway.toml` ✅ | Yes |
| `reg_budget_personnel` | `reg_budget_personnel.py` | `reg_budget/regulatory_agency_personnel_by_fy.csv` and `reg_budget/by_regulatory_subcategory/reg_subcategory_regulatory_agency_personnel_by_fy (1).csv` | `railway.toml` ✅ | Yes |
| `reg_budget_outlays` | `reg_budget_outlays.py` | `reg_budget/regulatory_agency_budget_outlays_by_fy.csv` and `reg_budget/by_regulatory_subcategory/reg_subcategory_regulatory_agency_budget_outlays_by_fy.csv` | `railway.toml` ✅ | Yes |

Logo and font for all of them: `charts/style/gw_ci_rsc_2cs_pos.png` and `charts/style/a-avenir-next-lt-pro.otf`.

**Run any dashboard on your own computer.** Always run from the **repository root**:

```bash
pip install -r dashboards/reg_budget_outlays/requirements.txt
streamlit run dashboards/reg_budget_outlays/reg_budget_outlays.py
```

Swap in the folder and file name of the dashboard you want. It opens at `http://localhost:8501`.

---

## 3. What all dashboards have in common

### 3.1 How an app finds its files

Each app has to find `data/` and `charts/style/`, which live **outside** the dashboard folder. The apps use three different methods:

| Method | Used by | How it works | Weak spot |
|---|---|---|---|
| **Fixed "go up N folders"** | `econ_sig_rules_by_agency`, `fr_rules_by_agency` (`parents[2]`), `monthly_sig_rules_by_admin` (`parents[3]`), `cfr_by_title` (`parent.parent`) | Starts from the `.py` file and goes up a fixed number of folders to reach the repo root. | Breaks if the file moves to a different depth, or if Railway's Root Directory is set to the dashboard folder. |
| **Search upward, with an override** | `reg_budget_personnel`, `reg_budget_outlays`, `cumulative_econ_sig_rules_by_admin` | Walks up from the `.py` file until it finds the CSV. The `DATA_ROOT` environment variable can override this. | Hardly any. This is the most robust method. |
| **Local copy fallback** | `cfr_by_title`, `cumulative_econ_sig_rules_by_admin` | Also checks for a copy of the CSV, font or logo next to the `.py` file. | A stale copy left in the folder can be used without anyone noticing. |

If you ever restructure folders, the "search upward" method is the one to copy.

### 3.2 Branding: colours, font, logo

- **Font:** the Avenir `.otf` file is read and embedded straight into the page (base64 inside a CSS `@font-face`). The app does not download the font from anywhere. If the file is missing, the browser falls back to a system font.
- **Colours:** every app has its own copy of the GW colour codes (`#033C5A` GW blue, `#A69362` buff, `#E8DDC6` light buff background, and so on). They are **not shared**. If the brand colours change, update every `.py` file.
- **Logo:** embedded inside the chart image (so it shows up in the downloaded PNG), and in `cfr_by_title` it is also in the page footer.

### 3.3 Custom CSS (the biggest source of "it looks wrong after an upgrade")

Every app injects a large `<style>` block through `st.markdown(..., unsafe_allow_html=True)`. That CSS targets Streamlit's **internal** HTML names, for example:

- `[data-testid="stHeader"]`, `[data-testid="stMainBlockContainer"]`, `[data-testid="stToolbar"]`
- `[data-baseweb="select"]`, `[data-baseweb="popover"]`, `[data-baseweb="tag"]`
- `[class*="css"]`, `[class*="st-emotion"]`

Streamlit does **not** promise to keep these names the same between versions. After a Streamlit upgrade the app will still *work*, but colours, fonts, dropdowns or spacing may quietly go back to Streamlit's defaults. That is the main reason Streamlit is pinned to exactly `1.54.0`.

### 3.4 Downloads

Most dashboards offer three download buttons:

| Button | How it is made | Needs |
|---|---|---|
| Static Image (PNG) | `fig.to_image(...)`, which goes through **Kaleido** | Kaleido working (see §4.4) |
| Interactive Plot (HTML) | `fig.write_html(..., include_plotlyjs="cdn")` | Nothing on the server. The downloaded file loads Plotly from the internet when opened, so it **needs internet to view**. |
| Data (CSV) | Sends the raw CSV file, or a cleaned table | Nothing special |

**Important:** the PNG is built **every time the page re-runs**, before anyone clicks the button. Streamlit download buttons need their data up front. So if Kaleido is broken, the **whole page** fails to load, not just the PNG button. This is the most common way a dependency problem takes a dashboard completely down.

### 3.5 Caching: why new data sometimes doesn't show up

| Dashboard | Caching | What it means |
|---|---|---|
| `cfr_by_title`, `econ_sig_rules_by_agency`, `fr_rules_by_agency` | `@st.cache_data`, with no expiry | The CSV is read **once** after the app starts. If the CSV changes on a running server, the app keeps showing the old data **until it restarts or is redeployed**. |
| `monthly_sig_rules_by_admin` | `@st.cache_data`, keyed on the file's last-modified time | It notices a changed file by itself. |
| `cumulative_…`, `reg_budget_personnel`, `reg_budget_outlays` | No caching | Reads the CSV on every page load. |

On Railway this mostly doesn't matter, because data changes arrive through a git push, and a push triggers a redeploy, which restarts the app. It matters when you run the app locally and edit a CSV: **restart Streamlit**.

### 3.6 Dates shown on the charts

There are two kinds of date, and they are easy to confuse:

- **"Accessed: <today>"** (`cumulative`, `econ`, `fr`, `monthly`) is just today's date, the day the chart was viewed. It says **nothing about how fresh the data is**.
- **"Updated: <date>"**:
  - `reg_budget_personnel` and `reg_budget_outlays` use the **file's last-modified time**. ⚠️ Git does not keep file timestamps, so on Railway this becomes **the date of the deploy**, not the date the data changed. Any redeploy (even a code-only change) moves this date forward.
  - `cfr_by_title` uses the `last_scraped_at` column **inside** the CSV. This one is reliable.

---

## 4. Environments and deployment (Railway)

### 4.1 How one dashboard gets deployed

```
git push  ─►  Railway sees the commit
                 │
                 ├─ reads dashboards/<name>/railway.toml   (if set as the "Config file path")
                 ├─ BUILD:  Nixpacks sets up Python, then runs
                 │          pip install -r dashboards/<name>/requirements.txt
                 ├─ START:  streamlit run dashboards/<name>/<app>.py --server.port=$PORT ...
                 └─ HEALTH: checks /_stcore/health ; restarts the app if it crashes
```

A typical `railway.toml`:

```toml
[build]
builder = "nixpacks"
buildCommand = "pip install -r dashboards/reg_budget_outlays/requirements.txt"

[deploy]
startCommand = "streamlit run dashboards/reg_budget_outlays/reg_budget_outlays.py --server.port=$PORT --server.address=0.0.0.0 --server.headless=true"
healthcheckPath = "/_stcore/health"
restartPolicyType = "on_failure"
```

- `$PORT` is supplied by Railway. Never hard-code a port.
- `--server.address=0.0.0.0` lets the app accept outside traffic. Without it the app only listens to itself, and the site never loads.
- `--server.headless=true` stops Streamlit from trying to open a browser or ask for an email on first run.
- `/_stcore/health` is Streamlit's built-in "I'm alive" page. ⚠️ It only shows that the **server** started. It **does not run your script**. A dashboard can pass the health check and still show a red error to every visitor. Always open the real page after a deploy.

### 4.2 The Railway settings that matter (check these in the Railway web UI)

These settings live **in Railway, not in git**. Nobody can see them from the code, so write down what each service uses.

| Setting | Must be | Why |
|---|---|---|
| **Root Directory** | **empty / repository root** | The apps read `data/` and `charts/style/` from the repo. If Root Directory is the dashboard folder, those folders are not in the build, and you get "Data file not found". |
| **Config file path** | `dashboards/<name>/railway.toml` (for monthly: `dashboards/monthly_sig_rules_by_admin/files/railway.toml`) | Railway only finds `railway.toml` at the root by default. Each service has to be told which one is its own. |
| **Branch** | the branch you deploy from (normally `main`) | A push to that branch triggers a redeploy. |
| **Variables** (optional) | `DATA_ROOT`, `CUMULATIVE_ES_RULES_CSV`, `STYLE_DIR`, `NIXPACKS_PYTHON_VERSION` | See §4.5 and §4.6. |
| **Watch paths** (optional) | e.g. `dashboards/reg_budget_outlays/**`, `data/reg_budget/**` | If these are not set, **every push to the branch redeploys all seven dashboards**. That's harmless but slow. |

### 4.3 Files that look like settings but Railway ignores

Several folders contain files left over from other hosting platforms. With the current setup (Nixpacks, Root Directory = repo root, explicit `startCommand`), **Railway does not use them**:

| File | Where | Was meant for | Used today? |
|---|---|---|---|
| `Procfile` | most folders | Heroku-style hosting, or Railway when there is no `startCommand` | **No.** `railway.toml`'s `startCommand` wins. Several Procfiles also point at **old paths that no longer exist** (`dashboards/by_agency/…`, `dashboards/by_agency_rules/…`, `dashboards/monthly_sig_rules/files/…`). |
| `packages.txt` (contains `chromium`) | `cumulative_…`, `monthly_…` | Streamlit Community Cloud (it installs system packages from this file) | **No.** Railway ignores it. Kaleido 0.2.1 brings its own Chrome anyway. |
| `runtime.txt` (`python-3.11`) | `cumulative_…`, `monthly_…` | Heroku / Streamlit Cloud, to choose the Python version | **No.** Nixpacks only reads `runtime.txt` / `.python-version` from the **Root Directory** (the repo root), and the repo root has neither. See §4.6. |
| `__init__.py` | `cfr_by_title`, `monthly_…` | Making folders importable as packages | Not needed by the apps. |

**Exception:** `cumulative_econ_sig_rules_by_admin` has **no `railway.toml`**. Its service is configured entirely in the Railway UI, or through its `Procfile` (which uses a path relative to the folder, so it only works if Root Directory = that folder). Check that service's settings in Railway before you touch it, and consider adding a `railway.toml` copied from `reg_budget_outlays` (see §10).

### 4.4 Pinned versions, and why each one is pinned

| Library | Pinned to | Why |
|---|---|---|
| `streamlit` | `==1.54.0` (all dashboards) | The custom CSS (§3.3) depends on Streamlit's internal HTML. A new version can silently undo the styling. |
| `kaleido` | `==0.2.1` | **This is the important one.** Kaleido **0.2.1 carries its own built-in Chrome**, so PNG export works on a bare Railway server. Kaleido **1.x does not**: it needs Google Chrome installed on the server, and without it every page that builds a PNG crashes (§3.4). |
| `plotly` | `<6.1` | Newer Plotly versions expect Kaleido 1.x. They warn about, and later stop supporting, Kaleido 0.2.1. Keeping Plotly below 6.1 keeps the pair compatible. **Plotly and Kaleido must be changed together.** |
| `altair` | `<5` | Copied over from older dashboards. No current dashboard uses Altair. |
| `pandas`, `numpy`, `matplotlib`, … | **not pinned** in most files | Every new build gets the latest version, so a pandas or numpy release can change behaviour without any change in this repo (see §6). |

**Which dashboards have the Kaleido / Plotly pin:**

| Folder's `requirements.txt` | `plotly<6.1` | `kaleido==0.2.1` |
|---|---|---|
| `econ_sig_rules_by_agency`, `fr_rules_by_agency`, `reg_budget_personnel`, `reg_budget_outlays`, `cumulative_…`, `monthly_…/files` | ✅ | ✅ |
| `cfr_by_title` | `plotly>=5.18` (not needed: it has no PNG export) | not installed |
| `monthly_sig_rules_by_admin/requirements.txt` (the **outer** one, not under `files/`) | ❌ unpinned | ❌ unpinned |
| repo-root `requirements.txt` | ❌ unpinned | ❌ unpinned |

⚠️ **The root `requirements.txt` trap.** There is a `requirements.txt` at the repo root (`pandas, numpy, plotly, streamlit>=1.30, …, kaleido`) with **nothing pinned**. Because every service builds from the repo root, Nixpacks will probably install this file **automatically first**, which gets the latest Plotly and Kaleido 1.x. Then the dashboard's own `buildCommand` installs its own `requirements.txt` on top and downgrades them to the pinned versions. It usually works out, but:

- builds are slower (everything is installed twice)
- if someone ever removes the `buildCommand`, the dashboards silently get the **unpinned** versions, and PNG export (and with it the whole page) breaks

To check, look in a Railway build log for two `pip install` steps. Don't change the root file without checking what else in the repo uses it.

### 4.5 Environment variables

| Variable | Used by | What it does |
|---|---|---|
| `PORT` | all | Set by Railway automatically. Don't set it yourself. |
| `DATA_ROOT` | `reg_budget_personnel`, `reg_budget_outlays`, `cumulative_…` | Forces "this folder is the repo root". Use it when the app can't find `data/`. |
| `CUMULATIVE_ES_RULES_CSV` | `cumulative_…` only | Full path to that one CSV. |
| `STYLE_DIR` | `cumulative_…` only | Folder holding the logo and font. ⚠️ Because of a small bug, setting this switches off the other places the app looks (see §5.2). |
| `NIXPACKS_PYTHON_VERSION` | Railway build | **Recommended:** set it, e.g. `3.11`, so the Python version can't change under you (see §4.6). |

There are **no secrets** (API keys, passwords) in any dashboard. Everything reads public CSVs.

### 4.6 Which Python version runs in production?

Nobody has fixed this explicitly. The `runtime.txt` files are ignored (§4.3), so Railway uses **Nixpacks' default Python**, which can change when Railway updates Nixpacks. Your laptop may be on another version again (this guide was checked on Python 3.10 locally).

**Recommendation:** in each Railway service, set the variable `NIXPACKS_PYTHON_VERSION=3.11`, or another version you have tested. Then production stops drifting.

Also note that **Railway is moving new services from Nixpacks to its newer builder, "Railpack"**. The `builder = "nixpacks"` line in each `railway.toml` keeps the old builder for now. If Railway ever removes Nixpacks, those lines will need updating, and build behaviour (Python version detection, the root `requirements.txt` auto-install) may change.

### 4.7 Your computer vs production

Your local environment is probably **not** the same as Railway's. For example, the laptop this guide was written on had `plotly 6.3.1` and `kaleido 1.2.0` (with Chrome installed), while production uses `plotly<6.1` and `kaleido 0.2.1`. An app can work on your laptop and fail on Railway, or the other way round.

To copy production exactly, use a fresh virtual environment for each dashboard:

```bash
python3.11 -m venv .venv-outlays
source .venv-outlays/bin/activate
pip install -r dashboards/reg_budget_outlays/requirements.txt
streamlit run dashboards/reg_budget_outlays/reg_budget_outlays.py
```

---

## 5. Dashboard by dashboard

Each entry covers: what the user sees, which files it reads, what happens to the data, and its quirks (things that will catch you out).

### 5.1 `cfr_by_title`: CFR word and page counts by title

**What it shows.** A grid of 50 small sparkline tiles, one for each title of the Code of Federal Regulations. Each tile shows the % change in words or pages over a chosen year range: green = up, red = down, grey = within ±2%. Users choose the metric, the year range and the sort order, and can download the CSV.

**Data.** `data/cfr_pages/by_title/cfr_words_pages_by_title.csv`. If that file is missing, it also looks for a copy next to the `.py` file.

**What happens to the data.**
- Only rows where `year_complete` is true are used. The newest year is hidden until all 50 titles are published for it, which can take most of the following year. This is on purpose.
- Pages only exist from 2000 on, and words from 1970 on.
- "Updated" comes from the `last_scraped_at` column.

**Quirks.**
- **Hardcoded lists:** `CFR_TITLES` (names of titles 1–50) and `TITLE_NOTES` (the "ⓘ" caveats) are written in the code. If a title is renamed or a new caveat is needed, edit the `.py` file.
- **Required columns:** `year`, `title`, `year_complete`, plus `pages` / `words`. If the scraper renames any of them, the app crashes with a `KeyError`.
- **Has its own Streamlit theme file:** `cfr_by_title/.streamlit/config.toml` sets the border colour. It must match `BORDER` in the `.py` file. Streamlit 1.54 reads a `.streamlit` folder next to the script, but older Streamlit versions only read it from the folder you launch from, so a downgrade would quietly lose this setting.
- **No PNG export**, so it doesn't need Kaleido. Its `requirements.txt` is the smallest.
- **Cached data** (§3.5): restart after a CSV change.
- **Most of the CSS has detailed comments explaining why it is there.** Read them before changing styling.

### 5.2 `cumulative_econ_sig_rules_by_admin`: cumulative economically significant rules

**What it shows.** One line per presidential administration, showing the running total of economically significant final rules by month in office. Users can pick administrations, switch to "first year only", and download PNG / HTML / CSV. A dashed line at month 48 marks the end of a first term.

**Data.** `data/cumulative_es_rules/cumulative_econ_significant_rules_by_presidential_month.csv`. It also looks in `charts/data/`, next to the app, and in the path given by `CUMULATIVE_ES_RULES_CSV`.

**What happens to the data.**
- The columns are **renamed by position**: `["month", "months_in_office", "Reagan", "Bush_41", "Clinton", "Bush_43", "Obama", "Trump_45", "Biden", "Trump_47"]`.
- Rows 97–100 are dropped (left over from an R script that had footer rows). In the current file this does nothing.

**Quirks.**
- ⚠️ **A new administration breaks it.** When a new president's column is added to the CSV (expected around January 2029), the column count goes from 10 to 11, and the app crashes with *"Length mismatch: Expected axis has 11 elements, new values have 10 elements"*. Fix: add the new name to `admins`, `admin_labels` and `admin_colors` (also pick a colour).
- **No `railway.toml`.** See §4.3. Its `README.md` also refers to old names (`dash1.py`, `dashboards/cumulative_econ_sig_rules`) that no longer exist.
- **`STYLE_DIR` bug:** in `_resolve_style_asset`, operator precedence means that when `STYLE_DIR` is set, **only** that folder is searched. Harmless while `STYLE_DIR` is not set.
- **`"\$100 million"`** in the description text uses a backslash escape that recent Python versions warn about (§6.1). It is harmless for now.
- It works out a "data updated" date (`data_updated_date`) but never shows it. The chart shows "Accessed: today".

### 5.3 `econ_sig_rules_by_agency`: economically significant rules by agency

**What it shows.** A bar chart of economically significant final rules per presidential year (Feb 1 – Jan 31), coloured by the president's party. A dropdown switches between "All Agencies (Total)" and a single agency. It offers four downloads: PNG, HTML, total CSV, and by-agency CSV.

**Data.**
- `data/es_rules/agency_econ_significant_rules_by_presidential_year.csv` (by agency)
- `data/es_rules/econ_significant_rules_by_presidential_year.csv` (total)

**What happens to the data.**
- Columns are **renamed by position**: agency file → `name, acronym, year, party, rules`; total file → `year, party, rules`. A new, removed or reordered column will mislabel the data or crash the app.
- `dropna()` removes **any row with a blank cell**. A blank party or acronym quietly hides that row.
- The acronym `STATE` is renamed to `DOS`.

**Quirks.**
- The "By Agency" CSV download is the **cleaned** table, not the raw file (column names differ from the file in `data/`).
- **Cached data** (§3.5).
- Party colours exist for `Democratic` and `Republican` only. Any other value is drawn in the Democratic colour.
- Accessibility extras: a skip link, ARIA labels, and a screen-reader summary. Keep them if you rewrite.
- The notebook `agency_econ_significant_rules_by_presidential_year.ipynb` in the folder is development scratch work. The app doesn't use it.
- The comments in `railway.toml` mention old paths (`dashboards/by_agency/…`). The actual commands are correct.

### 5.4 `fr_rules_by_agency`: Federal Register rules by agency

**What it shows.** Line chart of **final** (solid navy) and **proposed** (dashed light blue) rules per presidential year. A dropdown switches between "All Agencies (Total)" and one agency. It offers four downloads.

**Data.**
- `data/fr_rules/agency_federal_register_rules_by_presidential_year.csv` (used for **all** charts)
- `data/fr_rules/federal_register_rules_by_presidential_year.csv` (used **only** for the "Data – Total (CSV)" download)

**What happens to the data.**
- Columns are renamed by position: `agency, acronym, name, year, final, proposed`.
- `dropna()` drops rows with blanks. For example, agencies with no acronym, such as the Assassination Records Review Board, are removed.
- Leading years of zeros are trimmed from each line.
- Only agencies in the hardcoded `AGENCIES` list **and** with at least 10 rules in some year appear in the dropdown.

**Quirks.**
- ⚠️ **The "Total" chart and the "Total" CSV don't match.** The chart total is **calculated by adding up the agency rows**. The downloaded total CSV is a separate file. A rule published jointly by two agencies is counted once per agency, so the chart total comes out higher. Example for 2024: chart = 3,130 final rules, CSV = 3,004. Decide which one is correct, and either plot the total file or explain the difference in the footnote.
- **Adding an agency** means editing the `AGENCIES` list in the code.
- **Cached data** (§3.5).
- The `Procfile` points at `dashboards/by_agency_rules/…`, which no longer exists (it is ignored anyway, §4.3).

### 5.5 `monthly_sig_rules_by_admin`: monthly significant rules by administration

**What it shows.** Stacked bars of significant final rules per month for one administration: economically significant (blue) + other significant (buff). A slider shows only the first N months. It offers PNG, HTML and CSV downloads.

**Data.** `data/monthly_es_rules/monthly_significant_rules_by_admin.csv`. Required columns: `Admin, Year, Month, Economically Significant, Other Significant`.

**Folder layout (unusual).** The real app is in `monthly_sig_rules_by_admin/files/`. That folder has its own `requirements.txt`, `railway.toml`, `runtime.txt`, `packages.txt` and `Procfile`. The **outer** folder has a second `requirements.txt`, `runtime.txt` and `packages.txt` that are **not used**, and its `requirements.txt` is **unpinned**. Don't point Railway at the outer one.

**What happens to the data.**
- `Year` + `Month` are combined into a date (`format="mixed"`, which needs pandas 2.0 or later).
- The data is cached, but the cache refreshes by itself when the CSV changes.

**Quirks.**
- ⚠️ **The `utilis` import is a trap.** The app starts with `from utilis.style import GW_COLORS`. Importing `utilis/style.py` loads `plotnine`, `pyprojroot`, `Pillow` and `matplotlib`, then tries to open a logo at the wrong path (`/utilis/style/...`). It **always** fails with `FileNotFoundError`, which the app catches, and then it uses its own built-in colours. So:
  - the app **needs** `plotnine`, `pyprojroot`, `Pillow` and `matplotlib` installed **only so that this failing import fails "the right way"**. Remove one of them and the error becomes `ModuleNotFoundError`, which is **not** caught, and the app crashes.
  - this import only works when the app is launched with `streamlit run` (which puts `files/` on Python's import path). Some test tools don't do that.
  - The simplest fix is to delete the `try/except` and keep only the built-in colour dictionary. It is already the one in use.
- `utilis/local_utilis.py` uses `pd.np`, which pandas 2 removed. The app never imports this file. It is dead code.
- ⚠️ **New administration problem:** the slider is `min_value=6, max_value=<months of data>`. In the first months of a new term (fewer than 7 months of data), the slider is invalid and Streamlit shows an error. The list of administrations (`admins = ["Trump 47", "Biden", …]`) is also hardcoded, and the default view is `"Trump 47"`. Both need editing when a new president starts.
- `DATA_ROOT = parents[3]` relies on the extra `files/` level.

### 5.6 `reg_budget_personnel`: regulatory agency personnel

**What it shows.** Line chart of full-time-equivalent staff (in **thousands**) by fiscal year for regulatory subcategories, picked with a multiselect. "Deselect All" clears the chart. It offers PNG, HTML and CSV downloads.

**Data.**
- `data/reg_budget/regulatory_agency_personnel_by_fy.csv` ("combined" file: Economic, Social, TSA)
- `data/reg_budget/by_regulatory_subcategory/reg_subcategory_regulatory_agency_personnel_by_fy (1).csv` (subcategories)

**What happens to the data (`_clean_numeric`).**
- Empty "Unnamed" columns are dropped. The combined CSV has about 250 empty trailing columns from an Excel export.
- Hyphens in column names become underscores (`industry-specific_regulation` → `industry_specific_regulation`).
- Rows with no numeric `year` are dropped. This removes footnote lines such as "* Outlays are in…".
- Commas are stripped (`"18,290"` → 18290), blanks become 0, and everything is divided by 1,000.

**Quirks.**
- ⚠️ **File name with `" (1)"`** in it: that is a browser's "downloaded twice" name. If someone renames the file to the clean name, update `_SUBCAT_CSV` in the code too.
- **The combined file is never actually plotted.** The main view is the subcategory chart (all selected by default). With nothing selected, an empty chart with a "Please select" message appears. The combined file is only used for the "Updated" date and a (currently unused) CSV choice.
- The "Data (CSV)" button **always** sends the subcategory file.
- "Updated" = file modified time = **deploy date on Railway** (§3.6).
- **JavaScript hack:** a small script is injected into the page (`st.components.v1.html`) that moves the chart legend into a different layer of Plotly's SVG, so the hover line doesn't draw over the legend. It depends on Plotly's internal structure (`.svg-container > svg.main-svg`, at least 3 layers). After a Plotly upgrade the legend may go back to sitting under the hover line. It is cosmetic only.
- `st.plotly_chart(..., theme=None)` is on purpose: Streamlit's theme would change the chart font and cause hover-box text to be cut off.
- Subcategory labels and colours live in `SUBCAT_LABELS` / `SUBCAT_COLORS`. **A new CSV column won't appear until it is added there.**

### 5.7 `reg_budget_outlays`: regulatory agency budget outlays

**What it shows.** Same design and code as `reg_budget_personnel`, but for budget outlays, shown in **billions of 2012 U.S. dollars** (the CSVs are in millions; the app divides by 1,000).

**Data.**
- `data/reg_budget/regulatory_agency_budget_outlays_by_fy.csv`
- `data/reg_budget/by_regulatory_subcategory/reg_subcategory_regulatory_agency_budget_outlays_by_fy.csv`

**Differences from personnel.**
- Y-axis step of 10 (billions) instead of 50.
- Hover shows `$61.3B` instead of `61.3k`.

**Homeland Security w/o TSA** (both apps): the CSV column `homeland_security_without_TSA` = `homeland_security` − `tsa` from the main file (TSA is 0 before 2002). Recalculate it whenever either file is updated.

**Quirks.** The same as personnel (§5.6). The two files are almost line-for-line identical. **A fix in one usually belongs in the other.** Run `diff dashboards/reg_budget_personnel/reg_budget_personnel.py dashboards/reg_budget_outlays/reg_budget_outlays.py` to see every difference.

---

## 6. What can break when versions change

### 6.1 Python upgrades

| Change | Effect here | What to do |
|---|---|---|
| Python 3.12+ warns about invalid escapes like `"\$"` | `cumulative_econ_sig_rules.py` prints a `SyntaxWarning`. A future Python may make it an error. | Change `\$` to `\\$`, or use a raw string. |
| New Python released, older one retired | Libraries pinned to old versions (Streamlit 1.54.0, Kaleido 0.2.1) may not offer a build for the newest Python | Upgrade Python and the pinned libraries **together**, and test locally first (§9.4). |
| Production Python silently changes (Nixpacks default) | Anything can change without a commit | Set `NIXPACKS_PYTHON_VERSION` (§4.6). |

Kaleido 0.2.1's package works on any Python 3 version. Its risk comes from the operating system (it carries an old Chrome), not from Python itself.

### 6.2 Library upgrades

| Library | What will likely break | Symptom | Fix |
|---|---|---|---|
| **Streamlit** (pinned 1.54.0) | CSS selectors (§3.3); `use_container_width=` (already deprecated: Streamlit prints "Please replace `use_container_width` with `width`"); `st.components.v1.html` (personnel/outlays) | Styling falls back to grey defaults; deprecation warnings in logs; eventually a `TypeError` once the old argument is removed | Replace `use_container_width=True` with `width="stretch"`. Re-check every page visually. Update CSS selectors with the browser's "Inspect element". |
| **Plotly** (pinned <6.1) | Needs Kaleido 1.x | PNG export fails → **whole page fails** (§3.4) | Upgrade Plotly and Kaleido together and install Chrome on the server (Kaleido 1.x has `kaleido.get_chrome_sync()`; Plotly ships a `plotly_get_chrome` command), or keep the pins. |
| **Kaleido** | 1.x has no built-in Chrome | `RuntimeError`/`ChromeNotFoundError` when building the PNG | Keep `==0.2.1`, or follow the line above. |
| **pandas** (unpinned!) | pandas 3.0 turned on "Copy-on-Write" and a new default text type; old APIs removed (`pd.np` is already gone) | Odd dtype errors, warnings, or `AttributeError` | Pin `pandas<3` in each `requirements.txt` until tested. `format="mixed"` (monthly) needs pandas 2.0 or later. |
| **numpy** (unpinned) | numpy 2 removed old aliases | `AttributeError: module 'numpy' has no attribute ...` | Current code only uses basic numpy, so the risk is low. |
| **plotnine / pyprojroot / Pillow / matplotlib** | Only matter to `monthly` because of the `utilis` trap (§5.5) | `ModuleNotFoundError` / `ImportError` crash on monthly | Remove the `utilis` import (§10). |

### 6.3 Data changes that break the code (more common than version changes!)

| Change in the CSV | Dashboards affected | Symptom |
|---|---|---|
| Column added, removed or reordered | `econ_…`, `fr_…`, `cumulative_…` (rename by position) | `Length mismatch` error, or worse, **silently wrong labels** |
| Column renamed | `cfr_…`, `monthly_…`, reg budget | `KeyError: '<column>'` |
| New president | `cumulative_…`, `monthly_…` | Crash (cumulative) / missing from dropdown and slider error (monthly) |
| New agency | `fr_…` | Not shown until added to `AGENCIES` |
| New subcategory | reg budget | Not shown until added to `SUBCAT_LABELS` and `SUBCAT_COLORS` |
| File renamed or moved | all | "Data file not found" |
| Numbers saved with commas, or as text | most apps handle it with `to_numeric(errors="coerce")` | Bad values silently become 0 or are dropped. **Check charts after every data update.** |

---

## 7. Troubleshooting playbook

**Step 0, always:** open the Railway service → **Deployments** → latest deploy → **Build Logs** and **Deploy Logs**. Then open the live page. Then try to reproduce on your own machine (§4.7).

| Symptom | Likely cause | Fix |
|---|---|---|
| Red box: **"Data file not found"** | Railway Root Directory set to the dashboard folder; CSV renamed or moved | Set Root Directory to the repo root (§4.2). Check that the path in the `.py` file matches the real file. As a last resort, set `DATA_ROOT`. |
| Whole page shows an error mentioning **kaleido / Chrome / `to_image`** | Kaleido 1.x installed (pins lost or overridden) | Check that the `requirements.txt` used still has `kaleido==0.2.1` and `plotly<6.1`. Check the build log for which versions actually got installed. |
| **Health check passes but the page is broken** | The health check doesn't run the script (§4.1) | Read the Deploy Logs while loading the page. |
| **Build fails** during `pip install` | A version can't be found for this Python; network hiccup | Re-deploy once. If it fails again, check the Python version (§4.6) and the pins. |
| **App starts, then Railway keeps restarting it** | Crash on start; wrong `startCommand` path | Check the path in `railway.toml` against the real file. |
| **Dashboard shows old data** | Not redeployed, or a cached app (§3.5) | Confirm the CSV commit reached the deployed branch, then redeploy or restart. |
| **"Updated" date jumped to today** | Reg budget dates use file time = deploy time (§3.6) | Expected behaviour. Fixing it means storing the date in the CSV, like `cfr_by_title` does. |
| **Fonts look plain / no logo** | `charts/style/` not found (Root Directory again), or file renamed | Same as "Data file not found". |
| **Colours, dropdowns or spacing look wrong** after an upgrade | Streamlit changed its internal HTML (§3.3) | Pin Streamlit back, or update the CSS selectors. |
| **`Length mismatch` / `KeyError`** | CSV columns changed (§6.3) | Compare the CSV header with what the code expects. |
| **Monthly: `No module named 'utilis'` or `'plotnine'`** | The `utilis` trap (§5.5) | Remove the `utilis` import, or make sure `plotnine`, `pyprojroot`, `Pillow` and `matplotlib` are installed. |
| **Monthly: slider error** | New administration with fewer than 7 months of data (§5.5) | Lower `min_value`, or hide the slider when there are few months. |
| **FR total numbers don't match the downloaded CSV** | Known difference (§5.4) | Not a deployment problem; a data definition decision. |
| **Downloaded HTML chart is blank** | It loads Plotly from the internet | Open it while online, or switch to `include_plotlyjs=True` (larger file). |
| **Works locally, fails on Railway (or the reverse)** | Different library versions (§4.7) | Recreate production in a fresh venv. |

**Quick local smoke test.** This loads one dashboard without a browser and prints any error:

```bash
python -c "
from streamlit.testing.v1 import AppTest
at = AppTest.from_file('dashboards/reg_budget_outlays/reg_budget_outlays.py', default_timeout=120).run()
print('errors:', [e.message for e in at.exception] or 'none')
"
```

(For `monthly_sig_rules_by_admin`, this test tool doesn't add the `files/` folder to Python's path, so it reports `No module named 'utilis'` even though the real app runs. That is the §5.5 trap again.)

---

## 8. Unusual practices you should know about

These aren't necessarily wrong, but a new developer wouldn't expect them:

1. **Deploying many apps from one repo root.** Each dashboard is a separate service that builds the **entire** repository and then runs one file. Common practice would be one folder per service, with the shared data copied in. Here it is done on purpose, so that all dashboards read the single source of truth in `data/`.
2. **Railway configuration split between git and the web UI.** Root Directory, config file path, watch paths and variables are only visible in Railway. Write them down when they change.
3. **Data committed to git, with deploys triggered by data commits.** There's no database and no data API. A data update *is* a git commit.
4. **Old-version pinning instead of installing Chrome.** Kaleido 0.2.1 is an old release kept specifically because it carries its own Chrome. It is a deliberate trade-off, and it blocks Plotly upgrades.
5. **Heavy CSS overrides of Streamlit's internals.** These fight Streamlit's own styling and are tied to one Streamlit version. A Streamlit custom theme (`.streamlit/config.toml`) would be the more standard way, but it is less flexible.
6. **Injected JavaScript** (reg budget dashboards) that rearranges Plotly's SVG after it draws.
7. **Copy-paste instead of shared code.** Colours, the font loader, CSS and download logic are repeated in each app. Easy to read one app at a time; tedious to change everywhere.
8. **Positional column renaming** (`df.columns = [...]`) instead of renaming by name. It is fragile when the CSV changes (§6.3).
9. **Hardcoded domain lists** (presidents, agencies, CFR titles, subcategories) in the code instead of read from the data.
10. **Leftover files from other hosts** (`Procfile`, `packages.txt`, `runtime.txt`) that do nothing on Railway, some with stale paths (§4.3).
11. **No automated tests or CI** for the dashboards. The only check is opening the page.
12. **PNG generated on every page load** rather than on button click, which makes the whole page depend on Kaleido (§3.4).

---

## 9. Routine jobs: checklists

### 9.1 Refreshing data (monthly or annually)

1. Update the CSV in `data/` (see that folder's README).
2. Open the CSV and check: same column names, same order, no stray text rows, numbers look right.
3. Run the matching dashboard locally (§2), look at the chart, and try every download button.
4. Commit and push to the deployed branch.
5. Wait for Railway to redeploy (or redeploy by hand), then open the live page and confirm the newest period shows up.

### 9.2 A new presidential administration (next: January 2029)

- `cumulative_econ_sig_rules.py`: add the name to `admins`, `admin_labels` and `admin_colors`.
- `monthly_sig_rules.py`: add the name to `admins` and change the default selection. Handle the slider while there are fewer than 7 months of data (§5.5).
- `by_agency_econ_rules.py` / `by_agency_rules.py`: nothing to do in code, as long as the party values stay `Democratic` / `Republican`.
- Check the source notes in the chart annotations (for example "Biden administration and all subsequent administrations").

### 9.3 New fiscal year of Regulators' Budget data

- Replace the CSVs under `data/reg_budget/` (keep the file names, or update `_COMBINED_CSV` / `_SUBCAT_CSV` in **both** reg budget apps).
- Check the caption text "Source: FY 2024 Regulators' Budget report" in both apps and update the year.
- Check the unit footnote (outlays are "millions of 2012 U.S. dollars"). If the base year changes, update the y-axis label in `reg_budget_outlays.py`.

### 9.4 Upgrading libraries or Python safely

1. Make a branch.
2. Create a fresh venv with the target Python version.
3. Change **one** dashboard's `requirements.txt` first. Upgrade `plotly` and `kaleido` together, never only one of them.
4. Run it, click every control and every download button, and compare the look side by side with the live site.
5. If it is fine, roll the same change out to the other dashboards, one deploy at a time.

### 9.5 Adding a new dashboard

Copy `reg_budget_outlays/` as the template. It has the sturdiest file finding (§3.1) and a complete `railway.toml`. Then:

1. Rename the `.py` file and change the paths inside it, plus the paths in `railway.toml`.
2. Create a new Railway service: Root Directory = repo root, Config file path = your new `railway.toml`, and preferably `NIXPACKS_PYTHON_VERSION` set.
3. Add it to `dashboards/README.md` and to this guide.

---

## 10. Known issues and to-do list

Ordered roughly by how likely they are to cause trouble:

| # | Issue | Where | Effort |
|---|---|---|---|
| 1 | Production Python version not fixed | All Railway services | Set `NIXPACKS_PYTHON_VERSION` (minutes) |
| 2 | `pandas` / `numpy` unpinned, so pandas 3 could break things on the next deploy | Most `requirements.txt` | Add `pandas<3` (minutes) |
| 3 | Cumulative dashboard crashes when a new president column is added | `cumulative_econ_sig_rules.py` | Small |
| 4 | Monthly slider breaks at the start of a new term; admin list hardcoded | `monthly_sig_rules.py` | Small |
| 5 | Monthly `utilis` import trap drags in 4 unneeded libraries | `monthly_sig_rules.py`, `files/requirements.txt` | Small: delete the `try/except` |
| 6 | FR "Total" chart ≠ "Total" CSV download | `by_agency_rules.py` | Decide which is right |
| 7 | `cumulative_…` has no `railway.toml`; its README and Procfile are stale | `cumulative_econ_sig_rules_by_admin/` | Small |
| 8 | Unpinned root `requirements.txt` installs before every dashboard | repo root | Check builds; pin or leave |
| 9 | `use_container_width` deprecated | All apps | Small find-and-replace (`width="stretch"`) |
| 10 | Reg budget "Updated" date shows the deploy date | Both reg budget apps | Medium: store the date in the data |
| 11 | Reg budget combined CSV never plotted; CSV button always sends the subcategory file | Both reg budget apps | Small |
| 12 | Stale `Procfile`s, unused `packages.txt` / `runtime.txt`, outer monthly `requirements.txt`, dead `local_utilis.py` | Several folders | Delete (check Railway settings first) |
| 13 | `"\$"` escape warning | `cumulative_econ_sig_rules.py` | One character |
| 14 | `STYLE_DIR` precedence bug | `cumulative_econ_sig_rules.py` | One line |
| 15 | Subcategory file name contains `" (1)"` | `data/reg_budget/…personnel_by_fy (1).csv` | Rename the file and update the code |
