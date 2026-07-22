"""Scrape CFR page counts (from PDFs) and word counts (from bulk XML or RegData).

Word count strategy (two sources, joined at REGDATA_CUTOVER = 2000):
  - Years 1970–1999: word counts come from RegData U.S. (Mercatus Center /
    QuantGov; 6.0 by default, 5.0 also works — identical for these years).
    Supply the path to usregdata6.csv via --regdata-csv. The script sums the
    part-level `wordcount` column across all parts for each (year, title). No
    page counts are available for these years. See the METHODOLOGY & VALIDATION
    appendix at the end of this docstring for the 2000-cutover rationale and the
    full validation notes.
  - Years 2000–present: for each (year, title, volume), GETs the PDF (page
    count) and bulk XML (body word count, excluding <FMTR>/<BMTR> user aids)
    from GovInfo. When a volume's XML is absent or fails quality checks it
    falls back to PDF text extraction for that volume. Additionally, at the
    title level, if NO volume of a (year, title) yields trusted XML and the
    RegData CSV is supplied, the whole title's word count falls back to
    RegData's body-only count (better aligned than inflated PDF text) for any
    year RegData covers; page counts still come from the PDF.

Output CSVs:
  cfr_words_pages_disaggregated.csv  -- per (year, title, vol); GovInfo cache only
  cfr_words_pages_by_title.csv       -- per (year, title), all years aggregated

Re-runs only fetch (year, title, vol) combinations not already cached in the
disaggregated CSV. Progress is saved incrementally after each title. An
interrupted run can be resumed by re-invoking with the same arguments.

Coverage caveats:
  - GovInfo CFR coverage starts in 1997. 1996 is partial (most titles absent)
    and not supported.
  - RegData covers 1970 onward (6.0: through 2025; 5.0: through 2022). Only
    1970–1999 are used as the primary word-count source; 2000+ RegData is used
    only as a fallback where GovInfo XML is unusable.
  - The CFR Index (annual document, not per-title) is not included.
  - See the STRUCTURAL BREAKS list in the appendix below for titles with content
    discontinuities (T2, T3, T6, T34, T35, T48).

Usage:
  # GovInfo years only (2000+):
  python scrape_cfr_by_title.py --years 2000-
  python scrape_cfr_by_title.py --years 2000-2010
  python scrape_cfr_by_title.py --years 2024 --refresh

  # Re-verify already-scraped years (re-download + report what changed):
  python scrape_cfr_by_title.py --years 2020-2024 --verify

  # First-time backfill / include pre-2000 RegData years:
  python scrape_cfr_by_title.py --years 1970-

Note: no --regdata-csv flag is needed in normal use. The RegData CSV is
auto-detected from this script's directory (any usregdata*.csv; highest version
wins), so just keep usregdata6.csv here. Pass --regdata-csv only to point
somewhere else or pin a specific version.

Why that matters on EVERY run, not just pre-2000 ones: the aggregate is
regenerated in FULL each time, so with no RegData available the post-cutover
word-count fallback is disabled and every (year, title) lacking trusted XML gets
rewritten with ~6%-inflated PDF text -- across the whole dataset, not just the
years scraped. If no CSV is found the scraper warns and names the affected rows.

==============================================================================
METHODOLOGY & VALIDATION APPENDIX
==============================================================================
Consolidated here so this script documents its own decisions even when the
standalone project docs aren't distributed alongside it.

DATA SOURCES (joined at year 2000).
    1970–1999: RegData U.S. word counts, no page counts.
    2000–present: GovInfo annual-edition bulk XML (body words) + PDFs (pages).

WHY REGDATA BEFORE 2000. GovInfo XML for 1997–1999 is sparse and inconsistent:
    1997 ~27% of volumes need PDF fallback; 1999 Title 26 drops 19→6 volumes
    (a spurious ~10% aggregate dip); 1998 is usable but runs ~4% below RegData.
    RegData gives clean, validated counts for all 50 titles back to 1970.

WHY 2000 AS THE CUTOVER (not 1998/1996). Part-level comparison of RegData vs
    GovInfo body-only words at the boundary: median jump +1.1% (essentially
    invisible), 45/50 titles within ±10%. Cutting over at 2000 also cleanly
    excludes the 1999 Title 26 anomaly instead of having to special-case it.

WHY BODY-ONLY `words` (not `words_all`). `words_all` includes <FMTR> (table of
    contents, "Cite this Code") and <BMTR> (Finding Aids, List of CFR Sections
    Affected) — user aids, not the legal text of the CFR (per GPO's CFR XML User
    Guide). Body-only lands +1.1% above RegData at the 2000 join (smooth);
    words_all lands +5.8% (a visible step discontinuity). `words_all` is kept in
    the output CSV for reference/backward-compatibility only — do not use it in
    trend analysis.

VALIDATION (1998–2022 overlap, 1,215 year×title cells; RegData 5.0 and 6.0 are
    identical here). RegData vs body-only `words`: +2.5% overall (RegData
    higher); 88% of cells within ±5%, 96.5% within ±10%. RegData vs `words_all`:
    −0.7%. The +2.5% gap is not a flaw in either source — RegData uses GPO
    HTML/eCFR, GovInfo uses the typeset annual-edition XML; two legitimate
    snapshots of the same corpus, consistent across years and titles, too small
    to create visible discontinuities. Part-level cross-check (Title 40, 2022,
    37 volumes, 15.7M words): the body-only count matches the raw <TITLE>-subtree
    count to within 111 words (~0.001%), confirming the scraper's arithmetic.

WHY GOVINFO TYPESET XML DESPITE THE REGDATA USER GUIDE CAVEAT. The RegData User
    Guide avoids GPO typeset XML because it is unreliable for their *structural*
    parsing (part/section delineation, restriction counting, NAICS/agency
    metadata) — NOT a claim that the word totals are wrong. This pipeline only
    needs aggregate body-only word *volume*, for which the typeset XML validates
    within the numbers above. Scraping GPO HTML instead would lose the clean
    <FMTR>/<BMTR> subtraction (HTML has no comparable structural markers),
    introduce a 2016→2017 HTML-to-XML source break (HTML exists only 1996–2016),
    and add brittle tag-stripping for no measurable accuracy gain.

APPENDIX SCOPE DIFFERENCE. This body-only count includes part/title appendices;
    RegData's part-level count appears to exclude them. It's a real definitional
    difference at the join, but small — RegData still runs ~2.5% higher overall,
    so appendix text is not a large share and produces no visible discontinuity.

REGDATA SOURCE. RegData U.S. 6.0 (Mercatus Center / QuantGov), licensed
    CC BY 4.0 — CITE RegData when using these word counts in research. Coverage
    1970–2025, part level, word-count column `wordcount`. Text by era (per the
    User Guide): 1970–1995 Tesseract OCR of scanned pages; 1996–2016 GPO HTML;
    2017+ annualized eCFR XML. RegData 5.0 (1970–2022) and 6.0 give identical
    title-level counts for every overlapping cell; 6.0 just adds 2023–2025. The
    scraper infers the version label ("RegData 6.0" / "RegData 5.0") from the
    supplied filename.

STRUCTURAL BREAKS (content discontinuities unrelated to the 2000 source change,
    emitted as-is; the dashboard surfaces these to users through per-title hover
    notes):

    T2  Empty before 2005, when OMB circulars were codified there.
    T3  Presidential output, not regulatory stock. RegData is unusable (it breaks
        at both source transitions); GovInfo XML is reliable, so T3 words begin
        in 2000 and pre-2000 T3 word values are not emitted.
    T6  Three eras with no continuity: wage/price-control bodies (1972–1981),
        reserved/empty (1982–2003), Homeland Security (2004–present).
    T34 Educational content migrated in from Title 45 in 1981, following the
        creation of the Department of Education.
    T35 ~40% content drop at 1979 (Panama Canal Treaties); vestigial after 2000
        and eliminated after the 2000 edition.
    T48 Begins 1984; procurement regulations (the FAR) migrated in from Title 41.
==============================================================================
"""
from __future__ import annotations

import argparse
import csv
import logging
import re
import sys
import time
import xml.etree.ElementTree as ET
from datetime import datetime
from pathlib import Path
from tempfile import TemporaryDirectory

import requests
from pypdf import PdfReader
from tqdm import tqdm

# Silence pypdf's WARNING chatter on non-compliant PDFs ("parsing for Object
# Streams", zlib decompress errors). The scraper already handles those cases
# (per-page try/except; page counts come from the page tree, not text
# extraction). They route through child loggers under "pypdf", so raising the
# parent to ERROR suppresses them without touching the scraper's own output.
logging.getLogger("pypdf").setLevel(logging.ERROR)

ROOT = Path(__file__).parent
DISAGG_CSV = ROOT / "cfr_words_pages_disaggregated.csv"
AGG_CSV = ROOT / "cfr_words_pages_by_title.csv"

PDF_URL = ("https://www.govinfo.gov/content/pkg/"
           "CFR-{year}-title{title}-vol{vol}/pdf/CFR-{year}-title{title}-vol{vol}.pdf")
XML_URL = ("https://www.govinfo.gov/bulkdata/CFR/"
           "{year}/title-{title}/CFR-{year}-title{title}-vol{vol}.xml")

N_TITLES = 50
MAX_VOL = 99
REQUEST_DELAY = 0.4
# Retry budget for transient failures. 6 attempts with exponential backoff
# (1+2+4+8+16s, capped at BACKOFF_CAP) gives ~31s of patience per URL: enough to
# ride out GovInfo's brief 502/503 hiccups, without hanging if it's truly down.
# On exhaustion request_with_retries raises and the run stops cleanly; re-run the
# same command to resume.
MAX_RETRIES = 6
BACKOFF_CAP = 30
TIMEOUT = 90
# Retried, then raised if they persist. Distinct from 302/404, which mean the
# file is genuinely absent (the "no more volumes" signal) -- this keeps a brief
# 5xx from being read as "absent" and silently truncating a title's volume scan.
TRANSIENT_STATUS = frozenset({429, 500, 502, 503, 504})
# CFR volumes are numbered contiguously, so two consecutive absences (302/404)
# marks the end of a title. Requiring two rather than one means a single
# transient absent-looking response can't end a scan early and undercount it.
CONSECUTIVE_ABSENT_TO_STOP = 2

DISAGG_FIELDS = ["year", "title", "vol", "pages", "words", "words_body",
                 "word_source", "pdf_present", "xml_present", "scraped_at"]
# In disaggregated rows:
#   `words`      = primary count: full XML itertext, or full PDF text for PDF rows.
#   `words_body` = body-only: full itertext MINUS <FMTR> (TOC, "Cite this Code")
#                  and <BMTR> (Finding Aids, List of CFR Sections Affected), which
#                  the GPO CFR XML User Guide excludes from the CFR's legal text.
#                  Computed by SUBTRACTION, not by reading the <TITLE> subtree:
#                  the schema isn't reliably hierarchical (pre-~2008 volumes put
#                  body elements as siblings of <TITLE>; Title 3's content sits in
#                  sibling <PROC>/<EXECORDR>/<MEMO>, leaving its <TITLE> subtree
#                  ~4 words), so a subtree method would wrongly demote Title 3 to
#                  PDF fallback. See xml_word_counts(). For PDF rows, words_body
#                  equals words.
AGG_FIELDS = ["year", "title", "title_name", "pages", "words", "words_all",
              "n_volumes", "xml_volumes", "pdf_volumes",
              "has_pdf_gaps", "has_xml_gaps",
              "year_complete", "last_scraped_at", "word_source"]
# In aggregated rows:
#   `words`     = sum of per-volume words_body (the headline body-only count).
#   `words_all` = sum of per-volume words (the full all-content count, kept
#                 alongside for reference / backward compatibility).

# CFR title names per https://www.ecfr.gov/titles. Title 35 was eliminated
# after the 2000 edition; its name is preserved here so historical rows still
# get a label.
CFR_TITLES: dict[int, str] = {
    1: "General Provisions", 2: "Grants and Agreements", 3: "The President",
    4: "Accounts", 5: "Administrative Personnel", 6: "Domestic Security",
    7: "Agriculture", 8: "Aliens and Nationality",
    9: "Animals and Animal Products", 10: "Energy", 11: "Federal Elections",
    12: "Banks and Banking", 13: "Business Credit and Assistance",
    14: "Aeronautics and Space", 15: "Commerce and Foreign Trade",
    16: "Commercial Practices", 17: "Commodity and Securities Exchanges",
    18: "Conservation of Power and Water Resources", 19: "Customs Duties",
    20: "Employees' Benefits", 21: "Food and Drugs", 22: "Foreign Relations",
    23: "Highways", 24: "Housing and Urban Development", 25: "Indians",
    26: "Internal Revenue", 27: "Alcohol, Tobacco Products and Firearms",
    28: "Judicial Administration", 29: "Labor", 30: "Mineral Resources",
    31: "Money and Finance: Treasury", 32: "National Defense",
    33: "Navigation and Navigable Waters", 34: "Education",
    35: "Reserved (formerly Panama Canal)",
    36: "Parks, Forests, and Public Property",
    37: "Patents, Trademarks, and Copyrights",
    38: "Pensions, Bonuses, and Veterans' Relief", 39: "Postal Service",
    40: "Protection of Environment",
    41: "Public Contracts and Property Management", 42: "Public Health",
    43: "Public Lands: Interior",
    44: "Emergency Management and Assistance", 45: "Public Welfare",
    46: "Shipping", 47: "Telecommunication",
    48: "Federal Acquisition Regulations System", 49: "Transportation",
    50: "Wildlife and Fisheries",
}

# PDF fallback fires when the <TITLE> subtree is missing or holds fewer than
# MIN_BODY_WORDS, or the body count falls below MIN_XML_PDF_RATIO of the PDF text
# count (catching sparse XMLs that have a TITLE element but no real content --
# the 1998 Title 1 vol 1 class of bug, where an earlier "any <SECTION>/<PART>
# tag" heuristic was fooled by such tags in the agency index inside <BMTR>).
MIN_BODY_WORDS = 1000
MIN_XML_PDF_RATIO = 0.5
# Upper bound on body/pdf. The duplication signature is ~2.0x (body elements
# twice over; in 2007 Title 3 vol 1, 252 <PROC> entries but 126 unique).
# Confirmed on ~10 cached volumes (9 in 2009, 1 in 2006) plus 2007 t3 v1. Healthy
# volumes run 0.85-0.95, but legitimately dense ones reach 1.72 (2006 Title 48
# vol 4: FAR clauses that XML captures and the PDF renders sparsely). 1.85 sits
# ~6 points below the duplication signature and ~13 above the densest legitimate
# volume seen. Anything legitimately exceeding it is demoted to PDF fallback and
# surfaced by the WARN print in scrape_title.
MAX_XML_PDF_RATIO = 1.85

# Editions whose bulk XML has PERVASIVE whole-volume duplication: the entire
# <CFRDOC> payload is emitted twice, so affected volumes carry two top-level
# <TITLE> blocks and the body count doubles. The PDF is unaffected, so this slips
# past MAX_XML_PDF_RATIO and surfaces as a words-per-page spike (+4% to +43% at
# title level for ~14 titles in 2009, ~21 in 2006). xml_word_counts detects the
# duplicated blocks structurally and divides back to one clean copy, so the fix
# is automatic and year-agnostic; this set is documentation only, gating nothing.
XML_DUPLICATION_YEARS: set[int] = {2006, 2009}

# A CFR year Y is rolling-published across Y and Y+1 (sometimes into Y+2 for
# Oct-1 titles). "Complete" combines two checks:
#   1. Calendar lag: the latest scrape touching Y was in Y+COMPLETE_LAG or later.
#   2. Volume sanity: versus the most recent prior complete year, no title's
#      n_volumes fell below MIN_VOLUMES_RATIO of its prior count and no
#      previously-present title vanished. This catches partial-publication years
#      the calendar rule alone would pass (the 1999 Title 26 and 2007 Title 14
#      dips). ELIMINATED_TITLES carves out Title 35, gone after the 2000 edition.
COMPLETE_LAG = 1
MIN_VOLUMES_RATIO = 0.7
ELIMINATED_TITLES: dict[int, int] = {35: 2000}  # title -> last year it existed

# Freshness net: a normal scrape also re-probes this many of the most recent
# cached editions, since CFR editions keep receiving volumes for ~1-2 years after
# their nominal date. Cheap -- scrape_title skips cached volumes and only probes
# past each title's last. Full re-download-and-diff stays behind --verify.
AUTO_VERIFY_RECENT = 3

# Years before REGDATA_CUTOVER use RegData word counts instead of GovInfo XML
# (no page counts for those years). 2000 is the cutover because (a) GovInfo XML
# for 1998-1999 has data-quality issues (the 1999 Title 26 dip), and (b) RegData
# total_words joins smoothly onto GovInfo body-only words there: median ±1.0-1.1%
# across all 50 titles, 45/50 within ±10%, holding for RegData 5.0 and 6.0 alike.
# See the validation appendix at the top of this file.
REGDATA_CUTOVER = 2000

# Earliest year of the historical record (RegData 6.0 begins 1970).
# write_aggregated regenerates the ENTIRE aggregate each run and its pre-cutover
# rows come only from RegData, so when a RegData CSV is supplied we load the full
# pre-cutover span regardless of --years -- otherwise a partial run (say, one
# recent GovInfo year) would silently drop 1970-1999 from the output.
REGDATA_MIN_YEAR = 1970

# RegData (Mercatus / QuantGov) is used two ways:
#   (1) primary word counts for years < REGDATA_CUTOVER (no GovInfo XML), and
#   (2) a body-only FALLBACK for GovInfo years when a title has no usable XML.
#       RegData's part-level `wordcount` excludes front/back matter, so it aligns
#       with the body-only XML measure (~2.5% gap) far better than PDF text
#       (~6%+ inflated). It fires only when a (year, title) produced ZERO trusted
#       XML volumes; partial failures keep their good XML volumes plus per-volume
#       PDF fallback, which beats a title-wide RegData substitution.
# Coverage isn't hardcoded: the fallback applies wherever the supplied CSV has a
# value (5.0 covers 1970-2022, 6.0 covers 1970-2025).

# Titles whose RegData word counts are known to be unreliable. Title 3 (The
# President) is a compilation of presidential documents outside the normal part
# structure: RegData's part-level parser captures only the small Chapter I shell,
# and the series breaks hard at its source transitions (402,731 in 1995 ->
# 17,905 in 1996). So for these titles, (1) pre-cutover RegData rows are NOT
# emitted (the series simply starts at the GovInfo era) and (2) they're excluded
# from the post-cutover fallback, where PDF text is the better option.
REGDATA_UNRELIABLE_TITLES = {3}

# Per-title coverage windows: (start_year, end_year), inclusive; None = open.
# Rows outside a title's window are not emitted -- a mechanism for trimming a
# title to a single content regime.
# Every year is retained even across content-regime discontinuities (e.g. Title 6's wage/price -> reserved ->
# DHS eras), which are annotated in the UI rather than trimmed out. So this map is
# intentionally EMPTY; the mechanism remains in case a trim is ever re-approved.
TITLE_COVERAGE: dict[int, tuple[int | None, int | None]] = {}


def in_title_coverage(title: int, year: int) -> bool:
    """True unless `title` has a coverage window that `year` falls outside of."""
    span = TITLE_COVERAGE.get(title)
    if span is None:
        return True
    start, end = span
    if start is not None and year < start:
        return False
    if end is not None and year > end:
        return False
    return True

# word_source label for RegData rows. Set from the --regdata-csv filename in
# main() so provenance stays accurate across RegData versions.
REGDATA_LABEL = "RegData"


def regdata_label_from_path(path: Path) -> str:
    """Infer a RegData version label from the CSV filename. Falls back to the
    generic 'RegData' if the version can't be determined."""
    name = path.name.lower()
    if "regdata6" in name or "regdata-us_6" in name:
        return "RegData 6.0"
    if "regdata5" in name or "regdata-us_5" in name:
        return "RegData 5.0"
    return "RegData"


def default_regdata_path() -> Path | None:
    """Auto-detect a RegData CSV sitting next to this script.

    Makes correct behaviour the DEFAULT: the post-cutover RegData fallback only
    fires when RegData is loaded, and because the aggregate is regenerated in
    full every run, a single run without it used to silently rewrite every
    (year, title) lacking trusted XML. The README and .gitignore both expect the
    file to live in this directory, so look for it here rather than making the
    user re-type --regdata-csv every time.

    Prefers the highest version when several are present, so the pick is
    deterministic. Returns None if nothing matches -- a fresh clone won't have
    the file (it's gitignored), in which case main() falls back to preserving
    the existing aggregate's pre-cutover rows and warns.
    """
    candidates = sorted(ROOT.glob("usregdata*.csv"))
    if not candidates:
        return None

    def version_key(p: Path) -> tuple[int, str]:
        m = re.search(r"usregdata[-_]?(\d+)", p.name.lower())
        return (int(m.group(1)) if m else 0, p.name)

    return max(candidates, key=version_key)


def parse_years(specs: list[str]) -> list[int]:
    current = datetime.today().year
    out: set[int] = set()
    for spec in specs:
        if "-" in spec:
            lo_s, hi_s = spec.split("-", 1)
            lo = int(lo_s)
            hi = current if hi_s == "" else int(hi_s)
            if hi < lo:
                raise ValueError(f"Range {spec!r} has end < start")
            out.update(range(lo, hi + 1))
        else:
            out.add(int(spec))
    return sorted(out)


def load_regdata(path: Path, years: list[int]) -> dict[tuple[int, int], int]:
    """Load RegData U.S. 6.0 CSV and return {(year, title): total_words}.

    Sums the part-level `wordcount` column across all parts for each
    (year, title) combination in `years`. Only processes rows where year is
    in the requested set for efficiency (the CSV is ~98 MB / 550k rows).

    The RegData `wordcount` column corresponds to body-only word counts
    (part-level text, excluding volume front/back matter). It aligns with the
    GovInfo body-only `words` column at the 2000 cutover within ~2.5% on
    average. See the validation appendix at the top of this file for full notes.
    """
    year_set = set(years)
    totals: dict[tuple[int, int], int] = {}
    n_rows = 0
    print(f"\nLoading RegData from {path.name} for years "
          f"{min(year_set)}-{max(year_set)}...", file=sys.stderr)
    with path.open(newline="", encoding="utf-8") as f:
        reader = csv.DictReader(f)
        for row in reader:
            try:
                year = int(row["year"])
            except (ValueError, KeyError):
                continue
            if year not in year_set:
                continue
            try:
                title = int(row["title"])
                wc = int(float(row.get("wordcount") or 0))
            except (ValueError, KeyError):
                continue
            totals[(year, title)] = totals.get((year, title), 0) + wc
            n_rows += 1
    print(f"  Loaded {n_rows:,} part rows → "
          f"{len(totals):,} (year, title) combinations.", file=sys.stderr)
    return totals


def load_pre_cutover_from_aggregate(
        path: Path) -> tuple[dict[tuple[int, int], int], str]:
    """Read the pre-REGDATA_CUTOVER (year, title) -> words rows from an existing
    aggregate CSV, plus the RegData source label they carry. Lets a run with no
    --regdata-csv carry the historical record forward instead of dropping it: the
    aggregate is fully regenerated each run and its 1970-1999 rows come only from
    RegData, and those values are static (RegData doesn't revise them), so reading
    them back is equivalent to re-deriving them."""
    data: dict[tuple[int, int], int] = {}
    label = REGDATA_LABEL
    try:
        with path.open(newline="") as f:
            for r in csv.DictReader(f):
                try:
                    y, t = int(r["year"]), int(r["title"])
                except (ValueError, KeyError, TypeError):
                    continue
                if y < REGDATA_CUTOVER:
                    try:
                        data[(y, t)] = int(float(r.get("words") or 0))
                    except ValueError:
                        continue
                    if r.get("word_source"):
                        label = r["word_source"]
    except OSError:
        pass
    return data, label


def request_with_retries(session: requests.Session, url: str) -> requests.Response:
    """GET `url` with exponential backoff on transient failures.

    Retries up to MAX_RETRIES times (sleeping 2**attempt seconds between tries)
    on two kinds of transient failure:
      - network-level errors (timeouts, dropped connections), and
      - transient HTTP statuses (TRANSIENT_STATUS: 429 and 5xx), e.g. GovInfo
        briefly overloaded.
    If a transient failure persists past MAX_RETRIES, this RAISES rather than
    returning, so the caller stops loudly (and the run can be resumed from the
    cache) instead of mistaking a server hiccup for a missing file and silently
    truncating a title's volume scan.

    Non-transient responses (200, and the 302/404 that mean "file absent") are
    returned as-is. Redirects are disabled so a real 200 (file present) is
    distinguishable from a 302 to GovInfo's /error page (file absent)."""
    last_exc: Exception | None = None
    for attempt in range(MAX_RETRIES):
        try:
            r = session.get(url, timeout=TIMEOUT, allow_redirects=False)
            if r.status_code not in TRANSIENT_STATUS:
                return r
            last_exc = requests.HTTPError(
                f"transient HTTP {r.status_code} for {url}")
        except requests.RequestException as e:
            last_exc = e
        # Back off before the next try, but not after the final attempt
        # (no point sleeping just to raise).
        if attempt < MAX_RETRIES - 1:
            time.sleep(min(2 ** attempt, BACKOFF_CAP))
    assert last_exc is not None
    raise last_exc


def download(session: requests.Session, url: str, dest: Path) -> bool:
    """200 with body -> writes file and returns True. A genuine "absent"
    response (302 redirect to /error, or 404) -> returns False without writing.
    Transient server errors (429/5xx) never reach here as False: they are
    retried in request_with_retries and raised if they persist, so they can't
    be misread as "absent"."""
    r = request_with_retries(session, url)
    if r.status_code == 200 and r.content:
        dest.write_bytes(r.content)
        return True
    return False


def pdf_pages_and_words(path: Path) -> tuple[int, int]:
    """Page count plus PDF-extracted word count. Word extraction is per-page
    with try/except so one corrupt page doesn't lose the whole volume."""
    reader = PdfReader(str(path))
    n_pages = len(reader.pages)
    chunks: list[str] = []
    for p in reader.pages:
        try:
            chunks.append(p.extract_text() or "")
        except Exception:
            chunks.append("")
    n_words = len(re.findall(r"\S+", "\n".join(chunks)))
    return n_pages, n_words


def xml_word_counts(path: Path) -> tuple[int, int, bool]:
    """Returns (body_words, all_words, has_body).

    body_words = all words minus the words inside <FMTR> (front matter) and
    <BMTR> (back matter). Per GPO's CFR XML User Guide, those wrappers hold
    user aids — table of contents, "Cite this Code", Explanation, Finding
    Aids, Alphabetical List of Agencies, List of CFR Sections Affected —
    which are NOT part of the legal text of the CFR.

    We deliberately compute body via subtraction rather than "everything
    inside <TITLE>" because the XML schema was flattened in the past: pre-~2008
    volumes have body elements (<SECTION>, <PART>, <SUBPART>) as direct
    siblings of <TITLE>, not children of it. Subtracting FMTR/BMTR is
    schema-invariant and gives consistent body counts across all years.

    all_words counts every text node in the document — the "what's in the
    file" measure, kept for reference and backward compatibility.

    De-duplication: some GovInfo volumes (pervasively 2006 and 2009) ship the
    entire volume body TWICE — the whole <CFRDOC> payload is emitted N times,
    so the file carries N copies of every top-level <TITLE> block (each paired
    with its own <FMTR>/<BMTR>/<AMDDATE>). This doubles the word count while
    leaving the PDF page count untouched, so it slips past the XML/PDF ratio
    guard (the PDF is unaffected) and shows up as a words-per-page spike. We
    detect it structurally — N = number of top-level <TITLE> blocks, confirmed
    by an equal count of <FMTR> blocks — and divide the counts by N to recover
    a single clean copy on the native GovInfo scale. N == 1 (the normal case)
    is a no-op. See XML_DUPLICATION_YEARS.

    has_body is True iff body_words >= MIN_BODY_WORDS. The caller uses this
    plus the XML/PDF ratio check to decide whether to trust XML or fall
    back to PDF text extraction."""
    tree = ET.parse(str(path))
    root = tree.getroot()
    all_text = " ".join(root.itertext())
    all_words = len(re.findall(r"\S+", all_text))
    wrapper_words = 0
    for wrapper_tag in ("FMTR", "BMTR"):
        for el in root.findall(wrapper_tag):
            wrapper_words += len(re.findall(r"\S+", " ".join(el.itertext())))
    body_words = all_words - wrapper_words

    # Whole-document duplication: N identical top-level copies. Require the
    # <TITLE> and <FMTR> counts to agree and be >= 2 before dividing, so a
    # volume with a single (or unusual) structure is never altered.
    n_title = len(root.findall("TITLE"))
    n_fmtr = len(root.findall("FMTR"))
    if n_title >= 2 and n_title == n_fmtr:
        body_words //= n_title
        all_words //= n_title

    return body_words, all_words, body_words >= MIN_BODY_WORDS


def load_cache() -> dict[tuple[int, int, int], dict]:
    if not DISAGG_CSV.exists():
        return {}
    out: dict[tuple[int, int, int], dict] = {}
    today = datetime.today().date().isoformat()
    with DISAGG_CSV.open(newline="") as f:
        for row in csv.DictReader(f):
            key = (int(row["year"]), int(row["title"]), int(row["vol"]))
            # Backfill scraped_at for rows from older-schema caches.
            row.setdefault("scraped_at", today)
            if not row.get("scraped_at"):
                row["scraped_at"] = today
            # words_body was added when the methodology switched to body-only.
            # Pre-existing PDF-fallback rows: copy words. Pre-existing XML rows:
            # leave blank (signals "needs backfill"; backfill_body_words refills
            # by re-fetching the XML).
            if "words_body" not in row or row.get("words_body") in ("", None):
                if row.get("word_source") == "pdf":
                    row["words_body"] = row.get("words", "0")
                else:
                    row["words_body"] = ""
            out[key] = row
    return out


def save_disagg(rows: list[dict]) -> None:
    rows_sorted = sorted(
        rows,
        key=lambda r: (int(r["year"]), int(r["title"]), int(r["vol"])),
    )
    tmp = DISAGG_CSV.with_suffix(".csv.tmp")
    with tmp.open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=DISAGG_FIELDS)
        w.writeheader()
        w.writerows(rows_sorted)
    tmp.replace(DISAGG_CSV)


def write_aggregated(rows: list[dict],
                     regdata_data: dict[tuple[int, int], int] | None = None,
                     ) -> None:
    agg: dict[tuple[int, int], dict] = {}
    for r in rows:
        key = (int(r["year"]), int(r["title"]))
        slot = agg.setdefault(key, {
            "pages": 0, "words_body": 0, "words_all": 0, "n_volumes": 0,
            "xml_volumes": 0, "pdf_volumes": 0,
            "pdf_missing": 0, "xml_missing": 0,
            "last_scraped_at": "",
        })
        pdf_ok = r["pdf_present"] == "True"
        xml_ok = r["xml_present"] == "True"
        src = r.get("word_source", "")
        if pdf_ok:
            slot["pages"] += int(r["pages"])
        else:
            slot["pdf_missing"] += 1
        if src in ("xml", "pdf"):
            slot["words_all"] += int(r["words"])
            # words_body may be blank for legacy rows pending backfill; treat
            # as 0 so partial-coverage years are visibly low rather than wrong.
            body = r.get("words_body", "")
            slot["words_body"] += int(body) if body not in ("", None) else 0
        if src == "xml":
            slot["xml_volumes"] += 1
        elif src == "pdf":
            slot["pdf_volumes"] += 1
        if not xml_ok:
            slot["xml_missing"] += 1
        slot["n_volumes"] += 1
        ts = r.get("scraped_at", "")
        if ts > slot["last_scraped_at"]:
            slot["last_scraped_at"] = ts

    # year_complete: see comment at MIN_VOLUMES_RATIO above. Walk years
    # ascending so each year can compare against the most recent *prior*
    # complete year (otherwise an incomplete prior would set a misleadingly low
    # baseline).
    year_max_scraped: dict[int, str] = {}
    vols_by_year: dict[int, dict[int, int]] = {}
    for (year, title), v in agg.items():
        ts = v["last_scraped_at"]
        if ts > year_max_scraped.get(year, ""):
            year_max_scraped[year] = ts
        vols_by_year.setdefault(year, {})[title] = v["n_volumes"]
    year_complete: dict[int, bool] = {}
    last_complete_year: int | None = None
    for y in sorted(year_max_scraped):
        try:
            scrape_year = int(year_max_scraped[y][:4])
        except (ValueError, IndexError):
            year_complete[y] = False
            continue
        if scrape_year < y + COMPLETE_LAG:
            year_complete[y] = False
            continue
        threshold_ok = True
        if last_complete_year is not None:
            prior = vols_by_year[last_complete_year]
            current = vols_by_year.get(y, {})
            for title, prior_vols in prior.items():
                last_valid = ELIMINATED_TITLES.get(title)
                if last_valid is not None and y > last_valid:
                    continue
                cur_vols = current.get(title, 0)
                if cur_vols < MIN_VOLUMES_RATIO * prior_vols:
                    threshold_ok = False
                    break
        year_complete[y] = threshold_ok
        if threshold_ok:
            last_complete_year = y

    # The aggregate excludes years AFTER the most recent complete year, since
    # those are still rolling-published and would change between scrapes.
    # Historical incomplete years (1999, 2007) ARE kept so consumers can filter
    # via year_complete. The disaggregated cache retains everything, so a later
    # re-scrape re-emits the dropped years once they settle.
    complete_years_only = [y for y, ok in year_complete.items() if ok]
    cutoff_year = max(complete_years_only) if complete_years_only else max(year_complete)

    tmp = AGG_CSV.with_suffix(".csv.tmp")
    with tmp.open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=AGG_FIELDS)
        w.writeheader()

        # --- RegData rows (pre-REGDATA_CUTOVER) ----------------------------
        # regdata_data may also contain cutover+ years (loaded for the XML
        # fallback used in the GovInfo loop below); those are NOT emitted as
        # standalone rows here -- only pre-cutover years become RegData rows.
        if regdata_data:
            # Group by year to compute year_complete (≥40 titles with data).
            titles_by_year: dict[int, dict[int, int]] = {}
            for (yr, tt), wds in regdata_data.items():
                if yr >= REGDATA_CUTOVER:
                    continue
                titles_by_year.setdefault(yr, {})[tt] = wds
            for yr in sorted(titles_by_year):
                title_map = titles_by_year[yr]
                yr_complete = len(title_map) >= 40
                for title_num in sorted(CFR_TITLES):
                    wds = title_map.get(title_num, 0)
                    if wds == 0:
                        continue
                    # Omit RegData word counts known to be unreliable (Title 3):
                    # do not publish the bad values. The title's word series
                    # starts in the GovInfo era instead (see comment above).
                    if title_num in REGDATA_UNRELIABLE_TITLES:
                        continue
                    # Trim titles to their current content regime (e.g. Title 6).
                    if not in_title_coverage(title_num, yr):
                        continue
                    w.writerow({
                        "year": yr,
                        "title": title_num,
                        "title_name": CFR_TITLES.get(title_num, ""),
                        "pages": "",
                        "words": wds,
                        "words_all": wds,
                        "n_volumes": "",
                        "xml_volumes": 0,
                        "pdf_volumes": 0,
                        "has_pdf_gaps": False,
                        "has_xml_gaps": False,
                        "year_complete": yr_complete,
                        "last_scraped_at": "",
                        "word_source": REGDATA_LABEL,
                    })

        # --- GovInfo rows (REGDATA_CUTOVER onwards) -------------------------
        for (year, title), v in sorted(agg.items()):
            if year > cutoff_year:
                continue
            # Trim titles to their current content regime (e.g. Title 6 < 2004).
            if not in_title_coverage(title, year):
                continue
            words_body = v["words_body"]
            words_all = v["words_all"]
            word_source = "GovInfo XML"
            # RegData fallback (see the integration comment near REGDATA_CUTOVER).
            # Fires only when NO volume of this (year, title) produced a trusted
            # XML body count, so the words would otherwise be ~6%+ inflated PDF
            # text. Page counts are untouched. Title 3 is excluded (RegData
            # unreliable there), and it no-ops where RegData has no value.
            if (v["xml_volumes"] == 0
                    and title not in REGDATA_UNRELIABLE_TITLES
                    and year >= REGDATA_CUTOVER):
                rd = regdata_data.get((year, title)) if regdata_data else None
                if rd:
                    words_body = rd
                    words_all = rd  # RegData has no all-content analogue
                    word_source = f"{REGDATA_LABEL} (XML fallback)"
            # The 2006/2009 whole-volume XML duplication is already corrected at
            # source in xml_word_counts, so words_body here is de-duplicated on
            # the native GovInfo scale; no year-gated substitution is needed.
            w.writerow({
                "year": year,
                "title": title,
                "title_name": CFR_TITLES.get(title, ""),
                "pages": v["pages"],
                "words": words_body,
                "words_all": words_all,
                "n_volumes": v["n_volumes"],
                "xml_volumes": v["xml_volumes"],
                "pdf_volumes": v["pdf_volumes"],
                "has_pdf_gaps": v["pdf_missing"] > 0,
                "has_xml_gaps": v["xml_missing"] > 0,
                "year_complete": year_complete[year],
                "last_scraped_at": v["last_scraped_at"],
                "word_source": word_source,
            })
    tmp.replace(AGG_CSV)


def scrape_title(session, year, title, cache, tmpdir, all_rows, seen):
    """Append disagg rows for one (year, title) to all_rows/seen, in place."""
    consecutive_absent = 0
    for vol in range(1, MAX_VOL + 1):
        key = (year, title, vol)
        if key in cache:
            if key not in seen:
                all_rows.append(cache[key])
                seen.add(key)
            consecutive_absent = 0  # a cached volume is a present volume
            continue

        pdf_dest = tmpdir / f"pdf_{year}_{title}_{vol}.pdf"
        xml_dest = tmpdir / f"xml_{year}_{title}_{vol}.xml"

        time.sleep(REQUEST_DELAY)
        pdf_ok = download(session, PDF_URL.format(year=year, title=title, vol=vol), pdf_dest)
        time.sleep(REQUEST_DELAY)
        xml_ok = download(session, XML_URL.format(year=year, title=title, vol=vol), xml_dest)

        if not pdf_ok and not xml_ok:
            # Volume absent (both PDF and XML returned 302/404). Don't stop on
            # the first absence: require CONSECUTIVE_ABSENT_TO_STOP in a row so a
            # single transient absent-looking response can't truncate the title.
            # Transient 5xx never reach here (retried/raised in download); this
            # guards the rarer one-off 404 on a volume that actually exists.
            consecutive_absent += 1
            if consecutive_absent >= CONSECUTIVE_ABSENT_TO_STOP:
                break
            continue
        consecutive_absent = 0  # found a real volume; reset the run of absences

        pages = 0
        pdf_words: int | None = None
        if pdf_ok:
            try:
                pages, pdf_words = pdf_pages_and_words(pdf_dest)
            except Exception as e:
                print(f"  WARN: pypdf failed on {year} t{title} v{vol}: {e}", file=sys.stderr)
            pdf_dest.unlink(missing_ok=True)

        xml_body_words: int | None = None
        xml_all_words: int | None = None
        xml_has_body = False
        if xml_ok:
            try:
                xml_body_words, xml_all_words, xml_has_body = xml_word_counts(xml_dest)
            except Exception as e:
                print(f"  WARN: XML parse failed on {year} t{title} v{vol}: {e}", file=sys.stderr)
            xml_dest.unlink(missing_ok=True)

        # Trust XML if its body has >= MIN_BODY_WORDS and, when both signals are
        # available, sits within [MIN_XML_PDF_RATIO, MAX_XML_PDF_RATIO] of the
        # PDF's: the lower bound catches sparse XMLs, the upper the duplication
        # bug. Otherwise fall back to PDF text (~6% inflated, flagged in
        # word_source).
        xml_trusted = (
            xml_body_words is not None
            and xml_has_body
            and (pdf_words is None
                 or (MIN_XML_PDF_RATIO * pdf_words <= xml_body_words
                     <= MAX_XML_PDF_RATIO * pdf_words))
        )
        if (xml_body_words is not None and pdf_words is not None
                and xml_body_words > MAX_XML_PDF_RATIO * pdf_words):
            print(f"  WARN: {year} t{title} v{vol} XML body "
                  f"{xml_body_words:,} > {MAX_XML_PDF_RATIO} x PDF "
                  f"{pdf_words:,} -- demoted to PDF fallback. Review "
                  f"manually: likely GovInfo XML content duplication, but "
                  f"could be a legitimately dense volume.", file=sys.stderr)
        if xml_trusted:
            words = xml_all_words
            words_body = xml_body_words
            word_source = "xml"
        elif pdf_words is not None:
            # PDF text can't be cleanly decomposed into body vs. user-aids,
            # so words_body falls back to the full count for these (~0.3% of
            # volumes historically). Documented in the README.
            words = pdf_words
            words_body = pdf_words
            word_source = "pdf"
        else:
            words = 0
            words_body = 0
            word_source = "none"

        row = {
            "year": year, "title": title, "vol": vol,
            "pages": pages, "words": words, "words_body": words_body,
            "word_source": word_source,
            "pdf_present": str(pdf_ok), "xml_present": str(xml_ok),
            "scraped_at": datetime.today().date().isoformat(),
        }
        all_rows.append(row)
        seen.add(key)


def backfill_body_words(session: requests.Session, cache: dict,
                        tmpdir: Path, all_rows: list[dict]) -> None:
    """Re-fetch XML for cached rows that lack a `words_body` value (pre-existing
    rows from before the body-only methodology was introduced). Updates the
    cache row in place; the new value is also reflected in all_rows because
    those entries share the same dict objects."""
    needs = [k for k, r in cache.items()
             if r.get("word_source") == "xml"
             and r.get("words_body") in ("", None)]
    if not needs:
        return
    print(f"\nBackfilling words_body for {len(needs):,} cached XML rows "
          f"(re-fetching XMLs only, no PDFs)...", file=sys.stderr)
    for i, key in enumerate(tqdm(needs, desc="backfill", unit="vol")):
        year, title, vol = key
        xml_dest = tmpdir / f"backfill_{year}_{title}_{vol}.xml"
        time.sleep(REQUEST_DELAY)
        ok = download(session, XML_URL.format(year=year, title=title, vol=vol), xml_dest)
        if not ok:
            # The cache says XML was present at original scrape, but it's
            # gone now (rare; GovInfo occasionally re-renders or moves files).
            # Mark with words_body = 0 to avoid blocking aggregation forever.
            cache[key]["words_body"] = "0"
            continue
        try:
            body_words, all_words, _ = xml_word_counts(xml_dest)
        except Exception as e:
            print(f"  WARN: parse failed on {year} t{title} v{vol}: {e}",
                  file=sys.stderr)
            xml_dest.unlink(missing_ok=True)
            continue
        xml_dest.unlink(missing_ok=True)
        cache[key]["words_body"] = str(body_words)
        # Save incrementally so an interrupted backfill is recoverable.
        if (i + 1) % 100 == 0:
            save_disagg(all_rows)
    save_disagg(all_rows)
    print("Backfill complete.", file=sys.stderr)


def report_verify(old: dict, all_rows: list[dict],
                  scope_keys: set[tuple[int, int]]) -> None:
    """Print a change report for a --verify run: compare the pre-verify cached
    values (`old`, keyed by (year, title, vol)) against the freshly re-scraped
    rows for the same scope. Reports volumes added (late-posted), removed (no
    longer on GovInfo), or whose page/word counts changed."""
    new = {(int(r["year"]), int(r["title"]), int(r["vol"])): r
           for r in all_rows
           if (int(r["year"]), int(r["title"])) in scope_keys}
    added = sorted(k for k in new if k not in old)
    removed = sorted(k for k in old if k not in new)
    changed = []
    for k in sorted(set(old) & set(new)):
        o, n = old[k], new[k]
        diffs = [f for f in ("pages", "words", "words_body")
                 if str(o.get(f, "")) != str(n.get(f, ""))]
        if diffs:
            changed.append((k, o, n, diffs))
    print("\n=== VERIFY report ===", file=sys.stderr)
    print(f"  volumes re-checked : {len(new):,}", file=sys.stderr)
    print(f"  added (late-posted): {len(added)}", file=sys.stderr)
    print(f"  removed (gone)     : {len(removed)}", file=sys.stderr)
    print(f"  changed values     : {len(changed)}", file=sys.stderr)
    for k in added:
        print(f"    + {k[0]} t{k[1]} v{k[2]}  (new volume)", file=sys.stderr)
    for k in removed:
        print(f"    - {k[0]} t{k[1]} v{k[2]}  (no longer on GovInfo)",
              file=sys.stderr)
    for k, o, n, diffs in changed:
        deltas = "; ".join(f"{f}: {o.get(f)} -> {n.get(f)}" for f in diffs)
        print(f"    ~ {k[0]} t{k[1]} v{k[2]}  ({deltas})", file=sys.stderr)
    if not (added or removed or changed):
        print("  No changes -- the cached values match GovInfo exactly.",
              file=sys.stderr)


def main() -> None:
    parser = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument(
        "--years", nargs="+",
        help='Years to scrape: individual ("1997"), closed range ("1997-2010"), '
             'or open-ended range ("1997-"). Can mix multiple. Omit with '
             '--backfill-only to re-aggregate from cache without scraping.',
    )
    parser.add_argument(
        "--titles", nargs="+", type=int, default=list(range(1, N_TITLES + 1)),
        help="Title numbers to scrape (default: 1-50).",
    )
    parser.add_argument(
        "--backfill-only", action="store_true",
        help="Only run the words_body backfill on cached rows (re-fetches "
             "XMLs to populate body-only word counts for pre-existing rows) "
             "and re-aggregate. Does not scrape any new (year, title, vol).",
    )
    parser.add_argument(
        "--refresh", action="store_true",
        help="Drop cached rows inside the --years range and re-download them "
             "from GovInfo. Useful after manual CSV edits or to re-validate "
             "years that were still rolling-published when first scraped. "
             "Requires --years; backs the cache up to '.csv.bak'; prompts for "
             "confirmation unless --yes is set.",
    )
    parser.add_argument(
        "--verify", action="store_true",
        help="Re-verification pass. Like --refresh, but also compares every "
             "freshly-scraped value against the cache and prints a change report "
             "(volumes added, removed, or whose page/word counts changed). Use to "
             "confirm no values have drifted since the last run. Requires --years.",
    )
    parser.add_argument(
        "--no-recent-check", action="store_true",
        help=f"Disable the automatic freshness check. By default a normal scrape "
             f"also re-probes the {AUTO_VERIFY_RECENT} most recent cached "
             f"editions for late-posted volumes (cheap; skips cached volumes). "
             f"No effect with --refresh/--verify.",
    )
    parser.add_argument(
        "--regdata-csv", type=Path, default=None,
        metavar="PATH",
        help=f"Override the RegData U.S. CSV path. Not normally needed: any "
             f"usregdata*.csv in this script's directory is auto-detected "
             f"(highest version wins), so this flag is only for pointing "
             f"elsewhere or pinning a version. RegData supplies the pre-"
             f"{REGDATA_CUTOVER} word counts and the post-cutover fallback for "
             f"titles with no usable XML; with no CSV available the scraper warns "
             f"and those rows revert to ~6%%-inflated PDF text. Page counts always "
             f"come from the PDF.",
    )
    parser.add_argument(
        "-y", "--yes", action="store_true",
        help="Skip the confirmation prompt that --refresh triggers.",
    )
    args = parser.parse_args()
    if args.refresh and not args.years:
        parser.error("--refresh requires --years")
    if args.verify and not args.years:
        parser.error("--verify requires --years")
    if not args.years and not args.backfill_only:
        parser.error("--years is required unless --backfill-only is set")

    # Split requested years into RegData (pre-cutover) and GovInfo (cutover+).
    all_years = parse_years(args.years) if args.years else []
    regdata_years = [y for y in all_years if y < REGDATA_CUTOVER]
    govinfo_years  = [y for y in all_years if y >= REGDATA_CUTOVER]

    if args.regdata_csv is not None and not args.regdata_csv.exists():
        parser.error(f"--regdata-csv file not found: {args.regdata_csv}")
    # An explicit --regdata-csv wins; otherwise auto-detect one sitting next to
    # this script, so correct behaviour doesn't hinge on remembering a flag.
    regdata_path = args.regdata_csv or default_regdata_path()

    if regdata_years and regdata_path is None:
        parser.error(
            f"No RegData CSV found, but --years includes years before "
            f"{REGDATA_CUTOVER} (requested: {min(regdata_years)}-"
            f"{max(regdata_years)}). Put usregdata6.csv (RegData U.S. 6.0) in "
            f"this directory, or pass --regdata-csv. Download it from the "
            f"QuantGov CSV download page: https://www.quantgov.org/csv-download"
        )

    # RegData feeds the aggregate two ways: the pre-REGDATA_CUTOVER rows, and the
    # fallback for GovInfo years with no usable XML. The aggregate is fully
    # regenerated each run and its 1970-1999 rows come ONLY from RegData, so when
    # no RegData CSV is available at all we carry those static rows forward from
    # the existing aggregate rather than dropping them.
    global REGDATA_LABEL
    regdata_data: dict[tuple[int, int], int] = {}
    if regdata_path is not None:
        if args.regdata_csv is None:
            print(f"Using RegData source: {regdata_path.name} (auto-detected "
                  f"alongside this script; override with --regdata-csv).",
                  file=sys.stderr)
        REGDATA_LABEL = regdata_label_from_path(regdata_path)
        # Load EVERY year RegData might be asked for -- NOT just those in --years.
        # write_aggregated regenerates the whole aggregate on each run and
        # consults regdata_data for (a) all pre-cutover rows and (b) the
        # post-cutover fallback on ANY year. Scoping this load to --years meant a
        # narrow run like `--years 2024` left out-of-scope fallback rows (2000
        # t35, 2002 t11, 2002 t25, 2004 t25) with no RegData entry, silently
        # reverting them to ~6%-inflated PDF text. Reading the CSV dominates the
        # cost and year filtering is trivial, so just load the full span.
        load_years = list(range(REGDATA_MIN_YEAR, datetime.today().year + 1))
        regdata_data = load_regdata(regdata_path, load_years)
    elif AGG_CSV.exists():
        # No RegData CSV: preserve the existing aggregate's pre-cutover rows so
        # regenerating never drops the historical record.
        regdata_data, label = load_pre_cutover_from_aggregate(AGG_CSV)
        if regdata_data:
            REGDATA_LABEL = label
            print(f"Preserving {len(regdata_data):,} pre-{REGDATA_CUTOVER} "
                  f"(year, title) rows from {AGG_CSV.name} "
                  f"(no RegData CSV found).", file=sys.stderr)

    print("CFR by-title scraper", file=sys.stderr)
    print("--------------------", file=sys.stderr)
    print("Downloads CFR PDFs (page counts) and bulk XML (word counts) from",
          file=sys.stderr)
    print("GovInfo, then aggregates per (year, title). See README.md for full",
          file=sys.stderr)
    print("methodology, update cadence, and coverage caveats.", file=sys.stderr)
    print("", file=sys.stderr)
    print("Outputs (overwritten in place):", file=sys.stderr)
    print(f"  {DISAGG_CSV.name}  per (year, title, vol); also the cache",
          file=sys.stderr)
    print(f"  {AGG_CSV.name}       per (year, title), aggregated",
          file=sys.stderr)
    print("", file=sys.stderr)
    print("Re-runs reuse cached (year, title, vol) rows from the disaggregated",
          file=sys.stderr)
    print("CSV; only missing combinations are fetched. A full from-scratch",
          file=sys.stderr)
    print("scrape (empty cache) downloads thousands of files and takes several hours.",
          file=sys.stderr)
    print("", file=sys.stderr)

    years = govinfo_years   # GovInfo scraping loop uses only cutover+ years
    titles = sorted(args.titles)
    cache = load_cache()

    # Freshness net: re-probe the most recent cached editions so late-posted
    # volumes are caught even when outside --years (see AUTO_VERIFY_RECENT). Off
    # for --refresh/--verify, which carry explicit scope.
    if years and not (args.refresh or args.verify) and not args.no_recent_check:
        cached_gov_years = sorted({int(k[0]) for k in cache
                                   if int(k[0]) >= REGDATA_CUTOVER})
        recent = cached_gov_years[-AUTO_VERIFY_RECENT:]
        extra = sorted(set(recent) - set(years))
        if extra:
            print(f"Freshness check: also re-probing recent edition(s) {extra} "
                  f"for late-posted volumes (disable with --no-recent-check).",
                  file=sys.stderr)
            years = sorted(set(years) | set(extra))

    # Guard: name any (year, title) the post-cutover RegData fallback CANNOT
    # cover, so it never degrades silently. Two causes, same symptom:
    #   (a) no RegData CSV available at all, or
    #   (b) the CSV's version predates the year (RegData 5.0 stops at 2022, 6.0
    #       at 2025), so regdata_data has no entry for it.
    # Either way the row keeps its ~6%-inflated PDF-text count instead of
    # RegData's body-only one -- and because the aggregate is regenerated in FULL
    # every run, that lands across the whole dataset, not just the years scraped.
    # Only rows that would actually have used the fallback are reported, so this
    # stays quiet unless it genuinely matters (a bare version-coverage check
    # would fire on every run for the current year and become noise).
    if any(y >= REGDATA_CUTOVER for y in years):
        has_xml: dict[tuple[int, int], bool] = {}
        for k, r in cache.items():
            y, t = int(k[0]), int(k[1])
            if y < REGDATA_CUTOVER or t in REGDATA_UNRELIABLE_TITLES:
                continue
            has_xml[(y, t)] = (has_xml.get((y, t), False)
                               or r.get("word_source") == "xml")
        uncovered = sorted(k for k, ok in has_xml.items()
                           if not ok and k not in regdata_data)
        if uncovered:
            shown = ", ".join(f"{y} t{t}" for y, t in uncovered[:8])
            if len(uncovered) > 8:
                shown += f", ... (+{len(uncovered) - 8} more)"
            if regdata_path is None:
                cause = "no RegData CSV was found"
                remedy = ("Put usregdata6.csv in this directory (or pass "
                          "--regdata-csv)")
            else:
                # Report the file's actual coverage rather than naming a version
                # to upgrade to -- the user may already be on the newest release
                # (e.g. 6.0 stops at 2025, so a 2026 gap can't be fixed by
                # upgrading yet).
                covered = [y for y, _t in regdata_data]
                end = max(covered) if covered else None
                cause = (f"{regdata_path.name} has no data for them"
                         + (f" (its coverage ends at {end})" if end else ""))
                remedy = ("Use a RegData release that covers these years")
            print("", file=sys.stderr)
            print(f"WARNING: the RegData word-count fallback cannot cover "
                  f"{len(uncovered)} (year, title) row(s):", file=sys.stderr)
            print(f"         {cause}.", file=sys.stderr)
            print("         They have no trusted XML, so they keep an inflated "
                  "PDF-text count", file=sys.stderr)
            print("         instead of RegData's body-only count:",
                  file=sys.stderr)
            print(f"           {shown}", file=sys.stderr)
            print(f"         {remedy} and re-run to fix them.", file=sys.stderr)
            print("", file=sys.stderr)

    if regdata_years:
        print(f"RegData years   : {min(regdata_years)}-{max(regdata_years)} "
              f"({len(regdata_years)} years, word counts only, no pages)",
              file=sys.stderr)
    if govinfo_years:
        years_label = (f"{years[0]}-{years[-1]} ({len(years)} years)"
                       if len(years) > 1 else str(years[0]))
    else:
        years_label = "(none)"

    if args.backfill_only:
        print("Mode: --backfill-only is set. Will re-fetch XMLs for cached",
              file=sys.stderr)
        print("      rows lacking words_body, then re-aggregate.",
              file=sys.stderr)
        if years:
            print("      --years also given, so new (year, title, vol)",
                  file=sys.stderr)
            print("      combinations will be scraped after the backfill.",
                  file=sys.stderr)

    scope_keys: set[tuple[int, int]] = set()
    in_scope = 0
    if years:
        all_titles = list(range(1, N_TITLES + 1))
        titles_label = (f"1-{N_TITLES} (all)" if titles == all_titles
                        else str(titles))
        scope_keys = {(y, t) for y in years for t in titles}
        in_scope = sum(1 for (y, t, _v) in cache if (y, t) in scope_keys)
        cache_action = ("RE-VERIFIED" if args.verify
                        else "REFRESHED" if args.refresh else "reused")
        print(f"GovInfo years   : {years_label}", file=sys.stderr)
        print(f"Titles to scrape: {titles_label}", file=sys.stderr)
        print(f"Cache           : {len(cache):,} rows total, "
              f"{in_scope:,} in requested scope (will be {cache_action})",
              file=sys.stderr)

        current_year = datetime.today().year
        rolling = [y for y in years if y >= current_year - COMPLETE_LAG]
        if rolling:
            print("", file=sys.stderr)
            print(f"NOTE: year(s) {rolling} may still be rolling-published on "
                  f"GovInfo.", file=sys.stderr)
            print("      Volumes not yet posted will be re-probed on the next "
                  "run.", file=sys.stderr)
            print("      Filter on year_complete == True for time-series "
                  "analyses to", file=sys.stderr)
            print("      avoid mixing rolling years with finalized ones.",
                  file=sys.stderr)
    else:
        print(f"Cache: {len(cache):,} rows total in {DISAGG_CSV.name}",
              file=sys.stderr)
    print("", file=sys.stderr)

    # --verify shares --refresh's invalidate-and-re-download path, but first
    # snapshots the current scope so it can report what changed afterward.
    verify_old: dict = {}
    if args.refresh or args.verify:
        mode = "VERIFY" if args.verify else "REFRESH"
        # Estimate based on REQUEST_DELAY=0.4s x 2 requests/volume + HTTP +
        # parse overhead. ~1.5s/volume matches the README's "few hours" for a
        # full 2000-present scrape of ~6500 volumes.
        estimated_seconds = in_scope * 1.5
        if estimated_seconds < 3600:
            estimate_str = f"~{max(estimated_seconds / 60, 1):.0f} minutes"
        else:
            estimate_str = f"~{estimated_seconds / 3600:.1f} hours"
        print(f"{mode}: will re-download every volume in scope "
              f"({in_scope:,} cached rows in {years_label})", file=sys.stderr)
        if args.verify:
            print("         and report any values that changed vs the cache.",
                  file=sys.stderr)
            print("         WARNING: a full re-verification is SLOW -- it "
                  "re-downloads every volume", file=sys.stderr)
            print("         in scope (the whole history is a few hours). Narrow "
                  "--years, or start a", file=sys.stderr)
            print("         big run at the beginning of your workday. The "
                  "routine freshness check", file=sys.stderr)
            print("         already covers recent editions.", file=sys.stderr)
        else:
            print("         from GovInfo.", file=sys.stderr)
        print(f"         Estimated time: {estimate_str}.", file=sys.stderr)
        if estimated_seconds >= 3600:
            print("         Consider starting it at the beginning of your "
                  "workday.", file=sys.stderr)
        print(f"         The current {DISAGG_CSV.name} will be backed up to",
              file=sys.stderr)
        print(f"         {DISAGG_CSV.with_suffix('.csv.bak').name} before "
              "rows are dropped.", file=sys.stderr)
        print("", file=sys.stderr)
        if not args.yes:
            try:
                resp = input("Proceed? [y/N]: ")
            except EOFError:
                print("No TTY available; re-run with --yes to skip the "
                      "prompt.", file=sys.stderr)
                sys.exit(1)
            if resp.strip().lower() not in ("y", "yes"):
                print("Aborted.", file=sys.stderr)
                sys.exit(0)
        if DISAGG_CSV.exists():
            backup_path = DISAGG_CSV.with_suffix(".csv.bak")
            backup_path.write_bytes(DISAGG_CSV.read_bytes())
            print(f"Backed up {DISAGG_CSV.name} to {backup_path.name}.",
                  file=sys.stderr)
        if args.verify:
            verify_old = {k: dict(v) for k, v in cache.items()
                          if (k[0], k[1]) in scope_keys}
        to_drop = [k for k in cache if (k[0], k[1]) in scope_keys]
        for k in to_drop:
            del cache[k]
        save_disagg(list(cache.values()))
        print(f"Dropped {len(to_drop):,} cached rows. Starting scrape...",
              file=sys.stderr)
        print("", file=sys.stderr)

    session = requests.Session()
    session.headers["User-Agent"] = "Reg-Stats by-title CFR scraper"

    all_rows: list[dict] = list(cache.values())
    seen = set(cache.keys())
    initial_row_count = len(all_rows)

    with TemporaryDirectory() as tdir:
        tmpdir = Path(tdir)
        # Backfill first: populate words_body on pre-existing cached XML rows
        # so the aggregated CSV's body-only metric is complete. No-op if all
        # rows already have words_body.
        backfill_body_words(session, cache, tmpdir, all_rows)
        if years:
            print(f"\nBeginning scrape of {len(years)} year(s). New volumes "
                  f"will be downloaded from GovInfo; cached rows will be "
                  f"skipped.", file=sys.stderr)
        for year in years:
            print(f"\n=== {year} ===", file=sys.stderr)
            year_start_count = len(all_rows)
            for title in tqdm(titles, desc=str(year), unit="title"):
                try:
                    scrape_title(session, year, title, cache, tmpdir, all_rows, seen)
                except requests.RequestException as e:
                    # Transient failure survived all MAX_RETRIES (likely a
                    # sustained GovInfo outage). Save and stop cleanly with a
                    # resume hint rather than dumping a traceback.
                    save_disagg(all_rows)
                    print(f"\nStopped at {year} title {title}: persistent "
                          f"network/server error after {MAX_RETRIES} retries "
                          f"({e}).", file=sys.stderr)
                    print("Progress is saved. Re-run the same command to resume "
                          "from where it left off (GovInfo is likely briefly "
                          "down; waiting a few minutes may help).",
                          file=sys.stderr)
                    sys.exit(1)
                save_disagg(all_rows)
            write_aggregated(all_rows, regdata_data=regdata_data)
            year_new = len(all_rows) - year_start_count
            if year_new > 0:
                print(f"{year}: added {year_new:,} new volume(s) to cache.",
                      file=sys.stderr)
            else:
                print(f"{year}: no new volumes (all volumes already cached).",
                      file=sys.stderr)
        if args.verify:
            report_verify(verify_old, all_rows, scope_keys)
        if args.backfill_only:
            write_aggregated(all_rows, regdata_data=regdata_data)

    # If only RegData years were requested (no GovInfo scraping), still write.
    if not years and regdata_data:
        write_aggregated(all_rows, regdata_data=regdata_data)

    new_rows = len(all_rows) - initial_row_count
    print("", file=sys.stderr)
    if regdata_years:
        print(f"RegData: wrote {len(regdata_data):,} (year, title) rows "
              f"for {len(regdata_years)} year(s) to {AGG_CSV.name}.",
              file=sys.stderr)
    if years:
        if new_rows > 0:
            print(f"GovInfo: added {new_rows:,} new volume(s) across "
                  f"{len(years)} year(s).", file=sys.stderr)
        else:
            print(f"GovInfo: no new volumes -- {len(years)} year(s) "
                  f"already fully cached.", file=sys.stderr)
    if not years and not regdata_data:
        print("Done. Backfill and re-aggregation complete.", file=sys.stderr)
    print(f"Updated {DISAGG_CSV.name} ({len(all_rows):,} rows total) and "
          f"{AGG_CSV.name}.", file=sys.stderr)
    print("END.", file=sys.stderr)


if __name__ == "__main__":
    main()
