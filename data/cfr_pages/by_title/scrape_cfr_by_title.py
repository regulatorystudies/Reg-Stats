"""Scrape CFR page counts (from PDFs) and word counts (from bulk XML) per title.

For each (year, title, volume) in scope:
  - GET the PDF and count pages with pypdf.
  - GET the bulk XML and count whitespace-delimited tokens from all text nodes.

Then aggregate to (year, title). Writes two CSVs:
  cfr_pages_words_disaggregated.csv  -- per (year, title, vol); also a cache
  cfr_pages_words_by_title.csv       -- per (year, title), aggregated

Re-runs only fetch (year, title, vol) combinations that aren't already cached
in the disaggregated CSV. Progress is saved incrementally after each title, so
an interrupted run can be resumed by re-invoking with the same arguments. To
force a fresh re-scrape of cached rows (e.g., after manual CSV edits or to
re-validate years that were rolling-published at original scrape time), pass
--refresh. The previous disaggregated CSV is backed up to ".csv.bak" first.

Coverage caveats:
  - GovInfo CFR coverage starts in 1997. 1996 is partial (most titles absent)
    and not supported.
  - The CFR Index (annual document, not per-title) is not included.

Usage:
  python scrape_cfr_by_title.py --years 1997 2024          # two specific years
  python scrape_cfr_by_title.py --years 1997-2010          # closed range
  python scrape_cfr_by_title.py --years 1997-              # to current year
  python scrape_cfr_by_title.py --years 2024 --refresh     # re-scrape 2024 from
                                                           #   scratch (prompts y/N)
"""
from __future__ import annotations

import argparse
import csv
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

ROOT = Path(__file__).parent
DISAGG_CSV = ROOT / "cfr_pages_words_disaggregated.csv"
AGG_CSV = ROOT / "cfr_pages_words_by_title.csv"

PDF_URL = ("https://www.govinfo.gov/content/pkg/"
           "CFR-{year}-title{title}-vol{vol}/pdf/CFR-{year}-title{title}-vol{vol}.pdf")
XML_URL = ("https://www.govinfo.gov/bulkdata/CFR/"
           "{year}/title-{title}/CFR-{year}-title{title}-vol{vol}.xml")

N_TITLES = 50
MAX_VOL = 99
REQUEST_DELAY = 0.4
MAX_RETRIES = 3
TIMEOUT = 90

DISAGG_FIELDS = ["year", "title", "vol", "pages", "words", "words_body",
                 "word_source", "pdf_present", "xml_present", "scraped_at"]
# In disaggregated rows:
#   `words`      = the chosen primary count. For XML-sourced rows this is the
#                  full all-content itertext count of the XML. For PDF-sourced
#                  rows this is the full PDF text word count.
#   `words_body` = body-only count. For XML rows: the word count restricted to
#                  the <TITLE> subtree (i.e., the regulatory hierarchy
#                  TITLE > CHAPTER > SUBCHAP > PART > SUBPART > SECTION),
#                  excluding <FMTR> (table of contents, "Cite this Code",
#                  Explanation) and <BMTR> (Finding Aids, Alphabetical List of
#                  Agencies, List of CFR Sections Affected). Per the GPO CFR
#                  XML User Guide, those user-aid sections are NOT part of the
#                  legal text of the CFR. For PDF-sourced rows, words_body
#                  equals words because PDF text extraction can't cleanly
#                  separate body from finding-aid material.
AGG_FIELDS = ["year", "title", "title_name", "pages", "words", "words_all",
              "n_volumes", "xml_volumes", "pdf_volumes",
              "has_pdf_gaps", "has_xml_gaps",
              "year_complete", "last_scraped_at"]
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

# The body of a CFR volume's XML lives under the top-level <TITLE> element
# (the regulatory hierarchy TITLE > CHAPTER > SUBCHAP > PART > SUBPART >
# SECTION). The PDF fallback fires when either the <TITLE> subtree is missing
# / contains fewer than MIN_BODY_WORDS, or the body word count is below
# MIN_XML_PDF_RATIO of the PDF text word count (catches sparse XMLs that have
# a TITLE element but no real content). The threshold guards against the
# 1998 Title 1 vol 1 class of bug where a previous heuristic (presence of
# any <SECTION>/<PART> tag) was fooled by such tags appearing in the
# alphabetical agency index inside <BMTR>.
MIN_BODY_WORDS = 1000
MIN_XML_PDF_RATIO = 0.5
# Upper bound on body / pdf. The duplication signature is ~2.0x (every
# <SECTNO>/<P>/<E> tag occurring twice while <PRTPAGE> markers stay stable);
# confirmed on 10 cached volumes (9 in 2009, 1 in 2006). Healthy volumes
# normally run 0.85-0.95, but legitimately dense ones can reach 1.72 (e.g.
# 2006 Title 48 vol 4 -- Federal Acquisition Regulations, dense with
# cross-referenced clauses XML captures and PDF renders sparsely). 1.85
# gives ~6 points of cushion below the duplication signature, ~13 points
# of cushion above the highest-density legitimate volume observed.
# Any future volume that legitimately exceeds 1.85 will get demoted to PDF
# fallback; the WARN print in scrape_title makes such cases reviewable.
MAX_XML_PDF_RATIO = 1.85

# A CFR year Y is rolling-published across Y and Y+1 (sometimes spilling into
# Y+2 for Oct-1 revision titles). Marking a year "complete" combines two checks:
#   1. Calendar lag: the latest scrape touching Y was in Y+COMPLETE_LAG or later.
#   2. Per-title volume sanity: relative to the most recent prior complete year,
#      no title's n_volumes has dropped below MIN_VOLUMES_RATIO of its prior
#      count, and no previously-present title is missing entirely. This catches
#      partial-publication years even after the calendar lag passes (e.g., the
#      1999 Title 26 dip and 2007 Title 14 dip, which look like GovInfo
#      publication artifacts in years the bare calendar rule would mark
#      complete). ELIMINATED_TITLES carves out the one title we know is
#      permanently gone (Title 35, eliminated after the 2000 edition).
COMPLETE_LAG = 1
MIN_VOLUMES_RATIO = 0.7
ELIMINATED_TITLES: dict[int, int] = {35: 2000}  # title -> last year it existed


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


def request_with_retries(session: requests.Session, url: str) -> requests.Response:
    last_exc: Exception | None = None
    for attempt in range(MAX_RETRIES):
        try:
            return session.get(url, timeout=TIMEOUT, allow_redirects=False)
        except requests.RequestException as e:
            last_exc = e
            time.sleep(2 ** attempt)
    assert last_exc is not None
    raise last_exc


def download(session: requests.Session, url: str, dest: Path) -> bool:
    """200 with body -> writes file and returns True. 302 (redirect to /error)
    or anything else -> returns False without writing."""
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


def write_aggregated(rows: list[dict]) -> None:
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

    # Determine the cutoff year. The aggregated CSV excludes years AFTER the
    # most recent complete year, because those are still rolling-published on
    # GovInfo (data would change between scrapes). Historical incomplete years
    # (e.g., 1999 and 2007, both flagged by the volume-sanity check) ARE
    # preserved so downstream consumers can decide whether to filter them via
    # the year_complete column. The disaggregated cache always retains
    # everything, so a future re-scrape will re-emit the dropped years once
    # they settle.
    complete_years_only = [y for y, ok in year_complete.items() if ok]
    cutoff_year = max(complete_years_only) if complete_years_only else max(year_complete)

    tmp = AGG_CSV.with_suffix(".csv.tmp")
    with tmp.open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=AGG_FIELDS)
        w.writeheader()
        for (year, title), v in sorted(agg.items()):
            if year > cutoff_year:
                continue
            w.writerow({
                "year": year,
                "title": title,
                "title_name": CFR_TITLES.get(title, ""),
                "pages": v["pages"],
                "words": v["words_body"],
                "words_all": v["words_all"],
                "n_volumes": v["n_volumes"],
                "xml_volumes": v["xml_volumes"],
                "pdf_volumes": v["pdf_volumes"],
                "has_pdf_gaps": v["pdf_missing"] > 0,
                "has_xml_gaps": v["xml_missing"] > 0,
                "year_complete": year_complete[year],
                "last_scraped_at": v["last_scraped_at"],
            })
    tmp.replace(AGG_CSV)


def scrape_title(session, year, title, cache, tmpdir, all_rows, seen):
    """Append disagg rows for one (year, title) to all_rows/seen, in place."""
    for vol in range(1, MAX_VOL + 1):
        key = (year, title, vol)
        if key in cache:
            if key not in seen:
                all_rows.append(cache[key])
                seen.add(key)
            continue

        pdf_dest = tmpdir / f"pdf_{year}_{title}_{vol}.pdf"
        xml_dest = tmpdir / f"xml_{year}_{title}_{vol}.xml"

        time.sleep(REQUEST_DELAY)
        pdf_ok = download(session, PDF_URL.format(year=year, title=title, vol=vol), pdf_dest)
        time.sleep(REQUEST_DELAY)
        xml_ok = download(session, XML_URL.format(year=year, title=title, vol=vol), xml_dest)

        if not pdf_ok and not xml_ok:
            # No more volumes for this title.
            break

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

        # Trust XML if its body has >= MIN_BODY_WORDS AND -- when both signals
        # are available -- the body word count sits inside
        # [MIN_XML_PDF_RATIO, MAX_XML_PDF_RATIO] of the PDF's. The lower bound
        # catches sparse XMLs; the upper bound catches GovInfo's content-
        # duplication bug. Otherwise fall back to PDF text (~6% inflated from
        # print boilerplate, flagged via word_source).
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
        help="Drop cached (year, title, vol) rows that fall inside the "
             "--years range before scraping, forcing a fresh re-download "
             "from GovInfo. Useful after manual CSV edits or to re-validate "
             "years that were rolling-published at original scrape time. "
             "Requires --years. The previous disaggregated CSV is backed up "
             "to '.csv.bak'. Prompts for confirmation unless --yes is set.",
    )
    parser.add_argument(
        "-y", "--yes", action="store_true",
        help="Skip the confirmation prompt that --refresh triggers.",
    )
    args = parser.parse_args()
    if args.refresh and not args.years:
        parser.error("--refresh requires --years")
    if not args.years and not args.backfill_only:
        parser.error("--years is required unless --backfill-only is set")

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
    print("CSV; only missing combinations are fetched. A full 1998-present",
          file=sys.stderr)
    print("scrape downloads thousands of files and takes several hours.",
          file=sys.stderr)
    print("", file=sys.stderr)

    years = parse_years(args.years) if args.years else []
    titles = sorted(args.titles)
    cache = load_cache()

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
    years_label = ""
    if years:
        years_label = (f"{years[0]}-{years[-1]} ({len(years)} years)"
                       if len(years) > 1 else str(years[0]))
        all_titles = list(range(1, N_TITLES + 1))
        titles_label = (f"1-{N_TITLES} (all)" if titles == all_titles
                        else str(titles))
        scope_keys = {(y, t) for y in years for t in titles}
        in_scope = sum(1 for (y, t, _v) in cache if (y, t) in scope_keys)
        cache_action = "REFRESHED" if args.refresh else "reused"
        print(f"Years to scrape : {years_label}", file=sys.stderr)
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

    if args.refresh:
        # Estimate based on REQUEST_DELAY=0.4s x 2 requests/volume + HTTP +
        # parse overhead. ~1.5s/volume matches the README's "few hours" for a
        # full 1998-present scrape of ~6500 volumes.
        estimated_seconds = in_scope * 1.5
        if estimated_seconds < 3600:
            estimate_str = f"~{max(estimated_seconds / 60, 1):.0f} minutes"
        else:
            estimate_str = f"~{estimated_seconds / 3600:.1f} hours"
        print(f"REFRESH: will invalidate {in_scope:,} cached rows in "
              f"{years_label}", file=sys.stderr)
        print("         and re-download every volume from GovInfo.",
              file=sys.stderr)
        print(f"         Estimated time: {estimate_str}.", file=sys.stderr)
        if estimated_seconds >= 3600:
            print("         Consider running overnight or at the start of "
                  "your", file=sys.stderr)
            print("         workday.", file=sys.stderr)
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
                scrape_title(session, year, title, cache, tmpdir, all_rows, seen)
                save_disagg(all_rows)
            write_aggregated(all_rows)
            year_new = len(all_rows) - year_start_count
            if year_new > 0:
                print(f"{year}: added {year_new:,} new volume(s) to cache.",
                      file=sys.stderr)
            else:
                print(f"{year}: no new volumes (all volumes already cached).",
                      file=sys.stderr)
        if args.backfill_only:
            write_aggregated(all_rows)

    new_rows = len(all_rows) - initial_row_count
    print("", file=sys.stderr)
    if years:
        if new_rows > 0:
            print(f"Done. Added {new_rows:,} new volume(s) across "
                  f"{len(years)} year(s).", file=sys.stderr)
        else:
            print(f"Done. No new volumes to add -- {len(years)} year(s) "
                  f"already fully cached.", file=sys.stderr)
    else:
        print("Done. Backfill and re-aggregation complete.", file=sys.stderr)
    print(f"Updated {DISAGG_CSV.name} ({len(all_rows):,} rows total) and "
          f"{AGG_CSV.name}.", file=sys.stderr)
    print("END.", file=sys.stderr)


if __name__ == "__main__":
    main()
