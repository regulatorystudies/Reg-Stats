# CFR Page and Word Counts by Title

Title-level **page counts** and **word counts** for the 50 thematic titles of the Code of Federal Regulations, from 1998 to the most recent year published on GovInfo.

## Sources

- **Pages** — counted from CFR PDFs at
  `https://www.govinfo.gov/content/pkg/CFR-{year}-title{n}-vol{v}/pdf/CFR-{year}-title{n}-vol{v}.pdf`
- **Words** — counted from CFR bulk XML at
  `https://www.govinfo.gov/bulkdata/CFR/{year}/title-{n}/CFR-{year}-title{n}-vol{v}.xml`

Both sources are GovInfo publications of the same annual CFR snapshot, so provenance is consistent.

## Methodology

- **Page counts** come from PDF page counts via `pypdf` (spot-checked to match the existing `cfr_pages_disaggregated.csv` exactly for 2021 Titles 1, 5, 12, 26, 40, and 49).
- **Word counts** primarily come from the bulk XML: all text nodes are walked with `ElementTree.itertext()` and whitespace-delimited tokens are counted. XML is preferred over PDF text because it excludes print boilerplate (running headers, page numbers, typesetting metadata) that PDF text extraction picks up. Across spot-checked titles the XML/PDF word ratio is consistently 0.93–0.95.
- **PDF text fallback.** A small number of volumes have XML that is missing entirely or contains only TOC/front/back matter (no `<SECTION>` / `<PART>` elements). For these volumes the scraper falls back to PDF text extraction (via pypdf), and the `word_source` column in the disaggregated output records `pdf` instead of `xml`. PDF-derived counts are systematically ~6% higher than XML-derived counts due to the boilerplate inclusion — downstream analyses that need strict comparability can filter to `word_source == "xml"` rows.
- Trigger for fallback: zero body elements in the XML, OR `xml_words / pdf_words < 0.5` (catches sparse XMLs that have a few stub body elements but no real content).

## Coverage notes

- **Dataset starts in 1998.** 1996 is mostly absent from GovInfo (many titles return 302→/error). 1997 is fully scrapable but ~27% of its volumes need the PDF fallback because GovInfo's 1997 XML conversion was incomplete for many titles — including a stub-body case that's only detectable via the word-ratio check. Starting at 1998 keeps the methodology uniform (XML-derived across virtually all rows). To re-add 1997 anyway, run `python scrape_cfr_by_title.py --years 1997`; the scraper's fallback logic handles it correctly.
- **Pre-1998 per-title data is not available** from any clean primary source. GPO's Federal Register Statistics (the source feeding the parent `cfr_pages_by_calendar_year.csv`) gives total pages back to 1950 but does not break out by title. HeinOnline has scanned CFRs back to 1938 but is paywalled and not scrapable. Mercatus Center's RegData has reconstructed title-level word counts back to 1970 via OCR but uses a different methodology centered on regulatory-restrictions counts.
- **The CFR Index is not included.** The Index is an annual standalone document, not part of any numbered title. Annual page totals from this dataset will be slightly lower than the totals in the parent directory's `cfr_pages_by_calendar_year.csv`, which include the Index.
- **Reserved/retired titles.** Title 2 (Grants and Agreements) was reserved through 2004 and first appears in CFR 2005. Title 6 (Domestic Security) was reserved through 2003 and first appears in CFR 2004 (renamed after the Homeland Security reorganization). Title 35 (Panama Canal) was eliminated after the 2000 edition and is absent from 2001 onward. Early years will be missing these rows accordingly.
- **Rolling-year incompleteness.** CFR titles are revised on a staggered annual schedule, and each year's edition is published by GovInfo as those revision dates pass — typically over the course of ~18 months. The most recent year in the dataset may therefore have fewer than 49 titles, and is flagged `year_complete = False` in the aggregated output. See the *Update cadence* section below for the publication schedule and re-run guidance.
- Volumes where the PDF or XML is missing are flagged via the `has_pdf_gaps` and `has_xml_gaps` columns in the aggregated output. The `xml_volumes` / `pdf_volumes` columns show how many of each title-year's volumes used each extraction method.

## A note on GovInfo file modification dates

GovInfo's bulkdata directory listings show "Last Modified" timestamps that are often years after a CFR edition's original publication — e.g., the `bulkdata/CFR/2014/` directory was last touched in August 2025. This can look alarming but reflects two benign processes:

1. **Periodic re-renders.** GovInfo occasionally regenerates historical XML files during schema migrations, metadata corrections, or pipeline upgrades. Content of the regulatory text itself doesn't change — the CFR is a frozen point-in-time codification — but file bytes can change due to formatting/metadata updates.
2. **Directory mtimes are noisy.** A directory's "Last Modified" timestamp gets bumped whenever any file inside is touched, including peripheral metadata files. The actual XML files we read typically date within a year or two of their original publication; the HTTP `Last-Modified` header on a specific file is the reliable indicator, not the parent directory's date.

We spot-checked 7 historical XMLs (1998 through 2024, spanning multiple "re-render" clusters) by re-fetching and comparing word counts against the cached values: **all matched exactly, delta = 0**. Re-scraping in the future is therefore very unlikely to produce meaningful drift in this dataset. The cache logic only fetches `(year, title, vol)` rows that aren't already present, which is the correct behavior given this stability.

## Outputs

- **`cfr_pages_words_by_title.csv`** — aggregated to (year, title). One row per title per year. This is the file most downstream analyses should use. Columns:
  - `year`, `title`, `pages`, `words`, `n_volumes`
  - `xml_volumes`, `pdf_volumes` — how many of the year-title's volumes used each extraction method (rest are `none` — neither file was available)
  - `has_pdf_gaps`, `has_xml_gaps` — booleans, True if any volume in this year-title was missing the respective format
  - `year_complete` — boolean. **Always filter to `year_complete == True` for time-series analyses unless you have a specific reason to include the rolling-publication year.** A CFR year Y is treated as complete when the scrape ran in calendar year Y+2 or later, because the Oct 1 revision titles for year Y can take 18–24 months to fully appear on GovInfo.
  - `last_scraped_at` — ISO date of the most recent scrape that touched any volume in this (year, title)
- **`cfr_pages_words_disaggregated.csv`** — per (year, title, volume). Also serves as the scraper's cache: re-runs skip any (year, title, vol) combinations already present. Includes a per-row `scraped_at` for provenance.

## Running

1. Create the conda environment (one-time):
   ```bash
   conda env create -f environment.yml
   conda activate regstats_cfr_by_title
   ```

2. Run the scraper. Years can be individual, ranges, or open-ended:
   ```bash
   # two specific years
   python scrape_cfr_by_title.py --years 1998 2024

   # closed range
   python scrape_cfr_by_title.py --years 1998-2010

   # 1998 through the current year
   python scrape_cfr_by_title.py --years 1998-

   # restrict to a subset of titles
   python scrape_cfr_by_title.py --years 2024 --titles 1 5 40
   ```

A full 1998–present scrape downloads several thousand PDFs and XMLs (each is parsed in memory and deleted immediately) and takes a few hours. Progress is saved to disk after each title, so an interrupted run can be resumed by re-invoking the same command.

## Update cadence

GovInfo publishes CFR titles on a staggered annual schedule that doesn't finish until well into the *following* calendar year:

| Revision date | Titles | Typically appears on GovInfo |
|---|---|---|
| Jan 1 | 1–16 | Q1–Q2 of revision year |
| Apr 1 | 17–27 | Q2–Q3 of revision year |
| Jul 1 | 28–41 | Q3–Q4 of revision year |
| Oct 1 | 42–50 | Q4 of revision year through Q1–Q2 of year after |

Because the Oct 1 titles can take 18–24 months to fully surface, **a CFR year Y is not fully scrapable until calendar year Y+2.** The `year_complete` column in `cfr_pages_words_by_title.csv` automates this check.

### Recommended workflow

The minimum useful cadence is **once a year, in Q1 or Q2**, at which point the prior-prior year (Y−2 relative to the scrape) is fully captured for the first time. A reasonable rule:

```bash
# Run any time in March–May of year N. The open-ended range picks up everything
# new since the last run, including rolling-published volumes for year N-1 and N.
python scrape_cfr_by_title.py --years 1998-
```

The cache means already-scraped (year, title, vol) combinations are skipped, so the practical work is just (a) filling in newly-published volumes from prior years and (b) probing a few volume-1 endpoints for titles that haven't appeared yet. A typical annual re-run takes minutes, not hours.

If you want fresher (but potentially partial) snapshots, you can also run mid-year — just remember to filter to `year_complete == True` in any time-series analysis. Re-running is cheap and idempotent.

### Why we don't hard-restrict to "Y−1 and earlier"

A natural-feeling defensive rule would be "the scraper should refuse to scrape the current year because it's always partial." We don't do that, for two reasons:

1. The cache already handles rolling completeness correctly. Missing volumes are never cached — they're absent rows — so a re-run automatically fills them in.
2. The `year_complete` flag is a softer guard: partial data is preserved (useful for early peeks at the current year) and clearly marked so downstream consumers don't mistake it for a finished year.
