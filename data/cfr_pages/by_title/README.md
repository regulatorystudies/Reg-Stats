# CFR Word and Page Counts by Title

## Update Instructions

The data should be updated **once a year**, ideally in Q4 of year N or Q1 of year N+1 (at that point most of year N−1's CFR volumes are fully published on GovInfo and will be picked up by the scraper). See *Update Cadence* below for details on GovInfo's staggered CFR publication schedule and the `year_complete` flag.

Follow these steps:

1. Set up the conda environment. This is a one-time step — see *Environment Set Up* below.
1. Navigate to this directory and activate the environment in your terminal:
   ```bash
   cd "PATH TO THIS DIRECTORY"
   
   conda activate regstats_cfr_by_title
   ```
1. Run the scraper. The standard annual command picks up everything new since the last run:
   ```bash
   python scrape_cfr_by_title.py --years 1998-
   ```
   The cache means already-scraped (year, title, vol) combinations are skipped, so a typical annual re-run takes minutes (a from-scratch scrape of 1998–present takes a few hours, so run at the beginning of a work day). Progress is saved to disk after each title. If interrupted, just re-invoke the same command to resume.
1. When the script finishes, you'll see a `Done.` summary in the terminal showing how many new volumes (if any) were added. The two output CSVs in this directory are updated in place:
   - `cfr_pages_words_disaggregated.csv` — per (year, title, vol); also the script's cache
   - `cfr_pages_words_by_title.csv` — per (year, title), aggregated; used by the dashboard

## Environment Set Up

Using [Anaconda](https://www.anaconda.com/products/distribution), the environment can be created and activated using the environment.yml file with the following commands in the terminal:

```bash
cd "PATH TO THIS DIRECTORY"

conda env create -f environment.yml

conda activate regstats_cfr_by_title
```

See the [Anaconda documentation](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html) for more details.

## Other Scraper Run Options

```bash
# scrape a single year
python scrape_cfr_by_title.py --years 2024

# scrape a closed range
python scrape_cfr_by_title.py --years 1998-2010

# scrape only specific titles within a year
python scrape_cfr_by_title.py --years 2024 --titles 1 5 40

# force re-download of cached rows in the range (prompts for confirmation;
# backs up cfr_pages_words_disaggregated.csv to .csv.bak first)
python scrape_cfr_by_title.py --years 2024 --refresh
```

## Outputs

- **`cfr_pages_words_by_title.csv`** — aggregated to (year, title); the file used by the dashboard. Columns:
  - `year`, `title`, `title_name`
  - `pages` — page count, sourced from CFR PDFs.
  - `words` — body-only word count, the headline regulation-volume metric. Excludes front/back matter user aids (table of contents, finding aids, agency index), which are not part of the legal text of the CFR. See [GPO's CFR XML User Guide](https://www.govinfo.gov/bulkdata/CFR/resources/CFR-XML_User-Guide_v1.pdf) for more information.
  - `words_all` — full all-content word count, kept for reference; ~13% higher than `words` on average.
  - `n_volumes` — number of volumes listed on GovInfo for this (year, title).
  - `xml_volumes`, `pdf_volumes` — how many of those volumes have XML / PDF files available.
  - `has_pdf_gaps`, `has_xml_gaps` — whether any *listed* volumes are missing a PDF or XML file. Note: these flags only check volumes that GovInfo lists; they do not detect volumes that are absent from GovInfo entirely (see `year_complete`).
  - `year_complete` — boolean, set at the year level (all titles in a year share the same value). **Filter to `year_complete == True` for time-series analyses** unless you specifically want partial years. A year is marked complete when it passes two checks: (1) a calendar-lag check requiring the data to have been scraped in year Y+1 or later, and (2) a volume-sanity check requiring that no title's volume count dropped below 70% of its count in the most recent prior complete year. The sanity check catches years where GovInfo is permanently missing volumes (e.g., 1999 and 2007) — both gap flags can be `False` while `year_complete` is `False` because the gaps are in volumes that GovInfo never listed, not in files missing from listed volumes.
  - `last_scraped_at` — timestamp of the most recent scrape that touched this (year, title).
- **`cfr_pages_words_disaggregated.csv`** — per (year, title, vol); also the scraper's cache. Re-runs skip already-cached combinations.

Page counts come from CFR PDFs; word counts come from CFR bulk XML. Both are GovInfo publications of the same annual CFR snapshot. See the comments in `scrape_cfr_by_title.py` for the full methodology (body-only computation, PDF fallback heuristics, `year_complete` rules).

## Coverage Notes

- **Starts in 1998.** 1996 is mostly absent from GovInfo; 1997 is scrapable but ~27% of its volumes need PDF fallback due to incomplete XML conversion. To re-add 1997 anyway: `python scrape_cfr_by_title.py --years 1997`.
- **The CFR Index is not included** — it's an annual standalone document, not part of any numbered title. Annual page totals here are therefore ~1,300 pages lower than the parent directory's `cfr_pages_by_calendar_year.csv`, which includes the Index. (Otherwise the two reconcile to within ~2 pages out of ~189K for the 2021–2024 years where the parent has per-title data.)
- **Reserved/retired titles.** Title 2 (Grants and Agreements) starts in 2005; Title 6 (Domestic Security) starts in 2004; Title 35 (Panama Canal) was eliminated after 2000. Early years will be missing these rows accordingly.
- **Rolling-year incompleteness.** CFR titles are published on a staggered schedule (see below); the most recent year may have fewer than 49 titles and is flagged `year_complete = False`.
- **Historical incomplete years.** Some older years (1999, 2007) are permanently flagged `year_complete = False` because GovInfo is missing entire volumes for certain titles (e.g., Title 26 drops from 19 volumes in 1998 to 6 in 1999). The data for the volumes that *are* present is accurate — the counts are simply incomplete.

## Update Cadence

GovInfo publishes CFR titles on a staggered annual schedule that doesn't finish until well into the *following* calendar year:

| Revision date | Titles | Typically appears on GovInfo |
|---|---|---|
| Jan 1 | 1–16 | Q1–Q2 of revision year |
| Apr 1 | 17–27 | Q2–Q3 of revision year |
| Jul 1 | 28–41 | Q3–Q4 of revision year |
| Oct 1 | 42–50 | Q4 of revision year through Q1–Q2 of year after |

Because the Oct 1 titles can take 18–24 months to fully surface, year Y typically flips to `year_complete = True` in late Y+1 or early Y+2. Re-running the scraper is idempotent, so running once a year in Q4 or Q1 is the recommended cadence. Mid-year runs are also fine — just filter to `year_complete == True` in the dataset before any time-series analysis.
