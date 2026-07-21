# CFR Page and Word Counts by Title

## Update Instructions

Update **once a year**, ideally in Q4 of year N or Q1 of year N+1 (see *Update
Cadence*).

1. Set up the conda environment (one-time — see *Environment Set Up*).
2. Navigate to this directory and activate it:
   ```bash
   cd "PATH TO THIS DIRECTORY"
   conda activate regstats_cfr_by_title
   ```
3. Make sure `usregdata6.csv` is in this directory (see *Getting the RegData
   Source File*).
4. Run the scraper:
   ```bash
   python scrape_cfr_by_title.py --years 2000- --regdata-csv usregdata6.csv
   ```
   This picks up all new GovInfo volumes since the last run and re-probes the
   most recent editions for late-posted volumes (see *Keeping the Data Fresh*).
   Progress is saved after each title; re-invoke the same command to resume an
   interrupted run.
5. Two output CSVs are updated in place:
   - `cfr_words_pages_by_title.csv` — per (year, title), 1970–present (the final
     aggregated output)
   - `cfr_words_pages_disaggregated.csv` — per (year, title, vol), GovInfo
     volumes only; also the scraper's cache

**About `--regdata-csv`.** It is strictly required only for a pre-2000 range
(see *First-Time / Historical Backfill*), because the 1970–1999 rows are
otherwise carried forward from the existing CSV automatically. It is still
**recommended on every run**: it enables the RegData word-count fallback, which substitutes RegData's clean body-only count for the ~6%-inflated PDF-text count
on the rare post-2000 (year, title) where *every* volume's XML failed the
quality checks (such rows are labeled `"...(XML fallback)"`).

## Getting the RegData Source File

Word counts for 1970–1999, and the fallback described above, come from
`usregdata6.csv` — RegData United States 6.0 (1970–2025, CC BY 4.0). At ~98 MB it is **not
stored in the repo**; it's covered by `.gitignore`, so it can sit in this
directory run after run with no risk of being committed. Download it once:

- **QuantGov:** the [CSV download page](https://www.quantgov.org/csv-download)
  (select RegData United States 6.0).
- **GWU Box backup:** [RSC copy](https://gwu.box.com/s/3y1enchxc1h3d504pv8ozhkbtd9iqpf7)

## First-Time / Historical Backfill

To build the full dataset from scratch, including the pre-2000 word counts:

```bash
python scrape_cfr_by_title.py --years 1970- --regdata-csv usregdata6.csv
```

`--regdata-csv` is **required** here: a pre-2000 range has no existing aggregate
to carry the 1970–1999 rows forward from.

## Environment Set Up

Using [Anaconda](https://www.anaconda.com/products/distribution):

```bash
cd "PATH TO THIS DIRECTORY"
conda env create -f environment.yml
conda activate regstats_cfr_by_title
```

## Other Scraper Run Options

Add `--regdata-csv usregdata6.csv` to any of these; it's omitted below only for
brevity.

```bash
# Scrape a single GovInfo year
python scrape_cfr_by_title.py --years 2024

# Scrape a closed GovInfo range
python scrape_cfr_by_title.py --years 2000-2010

# Scrape specific titles only
python scrape_cfr_by_title.py --years 2024 --titles 1 5 40

# Force re-download of cached rows (backs up the cache to .csv.bak first;
# prompts for confirmation unless you add -y/--yes)
python scrape_cfr_by_title.py --years 2024 --refresh

# Re-verify a range against the cache (see Keeping the Data Fresh)
python scrape_cfr_by_title.py --years 2020-2024 --verify

# Skip the automatic recent-editions freshness check (on by default)
python scrape_cfr_by_title.py --years 2000- --no-recent-check

# Backfill words_body on old cached rows (re-aggregate only)
python scrape_cfr_by_title.py --backfill-only
```

## Keeping the Data Fresh

GovInfo posts an edition's volumes gradually; the Oct-1 batch (Titles 42–50) can
trickle in for over a year (see *Update Cadence*). Two mechanisms keep the
dataset current:

- **Automatic recent-editions check (default).** Every normal scrape re-probes
  the 3 most recent cached editions for newly posted volumes. It's cheap, since
  cached volumes are skipped, so a routine annual run keeps still-rolling years
  current on its own; a year flips to `year_complete = True` once all its
  volumes are in. Disable with `--no-recent-check`.
- **Full re-verification (`--verify`, on demand).** Re-downloads *every* volume
  in the `--years` range and reports what changed versus the cache (volumes
  added, removed, or recounted), including corrections to older volumes the
  cheap check won't catch. It's slow — roughly 2.5 hours for the whole history,
  ~6 minutes for a single year — so scope it with `--years`. The scraper prints
  an estimate before starting.

## Outputs

**`cfr_words_pages_by_title.csv`** — the published dataset; one row per
(year, title), 1970–present. Most columns are self-describing (`year`, `title`,
`title_name`, `pages`, `n_volumes`, `last_scraped_at`), plus per-source
diagnostics (`xml_volumes`, `pdf_volumes`, `has_pdf_gaps`, `has_xml_gaps`) and
`word_source`, which records where each row's word count came from. Two columns
need care:

- **`words`** is the headline body-only metric — use this one. `words_all` adds
  front and back matter, runs ~3% higher, and breaks the 2000 join; it is
  retained only for backward compatibility.
- **`year_complete`** — filter to `True` for any time-series analysis.
  Incomplete years undercount badly (see *Keeping the Data Fresh*).

**`cfr_words_pages_disaggregated.csv`** — per (year, title, vol), GovInfo years
only; also the scraper's cache.

## Coverage Notes

- **Coverage span.** Words run 1970–present (RegData before 2000, GovInfo
  after); pages are GovInfo-only, so they start at 2000. 1996 GovInfo data is
  largely absent and 1997–1999 XML has data-quality issues, which is why the
  cutover sits at 2000. Those years can still be scraped for words with
  `--regdata-csv`, e.g. `--years 1997-1999`.
- **Source transition at 2000.** Part-level validation shows a smooth join:
  median ±1.1% jump across all 50 titles, 45/50 within ±10%. Full detail is in
  the Methodology & Validation appendix in `scrape_cfr_by_title.py`.
- **Title 3 (The President) words start 2000.** RegData cannot reliably count
  its presidential-document compilation, which isn't part-structured, so
  pre-2000 values are omitted. Title 3 counts reflect annual presidential
  output rather than regulatory stock, so they aren't comparable across titles.
- **The CFR Index is excluded** — it's an annual standalone document, not part
  of any numbered title. Annual totals here run ~1,300 pages below sources that
  include it.
- **Reserved/retired titles.** Title 2 starts in 2005, Title 6 in 2004; Title 35
  was eliminated after 2000. Early years will be missing these rows.
- **Structural breaks.** Several titles have content discontinuities:
  cross-title migrations (Titles 34/45, 41/48, 4/31), content-regime shifts
  (Title 6), agency reorganizations, and OCR-era caveats (Titles 1, 4). The
  dashboard surfaces these through per-title hover notes.
- **2006 & 2009 XML duplication (corrected).** A handful of volumes in those
  editions ship the entire body twice. `xml_word_counts` detects this
  structurally and divides back to one clean copy, so the output is already
  corrected.
- **Incomplete years.** The most recent year may have fewer than 50 titles and
  is flagged `year_complete = False`. 1999 and 2007 are permanently flagged
  `False` because GovInfo is missing volumes for certain titles.

## Word Count Methodology

Word counts exclude CFR front and back matter — table of contents, agency index,
finding aids, and "List of CFR Sections Affected" — which are user aids, not
legal text. They **include** part/title appendices (all regulatory body text
under `<TITLE>`), which differs slightly from RegData, whose part-level counts
appear to exclude them.

Page counts come from CFR PDFs; word counts come from CFR bulk XML, with PDF
text extraction as a fallback for ~0.3% of volumes where XML is absent or fails
quality checks. The GovInfo annual-edition XML is the right source for word
*volume* even though the RegData User Guide avoids GPO XML: that caveat concerns
RegData's part-level structural parsing, not aggregate word counts, which
validate within ~2.5% of RegData.

Full rationale and validation numbers are in the Methodology & Validation
appendix in `scrape_cfr_by_title.py`. See also
[GPO's CFR XML User Guide](https://www.govinfo.gov/bulkdata/CFR/resources/CFR-XML_User-Guide_v1.pdf).

## Update Cadence

GovInfo publishes CFR titles on a staggered annual schedule:

| Revision date | Titles | Typically appears on GovInfo |
|---|---|---|
| Jan 1 | 1–16 | Q1–Q2 of revision year |
| Apr 1 | 17–27 | Q2–Q3 of revision year |
| Jul 1 | 28–41 | Q3–Q4 of revision year |
| Oct 1 | 42–50 | Q4 of revision year through Q1–Q2 of year after |

Year Y typically flips to `year_complete = True` in late Y+1 or early Y+2, so
running the scraper once a year in Q4 or Q1 is the recommended cadence.
