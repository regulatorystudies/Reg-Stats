"""Scrape CFR page counts (from PDFs) and word counts (from bulk XML) per title.

For each (year, title, volume) in scope:
  - GET the PDF and count pages with pypdf.
  - GET the bulk XML and count whitespace-delimited tokens from all text nodes.

Then aggregate to (year, title). Writes two CSVs:
  cfr_pages_words_disaggregated.csv  -- per (year, title, vol); also a cache
  cfr_pages_words_by_title.csv       -- per (year, title), aggregated

Re-runs only fetch (year, title, vol) combinations that aren't already cached
in the disaggregated CSV. Progress is saved incrementally after each title, so
an interrupted run can be resumed by re-invoking with the same arguments.

Coverage caveats:
  - GovInfo CFR coverage starts in 1997. 1996 is partial (most titles absent)
    and not supported.
  - The CFR Index (annual document, not per-title) is not included.

Usage:
  python scrape_cfr_by_title.py --years 1997 2024          # two specific years
  python scrape_cfr_by_title.py --years 1997-2010          # closed range
  python scrape_cfr_by_title.py --years 1997-              # to current year
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

DISAGG_FIELDS = ["year", "title", "vol", "pages", "words", "word_source",
                 "pdf_present", "xml_present"]
AGG_FIELDS = ["year", "title", "pages", "words", "n_volumes",
              "xml_volumes", "pdf_volumes", "has_pdf_gaps", "has_xml_gaps"]

# Elements that indicate the XML contains regulatory body content. Index-only
# XMLs (observed for ~40 volumes in 1997) lack these entirely. Some sparser
# cases have a few stub entries but no real body, so we additionally compare
# xml_words against pdf_words: healthy XMLs run 0.90-0.95 of the PDF count, and
# anything below MIN_XML_PDF_RATIO triggers the PDF fallback.
BODY_ELEMENT_TAGS = {"SECTION", "SECTNO", "PART", "DIV5", "DIV6", "DIV8"}
MIN_XML_PDF_RATIO = 0.5


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


def xml_word_count(path: Path) -> tuple[int, bool]:
    """Returns (word_count, has_body_content). When has_body_content is False,
    the XML is index-only (TOC + front/back matter) and word_count reflects
    just that boilerplate -- caller should fall back to PDF extraction."""
    tree = ET.parse(str(path))
    root = tree.getroot()
    has_body = any(e.tag in BODY_ELEMENT_TAGS for e in root.iter())
    text = " ".join(root.itertext())
    n_words = len(re.findall(r"\S+", text))
    return n_words, has_body


def load_cache() -> dict[tuple[int, int, int], dict]:
    if not DISAGG_CSV.exists():
        return {}
    out: dict[tuple[int, int, int], dict] = {}
    with DISAGG_CSV.open(newline="") as f:
        for row in csv.DictReader(f):
            key = (int(row["year"]), int(row["title"]), int(row["vol"]))
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
            "pages": 0, "words": 0, "n_volumes": 0,
            "xml_volumes": 0, "pdf_volumes": 0,
            "pdf_missing": 0, "xml_missing": 0,
        })
        pdf_ok = r["pdf_present"] == "True"
        xml_ok = r["xml_present"] == "True"
        src = r.get("word_source", "")
        if pdf_ok:
            slot["pages"] += int(r["pages"])
        else:
            slot["pdf_missing"] += 1
        if src in ("xml", "pdf"):
            slot["words"] += int(r["words"])
        if src == "xml":
            slot["xml_volumes"] += 1
        elif src == "pdf":
            slot["pdf_volumes"] += 1
        if not xml_ok:
            slot["xml_missing"] += 1
        slot["n_volumes"] += 1

    tmp = AGG_CSV.with_suffix(".csv.tmp")
    with tmp.open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=AGG_FIELDS)
        w.writeheader()
        for (year, title), v in sorted(agg.items()):
            w.writerow({
                "year": year,
                "title": title,
                "pages": v["pages"],
                "words": v["words"],
                "n_volumes": v["n_volumes"],
                "xml_volumes": v["xml_volumes"],
                "pdf_volumes": v["pdf_volumes"],
                "has_pdf_gaps": v["pdf_missing"] > 0,
                "has_xml_gaps": v["xml_missing"] > 0,
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

        xml_words: int | None = None
        xml_has_body = False
        if xml_ok:
            try:
                xml_words, xml_has_body = xml_word_count(xml_dest)
            except Exception as e:
                print(f"  WARN: XML parse failed on {year} t{title} v{vol}: {e}", file=sys.stderr)
            xml_dest.unlink(missing_ok=True)

        # Trust XML iff it has body elements AND -- when both signals are
        # available -- its word count is at least MIN_XML_PDF_RATIO of the
        # PDF's. Otherwise prefer PDF text (~6% inflated from print boilerplate,
        # flagged via word_source).
        xml_trusted = (
            xml_words is not None
            and xml_has_body
            and (pdf_words is None or xml_words >= MIN_XML_PDF_RATIO * pdf_words)
        )
        if xml_trusted:
            words, word_source = xml_words, "xml"
        elif pdf_words is not None:
            words, word_source = pdf_words, "pdf"
        else:
            words, word_source = 0, "none"

        row = {
            "year": year, "title": title, "vol": vol,
            "pages": pages, "words": words, "word_source": word_source,
            "pdf_present": str(pdf_ok), "xml_present": str(xml_ok),
        }
        all_rows.append(row)
        seen.add(key)


def main() -> None:
    parser = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument(
        "--years", nargs="+", required=True,
        help='Years to scrape: individual ("1997"), closed range ("1997-2010"), '
             'or open-ended range ("1997-"). Can mix multiple.',
    )
    parser.add_argument(
        "--titles", nargs="+", type=int, default=list(range(1, N_TITLES + 1)),
        help="Title numbers to scrape (default: 1-50).",
    )
    args = parser.parse_args()

    years = parse_years(args.years)
    titles = sorted(args.titles)
    print(f"Years:  {years}", file=sys.stderr)
    print(f"Titles: {titles}", file=sys.stderr)

    cache = load_cache()
    if cache:
        print(f"Loaded {len(cache):,} cached rows from {DISAGG_CSV.name}", file=sys.stderr)

    session = requests.Session()
    session.headers["User-Agent"] = "Reg-Stats by-title CFR scraper"

    all_rows: list[dict] = list(cache.values())
    seen = set(cache.keys())

    with TemporaryDirectory() as tdir:
        tmpdir = Path(tdir)
        for year in years:
            print(f"\n=== {year} ===", file=sys.stderr)
            for title in tqdm(titles, desc=str(year), unit="title"):
                scrape_title(session, year, title, cache, tmpdir, all_rows, seen)
                save_disagg(all_rows)
            write_aggregated(all_rows)

    print(f"\nWrote {DISAGG_CSV.name} ({len(all_rows):,} rows) and {AGG_CSV.name}.",
          file=sys.stderr)


if __name__ == "__main__":
    main()
