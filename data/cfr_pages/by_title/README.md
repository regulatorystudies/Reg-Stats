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
- **Rolling-year incompleteness.** CFR titles are revised on a staggered annual schedule (Titles 1–16 on Jan 1, 17–27 on Apr 1, 28–41 on Jul 1, 42–50 on Oct 1), and each year's edition is published by GovInfo as those revision dates pass. The most recent year in the dataset may therefore have fewer than 49 titles; re-running the scraper later in the year picks up the new titles via the cache without re-fetching prior years.
- Volumes where the PDF or XML is missing are flagged via the `has_pdf_gaps` and `has_xml_gaps` columns in the aggregated output. The `xml_volumes` / `pdf_volumes` columns show how many of each title-year's volumes used each extraction method.

## Outputs

- **`cfr_pages_words_by_title.csv`** — aggregated to (year, title). One row per title per year. This is the file most downstream analyses should use.
- **`cfr_pages_words_disaggregated.csv`** — per (year, title, volume). Also serves as the scraper's cache: re-runs skip any (year, title, vol) combinations already present.

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

A full 1997–present scrape downloads several thousand PDFs and XMLs (each is parsed in memory and deleted immediately) and takes a few hours. Progress is saved to disk after each title, so an interrupted run can be resumed by re-invoking the same command.

## Annual update workflow

Once the latest CFR year is published on GovInfo (typically rolling through the year by title), re-run:

```bash
python scrape_cfr_by_title.py --years <new_year>
```

Already-scraped years are read from the cache, so only the new year is fetched.
