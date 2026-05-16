# CFR Page and Word Counts by Title

Title-level **page counts** and **word counts** for the 50 thematic titles of the Code of Federal Regulations, from 1998 to the most recent year published on GovInfo.

## Sources

- **Pages** — counted from CFR PDFs at
  `https://www.govinfo.gov/content/pkg/CFR-{year}-title{n}-vol{v}/pdf/CFR-{year}-title{n}-vol{v}.pdf`
- **Words** — counted from CFR bulk XML at
  `https://www.govinfo.gov/bulkdata/CFR/{year}/title-{n}/CFR-{year}-title{n}-vol{v}.xml`

Both sources are GovInfo publications of the same annual CFR snapshot, so provenance is consistent.

## Methodology

- **Page counts** come from PDF page counts via `pypdf` (spot-checked to match the existing `cfr_pages_disaggregated.csv` exactly for 228 of 231 (year, title) totals from 2021–2025; the 3 mismatches are rolling-publication-year deltas, not methodology bugs).
- **Word counts** come from the bulk XML, restricted to the regulatory body — computed as `all_words − FMTR_words − BMTR_words`. (Subtracting the wrapper elements works across all XML schema versions; pre-~2008 volumes flatten `<SECTION>`/`<PART>`/`<SUBPART>` as direct siblings of `<TITLE>` rather than nested children, so an "everything inside `<TITLE>`" approach would severely undercount the body for older years.) The aggregated CSV's `words` column is this **body-only** count.
- **Why body-only?** Per the [GPO CFR XML User Guide](https://www.govinfo.gov/bulkdata/CFR/resources/), "user aids, including finding aids, indexes, search tools, metadata associations, and tagging schemes are not part of the legal text of the Code of Federal Regulations." Those user-aid sections live under `<FMTR>` (front matter: table of contents, "Cite this Code", Explanation) and `<BMTR>` (back matter: Finding Aids, Alphabetical List of Agencies, List of CFR Sections Affected). Counting them would inflate "regulatory text" with navigational scaffolding.
- **What about the all-content count?** Preserved as `words_all` in the aggregated CSV and as the `words` column in the disaggregated CSV. This is the sum of `ElementTree.itertext()` over the whole XML — the old methodology, kept for reference and backward compatibility.
- **PDF text fallback.** A small number of volumes (~0.3% historically) have XML where the `<TITLE>` subtree is missing or contains fewer than `MIN_BODY_WORDS = 1000` words, indicating the XML is either index-only or hasn't been properly composed. For these the scraper falls back to PDF text extraction via pypdf, and `word_source = "pdf"` in the disaggregated output. PDF text can't be cleanly decomposed into body vs. user-aids, so for fallback rows `words_body = words` (the full PDF count). Given how rare fallback is, this introduces a methodology impurity well under 0.5% in any aggregated total.
- Trigger for fallback: body word count below `MIN_BODY_WORDS`, OR `body_words / pdf_words < 0.5` (catches sparse XMLs with a stub `<TITLE>` element but no real content), OR `body_words / pdf_words > 1.85` (catches GovInfo's content-duplication bug, which doubled XML body for 10 cached volumes — 9 in 2009, 1 in 2006 — while leaving PDFs correct). The previous heuristic — presence of any `<SECTION>` / `<PART>` tag — was fooled by such tags appearing in the alphabetical agency index inside `<BMTR>` (see e.g. 1998 Title 1 vol 1, where the XML had only 2 body words but was previously trusted because BMTR contained the right tags).
- **Pages is the more stable metric; words is more volatile.** Page counts come from PDFs (the typeset publication) and aren't affected by XML composition differences. Word counts come from XML body content and run ~20% noisier YOY: median absolute YOY change is 1.36% for pages vs. 1.57% for words, and the 95th percentile is 9.7% (pages) vs. 11.9% (words). The volatility is real, not a bug — GovInfo's XML schema has evolved multiple times (most visibly around 2008/2009) and the conversion pipeline has had occasional bugs. Treat pages as the canonical "size of the CFR" metric; use words for granular within-page text analysis.

## Coverage notes

- **Dataset starts in 1998.** 1996 is mostly absent from GovInfo (many titles return 302→/error). 1997 is fully scrapable but ~27% of its volumes need the PDF fallback because GovInfo's 1997 XML conversion was incomplete for many titles — including a stub-body case that's only detectable via the word-ratio check. Starting at 1998 keeps the methodology uniform (XML-derived across virtually all rows). To re-add 1997 anyway, run `python scrape_cfr_by_title.py --years 1997`; the scraper's fallback logic handles it correctly.
- **Pre-1998 per-title data is not available** from any clean primary source. GPO's Federal Register Statistics (the source feeding the parent `cfr_pages_by_calendar_year.csv`) gives total pages back to 1950 but does not break out by title. HeinOnline has scanned CFRs back to 1938 but is paywalled and not scrapable. Mercatus Center's RegData has reconstructed title-level word counts back to 1970 via OCR but uses a different methodology centered on regulatory-restrictions counts.
- **The CFR Index is not included.** The Index is an annual standalone document, not part of any numbered title. Annual page totals from this dataset will be slightly lower than the totals in the parent directory's `cfr_pages_by_calendar_year.csv`, which include the Index. Excluding the Index is also methodologically consistent with the body-only word count: per GPO's CFR XML User Guide, "user aids, including finding aids, indexes, search tools, metadata associations, and tagging schemes are not part of the legal text of the Code of Federal Regulations." The CFR Index is exactly that — a standalone document of nothing but finding aids — so it belongs outside the regulatory-volume metric.
- **Reserved/retired titles.** Title 2 (Grants and Agreements) was reserved through 2004 and first appears in CFR 2005. Title 6 (Domestic Security) was reserved through 2003 and first appears in CFR 2004 (renamed after the Homeland Security reorganization). Title 35 (Panama Canal) was eliminated after the 2000 edition and is absent from 2001 onward. Early years will be missing these rows accordingly.
- **Rolling-year incompleteness.** CFR titles are revised on a staggered annual schedule, and each year's edition is published by GovInfo as those revision dates pass — typically over the course of ~18 months. The most recent year in the dataset may therefore have fewer than 49 titles, and is flagged `year_complete = False` in the aggregated output. See the *Update cadence* section below for the publication schedule and re-run guidance.
- Volumes where the PDF or XML is missing are flagged via the `has_pdf_gaps` and `has_xml_gaps` columns in the aggregated output. The `xml_volumes` / `pdf_volumes` columns show how many of each title-year's volumes used each extraction method.

## Reconciling against the parent yearly-totals file

If you sum `pages` across all 49 titles for a given year in this dataset and compare to the same year in `../cfr_pages_by_calendar_year.csv`, our number will be **~1,300 pages lower** on average (median delta −1,293 across 1998–2024). That gap is the annual CFR Index document, which the parent file includes and ours intentionally does not (see the Index note above).

Stronger reconciliation is possible against the parent's per-volume `../cfr_pages_disaggregated.csv` (which covers 2021–2025 only): summing our pages across numbered titles matches that file's per-numbered-title totals **exactly** for 2021, 2022, 2024, and within 2 pages out of ~189K for 2023 (one volume's TOC handling drifted by a page or two). So:

- vs. parent `cfr_pages_disaggregated.csv` (numbered titles only): essentially zero delta — strong validation.
- vs. parent `cfr_pages_by_calendar_year.csv` (numbered titles + Index): ~1,300-page gap = the Index document.

The 1999 and 2007 outliers in the comparison (−9,963 and −2,468 pages respectively) are the same publication-artifact years the new completeness rule flags as `year_complete = False` — Title 26 dropping from 19 volumes to 6 in 1999, Title 14 dropping from 5 to 2 in 2007.

## A note on GovInfo file modification dates

GovInfo's bulkdata directory listings show "Last Modified" timestamps that are often years after a CFR edition's original publication — e.g., the `bulkdata/CFR/2014/` directory was last touched in August 2025. This can look alarming but reflects two benign processes:

1. **Periodic re-renders.** GovInfo occasionally regenerates historical XML files during schema migrations, metadata corrections, or pipeline upgrades. Content of the regulatory text itself doesn't change — the CFR is a frozen point-in-time codification — but file bytes can change due to formatting/metadata updates.
2. **Directory mtimes are noisy.** A directory's "Last Modified" timestamp gets bumped whenever any file inside is touched, including peripheral metadata files. The actual XML files we read typically date within a year or two of their original publication; the HTTP `Last-Modified` header on a specific file is the reliable indicator, not the parent directory's date.

We spot-checked 7 historical XMLs (1998 through 2024, spanning multiple "re-render" clusters) by re-fetching and comparing word counts against the cached values: **all matched exactly, delta = 0**. Re-scraping in the future is therefore very unlikely to produce meaningful drift in this dataset. The cache logic only fetches `(year, title, vol)` rows that aren't already present, which is the correct behavior given this stability.

## Outputs

- **`cfr_pages_words_by_title.csv`** — aggregated to (year, title). One row per title per year. This is the file most downstream analyses should use. Columns:
  - `year`, `title`, `title_name`, `pages`, `n_volumes`
  - `words` — **body-only** count (sum of per-volume `words_body`). The headline regulation-volume metric.
  - `words_all` — all-content count (sum of per-volume `words`). Kept for reference and backward compatibility; ~13% higher than `words` on average because it includes the front-matter table of contents and back-matter finding aid that GPO explicitly says are *not* part of the legal text.
  - `xml_volumes`, `pdf_volumes` — how many of the year-title's volumes used each extraction method (rest are `none` — neither file was available)
  - `has_pdf_gaps`, `has_xml_gaps` — booleans, True if any volume in this year-title was missing the respective format
  - `year_complete` — boolean. **Always filter to `year_complete == True` for time-series analyses unless you have a specific reason to include partial years.** A CFR year Y is treated as complete only when (a) the scrape happened at least one calendar year after the revision date (`scrape_year ≥ Y + 1`) **and** (b) no title's volume count in year Y is below 70% of its count in the previous complete year. The second check catches years that the calendar rule would mark complete despite mid-publication artifacts — e.g., 1999 (Title 26 dropped to 6 volumes from 19, then recovered to 19 in 2000) and 2007 (Title 14 dropped to 2 from 5, recovered in 2008). Title 35 is exempt from the volume check after 2000 (it was eliminated).
  - `last_scraped_at` — ISO date of the most recent scrape that touched any volume in this (year, title)
- **`cfr_pages_words_disaggregated.csv`** — per (year, title, volume). Also serves as the scraper's cache: re-runs skip any (year, title, vol) combinations already present. Columns: `year`, `title`, `vol`, `pages`, `words` (all-content from chosen source), `words_body` (body-only count; equals `words` for PDF-fallback rows), `word_source` (`xml` / `pdf` / `none`), `pdf_present`, `xml_present`, `scraped_at`.

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

Because the Oct 1 titles can take 18–24 months to fully surface, the `year_complete` column in `cfr_pages_words_by_title.csv` is set conservatively: it requires both a 1-year calendar lag *and* per-title volume sanity (no title below 70% of its prior-complete-year volume count). In practice this means year Y typically flips to `year_complete = True` in late Y+1 or early Y+2, once GovInfo has settled the Oct-1 revisions.

### Recommended workflow

The minimum useful cadence is **once a year, in Q4 or Q1**, at which point most of the prior year (Y−1) is fully published. A reasonable rule:

```bash
# Run any time in Q4 of year N or Q1 of year N+1. The open-ended range picks
# up everything new since the last run.
python scrape_cfr_by_title.py --years 1998-
```

The cache means already-scraped (year, title, vol) combinations are skipped, so the practical work is just (a) filling in newly-published volumes from prior years and (b) probing a few volume-1 endpoints for titles that haven't appeared yet. A typical annual re-run takes minutes, not hours.

If you want fresher (but potentially partial) snapshots, you can also run mid-year — just remember to filter to `year_complete == True` in any time-series analysis. Re-running is cheap and idempotent.

### Why we don't hard-restrict to "Y−1 and earlier"

A natural-feeling defensive rule would be "the scraper should refuse to scrape the current year because it's always partial." We don't do that, for two reasons:

1. The cache already handles rolling completeness correctly. Missing volumes are never cached — they're absent rows — so a re-run automatically fills them in.
2. The `year_complete` flag is a softer guard: partial data is preserved (useful for early peeks at the current year) and clearly marked so downstream consumers don't mistake it for a finished year.
