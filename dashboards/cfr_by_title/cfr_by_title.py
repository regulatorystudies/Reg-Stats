
from __future__ import annotations

import base64
from datetime import datetime
from pathlib import Path

import pandas as pd
import plotly.graph_objects as go
import streamlit as st

BASE = Path(__file__).resolve().parent
# In the Reg-Stats repo this script lives at  dashboards/cfr_by_title/  and the
# datasets at  data/cfr_pages/by_title/  -- i.e. two levels up, then into data/.
REPO_ROOT = BASE.parent.parent
DATA_DIR = REPO_ROOT / "data" / "cfr_pages" / "by_title"


def _first_existing(candidates: list[Path], default: Path) -> Path:
    for c in candidates:
        if c.exists():
            return c
    return default


# Data CSV: the repo location is authoritative; a copy alongside this script is
# also honored for standalone / local use.
DATA_PATH = _first_existing(
    [
        DATA_DIR / "cfr_words_pages_by_title.csv",
        BASE / "cfr_words_pages_by_title.csv",
    ],
    DATA_DIR / "cfr_words_pages_by_title.csv",
)
# Optional GW brand font; if absent (e.g. running standalone) the app falls
# back to system fonts -- handled gracefully in _inject_css().
FONT_PATH = _first_existing(
    [
        BASE / "a-avenir-next-lt-pro.otf",
        REPO_ROOT / "charts" / "style" / "a-avenir-next-lt-pro.otf",
    ],
    REPO_ROOT / "charts" / "style" / "a-avenir-next-lt-pro.otf",
)
# Optional GW/RSC logo for the footer; if absent the footer just omits it.
LOGO_PATH = _first_existing(
    [
        BASE / "gw_ci_rsc_2cs_pos.png",
        REPO_ROOT / "charts" / "style" / "gw_ci_rsc_2cs_pos.png",
    ],
    REPO_ROOT / "charts" / "style" / "gw_ci_rsc_2cs_pos.png",
)

# Brand font stack, reused by both the injected CSS and the Plotly sparklines
# (Plotly renders its own text -- e.g. hover tooltips -- outside the page CSS).
FONT_FAMILY = ("'Avenir Next LT Pro', 'Avenir Next', Avenir, "
               "'Helvetica Neue', Arial, sans-serif")

# GWU brand palette
GW_BLUE = "#033C5A"
NAVY_YARD = "#00223E"
GW_BUFF_20 = "#F6F1E8"
GW_BUFF_50 = "#E8DDC6"
POTOMAC = "#0075C8"
# Up/down/neutral colors from charts/code/style.R (Reg-Stats chart palette).
UP_LINE = "#008364"
DOWN_LINE = "#C9102F"
NEUTRAL_LINE = "#bdbdbd"
NEUTRAL_TEXT = "#7A7A7A"
UP_FILL = "rgba(0,131,100,0.18)"
DOWN_FILL = "rgba(201,16,47,0.18)"
NEUTRAL_FILL = "rgba(189,189,189,0.25)"

NEUTRAL_THRESHOLD_PCT = 2.0
PANEL_HEIGHT_PX = 70
LINE_WIDTH = 2.5

CFR_TITLES: dict[int, str] = {
    1: "General Provisions",
    2: "Grants and Agreements",
    3: "The President",
    4: "Accounts",
    5: "Administrative Personnel",
    6: "Domestic Security",
    7: "Agriculture",
    8: "Aliens and Nationality",
    9: "Animals and Animal Products",
    10: "Energy",
    11: "Federal Elections",
    12: "Banks and Banking",
    13: "Business Credit and Assistance",
    14: "Aeronautics and Space",
    15: "Commerce and Foreign Trade",
    16: "Commercial Practices",
    17: "Commodity and Securities Exchanges",
    18: "Conservation of Power and Water Resources",
    19: "Customs Duties",
    20: "Employees' Benefits",
    21: "Food and Drugs",
    22: "Foreign Relations",
    23: "Highways",
    24: "Housing and Urban Development",
    25: "Indians",
    26: "Internal Revenue",
    27: "Alcohol, Tobacco Products and Firearms",
    28: "Judicial Administration",
    29: "Labor",
    30: "Mineral Resources",
    31: "Money and Finance: Treasury",
    32: "National Defense",
    33: "Navigation and Navigable Waters",
    34: "Education",
    35: "Reserved (formerly Panama Canal)",
    36: "Parks, Forests, and Public Property",
    37: "Patents, Trademarks, and Copyrights",
    38: "Pensions, Bonuses, and Veterans' Relief",
    39: "Postal Service",
    40: "Protection of Environment",
    41: "Public Contracts and Property Management",
    42: "Public Health",
    43: "Public Lands: Interior",
    44: "Emergency Management and Assistance",
    45: "Public Welfare",
    46: "Shipping",
    47: "Telecommunication",
    48: "Federal Acquisition Regulations System",
    49: "Transportation",
    50: "Wildlife and Fisheries",
}

# Footer: two inline labelled lines -- "Notes:" (how to read the metric) and
# "Sources:" -- each a bold navy label followed by grey body text. Per-title
# caveats live on their own tiles (hover ⓘ).
NOTE = ("Word and page counts are not necessarily measures of regulatory "
        "impact. However, changes in these metrics over time offer one proxy "
        "for the volume of regulatory activity.")
SOURCES = "QuantGov.org (1970–1999) and GovInfo.gov (2000–present)"
INFO_URL = "https://github.com/regulatorystudies/Reg-Stats/tree/main/data/cfr_pages/by_title"

# Notes surfaced in the UI: a small marker on the affected tile (hover for the
# reason) and a list at the bottom of the page. Each entry is (anchor_year,
# concise note). Most are *structural* breaks -- cross-title migrations, agency
# reorganizations, and content-regime shifts -- where the series is correct but
# isn't continuous in meaning, so a jump shouldn't be read at face value. Title 1
# is the one *data-reliability* caveat: its pre-2000 swings are OCR-era
# digitization artifacts in the historical source, not real change. The fuller
# catalog lives in TITLE_DISCONTINUITIES.md / title_breaks.csv. Both the marker
# and the bottom list are filtered to entries whose anchor year is in the
# selected range, so a caveat only shows while the relevant years are in view.
# An anchor of None means the caveat always applies (e.g. Title 3's flow-vs-stock
# nature), so its marker shows regardless of the selected range.
TITLE_NOTES: dict[int, list[tuple[int | None, str]]] = {
    1: [(1973, "Pre-2000 values are volatile RegData-era estimates from OCR processing "
               "of the historical source; the gradual accumulation culminating in 1993 "
               "is likely a digitization artifact, not a real increase.")],
    3: [(None, "Each value represents that year's presidential output (executive orders "
               "and proclamations), a yearly flow rather than an accumulating "
               "body of regulation, so Title 3 isn't comparable to the other "
               "titles. Pre-2000 values are omitted because the historical "
               "source doesn't reliably count presidential documents.")],
    4: [(1986, "Pre-2000 values are volatile RegData-era estimates from OCR processing "
               "of the historical source; the run-up to the early-1980s peak is likely inflated "
               "rather than real growth, and 1987–1992 values are missing "
               "entirely, so the size of the drop can't be verified.")],
    6: [(2004, "Three unrelated eras: wage/price controls (1972–81), "
               "reserved/empty (1982–2003), and homeland security "
               "(2004–present); not one continuous series.")],
    34: [(1981, "1981: education regulations moved IN from Title 45 when the "
                "Department of Education was created.")],
    41: [(1985, "1985: procurement regulations moved OUT to Title 48.")],
    45: [(1981, "1981: education regulations moved OUT to Title 34 (new "
                "Department of Education).")],
    48: [(1984, "1984: title begins; procurement regulations moved IN from "
                "Title 41.")],
}

st.set_page_config(
    page_title="CFR Word and Page Counts by Title",
    layout="wide",
)


def _ensure_required_paths() -> None:
    if not DATA_PATH.exists():
        st.error(
            "Data file not found. Expected CSV at "
            f"`{DATA_PATH}`. Deploy this app from the repository root so "
            "the `data/` folder is available."
        )
        st.stop()


# Inject GW font (if asset exists) and a tighter card style.
def _inject_css() -> None:
    font_face = ""
    if FONT_PATH.exists():
        b64 = base64.b64encode(FONT_PATH.read_bytes()).decode("utf-8")
        font_face = (
            "@font-face { font-family: 'Avenir Next LT Pro'; "
            f"src: url(data:font/otf;base64,{b64}) format('opentype'); "
            "font-weight: normal; font-style: normal; }"
        )
    st.markdown(
        f"""
        <style>
        {font_face}
        /* Brand font on all text. Cover both the old (`css-`) and current
           (`st-emotion-cache-`) Streamlit class schemes, plus the .stApp root so
           it beats Streamlit's own container font. Exclude icon elements —
           overriding their font-family would break the Material icon glyphs. */
        html, body, .stApp,
        [class*="st-emotion"]:not([data-testid*="Icon"]):not([class*="material"]),
        [class*="css"]:not([data-testid*="Icon"]):not([class*="material"]) {{
            font-family: 'Avenir Next LT Pro', 'Avenir Next', Avenir, 'Helvetica Neue', Arial, sans-serif;
        }}
        .stApp {{ background-color: {GW_BUFF_20}; }}
        /* Hide Streamlit's top header/toolbar bar (Deploy button + ☰ menu). */
        [data-testid="stHeader"] {{ display: none; }}
        .stMainBlockContainer {{ padding-top: 1rem; }}
        .tile-title {{ font-size: 0.95rem; font-weight: 700; color: {NAVY_YARD};
                       line-height: 1.15; margin-bottom: 0; white-space: nowrap; }}
        /* Discontinuity marker + CSS tooltip (Streamlit strips the native
           `title` attribute, so we render our own hover popover). */
        .tile-note-wrap {{ position: relative; display: inline-block; }}
        /* Outlined "i" badge in the title-heading blue: a drawn circle + i, so
           its stroke weight matches Streamlit's "?" help icon. The "?" icon's
           SVG stroke itself is fully opaque, but it reads as a soft grey
           on-screen (sub-pixel anti-aliasing on a thin vector stroke shows
           less ink per pixel than a CSS border of the same width does) --
           matching that look means dimming our border/text with alpha, not
           just matching the raw color value. The "i" glyph gets a light
           text-stroke only because at this font-size font-weight alone
           (relying on synthetic bold, since only the Regular OTF weight is
           embedded) is invisible; the stroke is kept subtle so the letter
           reads like the "?" rather than bolder. */
        .tile-note-flag {{ display: inline-flex; align-items: center;
                           justify-content: center; width: 15px; height: 15px;
                           border-radius: 50%;
                           border: 2.0px solid rgba(49, 51, 63, 0.55);
                           background: transparent; color: rgba(49, 51, 63, 0.55);
                           font-size: 0.64rem; font-weight: 700;
                           -webkit-text-stroke: 0.5px currentColor;
                           font-style: normal; line-height: 1; cursor: help;
                           margin-left: 4px; vertical-align: middle;
                           position: relative; top: -2px;
                           font-family: inherit; }}
        /* Nudge the "i" glyph down a touch so it sits centered in the ring. */
        .tile-note-i {{ position: relative; top: 1px; left: 0.25px; }}
        .tile-note-tip {{ visibility: hidden; opacity: 0; position: absolute;
                          left: 0; top: 1.5em; z-index: 1000; width: 200px;
                          background: #fff; color: #333;
                          border: 1px solid #D8D2C4; border-radius: 6px;
                          padding: 7px 9px; font-size: 0.72rem; font-weight: 400;
                          line-height: 1.4; white-space: normal;
                          box-shadow: 0 2px 10px rgba(0,0,0,0.14);
                          pointer-events: none; transition: opacity 0.08s ease; }}
        .tile-note-wrap:hover .tile-note-tip {{ visibility: visible; opacity: 1; }}
        /* Let the tooltip overflow the tile/column boxes instead of being clipped. */
        [data-testid="stVerticalBlockBorderWrapper"],
        [data-testid="stVerticalBlock"],
        [data-testid="column"] {{ overflow: visible !important; }}
        .tile-name  {{ font-size: 0.85rem; color: #555; line-height: 1.15;
                       margin-bottom: 4px; white-space: nowrap;
                       overflow: hidden; text-overflow: ellipsis; }}
        .tile-pct   {{ font-size: 1.05rem; font-weight: 700; line-height: 1.1; }}
        .tile-vals  {{ font-size: 0.72rem; color: #555; line-height: 1.2; }}
        .tile-years {{ font-size: 0.68rem; color: #888; line-height: 1.2; }}
        .tile-empty {{ font-size: 0.78rem; color: #999; font-style: italic;
                       padding: 18px 0; text-align: center; }}
        /* Footer: full-width hairline divider, then two inline labelled lines
           (bold navy label + grey body), held to a readable measure. */
        .notes-section {{ margin-top: 20px; padding-top: 10px;
                          margin-bottom: 1rem;
                          border-top: 1px solid {GW_BUFF_50}; }}
        .notes-line {{ font-size: 0.72rem; color: #6B6B6B; font-weight: 400;
                       line-height: 1.45; margin-top: 8px; }}
        /* font-weight: 700 alone is invisible here: only the OTF's Regular
           weight is embedded, so 700 relies on the browser's synthetic bold,
           which is too subtle to read at this font-size. text-stroke forces
           a visible weight increase independent of font synthesis. Scoped to
           just the label -- the "Note:"/"Sources:"/"Updated:" prefix -- not
           the sentence that follows it. */
        .notes-label {{ font-weight: 700; -webkit-text-stroke: 0.45px currentColor; }}
        .notes-link {{ color: {POTOMAC} !important; text-decoration: underline; }}
        .notes-footer {{ display: flex; align-items: flex-end;
                         justify-content: space-between; gap: 16px; }}
        .notes-logo {{ flex-shrink: 0; }}
        .notes-logo img {{ height: 125px; width: auto; display: block; }}
        /* "Sort by" selectbox: subtle cream control (border matches the tiles),
           with a Potomac outline on hover. The background is applied to every
           nested div (not just the direct child) because the baseweb Select's
           wrapper depth has shifted across Streamlit versions -- a `> div`
           child selector that hits the right element on one version can miss
           it on another, silently leaving the default grey showing through. */
        div[data-testid="stSelectbox"] div[data-baseweb="select"],
        div[data-testid="stSelectbox"] div[data-baseweb="select"] div {{
            background-color: {GW_BUFF_20} !important;  /* match Download Data button */
        }}
        div[data-testid="stSelectbox"] div[data-baseweb="select"] {{
            border: 1px solid #D8D2C4 !important;  /* match theme.borderColor (tiles) */
            border-radius: 8px !important;  /* match Download Data button's corner radius */
            color: {NAVY_YARD} !important;  /* selected value text, e.g. "Title Number" */
            font-family: {FONT_FAMILY} !important;
            font-weight: 400 !important;
        }}
        div[data-testid="stSelectbox"] div[data-baseweb="select"]:hover {{
            border-color: {POTOMAC} !important;
        }}
        /* Make the selectbox behave like a plain click-to-open dropdown rather
           than a searchable combobox: hide the text caret and block typing so
           the input can't be edited (clicks still open the menu). */
        div[data-testid="stSelectbox"] input {{
            caret-color: transparent !important;
            cursor: pointer !important;
            pointer-events: none !important;
        }}
        /* Download button: subtle, with a Potomac outline on hover. */
        div[data-testid="stDownloadButton"] button {{
            background-color: {GW_BUFF_20} !important;
            border-color: #D8D2C4 !important;  /* match theme.borderColor (tiles) */
            color: {NAVY_YARD} !important;
            font-family: {FONT_FAMILY} !important;
            font-weight: 400 !important;
        }}
        div[data-testid="stDownloadButton"] button p {{
            color: {NAVY_YARD} !important;
            font-family: {FONT_FAMILY} !important;
            font-weight: 400 !important;
        }}
        div[data-testid="stDownloadButton"] button:hover {{
            background-color: {GW_BUFF_20} !important;
            border-color: {POTOMAC} !important;
            color: {NAVY_YARD} !important;
        }}
        /* Tighten the header stack. Streamlit gives h1 a large built-in
           top/bottom padding and puts a ~1rem flex gap between stacked blocks;
           override both with !important (to beat Streamlit's own rules) so
           title -> caption -> controls -> grid sit closer. */
        .stMainBlockContainer h1 {{ color: {GW_BLUE};
            padding-top: 0 !important; padding-bottom: 0 !important;
            margin: 0 0 0.4rem 0 !important; }}
        [data-testid="stCaptionContainer"] {{
            margin: 0 !important; padding: 0 !important; }}
        .stMainBlockContainer > [data-testid="stVerticalBlock"],
        .stMainBlockContainer > div > [data-testid="stVerticalBlock"] {{
            gap: 0.6rem !important; }}
        </style>
        """,
        unsafe_allow_html=True,
    )


@st.cache_data
def load_data() -> pd.DataFrame:
    df = pd.read_csv(DATA_PATH)
    df["year"] = df["year"].astype(int)
    df["title"] = df["title"].astype(int)
    # year_complete may parse as a real bool or as the strings "True"/"False"
    # depending on pandas/CSV contents; coerce explicitly so boolean filtering
    # (df[df["year_complete"]]) is always correct.
    df["year_complete"] = (
        df["year_complete"].astype(str).str.strip().str.lower().isin(["true", "1"])
    )
    # pages/words may be blank for some rows (e.g. pages are empty pre-2000);
    # make them numeric so blanks become NaN and can be dropped per metric.
    for col in ("pages", "words", "words_all"):
        if col in df.columns:
            df[col] = pd.to_numeric(df[col], errors="coerce")
    return df


def format_updated(df: pd.DataFrame) -> str:
    """The dataset's last-updated date as 'Month D, YYYY', from the latest
    last_scraped_at value (ISO dates sort chronologically). Empty if absent."""
    if "last_scraped_at" not in df.columns:
        return ""
    vals = df["last_scraped_at"].dropna().astype(str).str.strip()
    vals = vals[vals != ""]
    if vals.empty:
        return ""
    try:
        dt = datetime.strptime(vals.max()[:10], "%Y-%m-%d")
    except ValueError:
        return ""
    return dt.strftime("%B %d, %Y")  # zero-padded day, e.g. "June 04, 2026"


@st.cache_data
def load_export_bytes() -> bytes:
    """The scraper writes cfr_words_pages_by_title.csv in download-ready form
    (title_name column included, rolling-publication years already dropped).
    Serve the file bytes verbatim."""
    return DATA_PATH.read_bytes()


@st.cache_data
def load_logo_b64() -> str | None:
    """Base64 of the GW/RSC logo PNG, for inline embedding in footer HTML;
    None if the asset isn't present (e.g. running standalone)."""
    if not LOGO_PATH.exists():
        return None
    return base64.b64encode(LOGO_PATH.read_bytes()).decode("utf-8")


def fmt_count(n: float) -> str:
    n = int(round(n))
    if abs(n) >= 1_000_000:
        return f"{n/1_000_000:.2f}M"
    if abs(n) >= 10_000:
        return f"{n/1_000:.0f}K"
    if abs(n) >= 1_000:
        return f"{n/1_000:.1f}K"
    return f"{n:,}"


def color_for_change(pct: float) -> tuple[str, str, str]:
    """Returns (line_color, text_color, fill_color)."""
    if pct > NEUTRAL_THRESHOLD_PCT:
        return UP_LINE, UP_LINE, UP_FILL
    if pct < -NEUTRAL_THRESHOLD_PCT:
        return DOWN_LINE, DOWN_LINE, DOWN_FILL
    return NEUTRAL_LINE, NEUTRAL_TEXT, NEUTRAL_FILL


def build_sparkline(years, values, line_color: str, fill_color: str,
                    metric: str) -> go.Figure:
    y_min, y_max = float(values.min()), float(values.max())
    pad = max((y_max - y_min) * 0.08, y_max * 0.01, 1.0)
    fig = go.Figure()
    fig.add_trace(
        go.Scatter(
            x=years,
            y=values,
            mode="lines",
            line=dict(color=line_color, width=LINE_WIDTH),
            fill="tozeroy",
            fillcolor=fill_color,
            hovertemplate=f"%{{x}}<br>%{{y:,}} {metric}<extra></extra>",
        )
    )
    fig.update_layout(
        height=PANEL_HEIGHT_PX,
        margin=dict(l=2, r=2, t=2, b=2),
        paper_bgcolor="rgba(0,0,0,0)",
        plot_bgcolor="rgba(0,0,0,0)",
        xaxis=dict(visible=False, showgrid=False, fixedrange=True),
        yaxis=dict(
            visible=False, showgrid=False, fixedrange=True,
            range=[y_min - pad, y_max + pad],
        ),
        showlegend=False,
        font=dict(family=FONT_FAMILY),
        hoverlabel=dict(bgcolor="white", font_size=11, font_family=FONT_FAMILY),
    )
    return fig


def title_change_pct(df_title: pd.DataFrame, start_year: int, end_year: int,
                     metric: str) -> float | None:
    """Net % change in `metric` for one title over [start_year, end_year].

    Uses the same drop-blank/first-value logic as the tile, so the sort order
    matches the % shown on each panel. Returns None when the title has no
    usable data in range (those titles sort last)."""
    sub = df_title[(df_title["year"] >= start_year) & (df_title["year"] <= end_year)]
    sub = sub.dropna(subset=[metric]).sort_values("year")
    if len(sub) < 2 or float(sub[metric].iloc[0]) == 0:
        return None
    values = sub[metric].to_numpy()
    return (float(values[-1]) - float(values[0])) / float(values[0]) * 100.0


def render_panel(title_num: int, df_title: pd.DataFrame,
                 start_year: int, end_year: int, metric: str) -> None:
    name = CFR_TITLES.get(title_num, "?")
    # Discontinuity marker: a small hover-able info glyph, shown only when this
    # title has a structural break whose year falls inside the selected range.
    in_range_notes = [
        note for (yr, note) in TITLE_NOTES.get(title_num, [])
        if yr is None or start_year <= yr <= end_year
    ]
    flag = ""
    if in_range_notes:
        tip_html = "<br>".join(in_range_notes)
        flag = (f"<span class='tile-note-wrap'>"
                f"<span class='tile-note-flag'><span class='tile-note-i'>i</span>"
                f"</span>"
                f"<span class='tile-note-tip'>{tip_html}</span>"
                f"</span>")
    header = (
        f"<div class='tile-title'>Title {title_num}{flag}</div>"
        f"<div class='tile-name' title='{name}'>{name}</div>"
    )

    sub = df_title[(df_title["year"] >= start_year) & (df_title["year"] <= end_year)]
    # Drop rows where this metric is blank (e.g. pages are empty pre-2000) so the
    # sparkline and the % change are computed only over years that have data.
    sub = sub.dropna(subset=[metric]).sort_values("year")

    if len(sub) < 2 or float(sub[metric].iloc[0]) == 0:
        st.markdown(header, unsafe_allow_html=True)
        st.markdown("<div class='tile-empty'>No data in range</div>",
                    unsafe_allow_html=True)
        return

    years = sub["year"].to_numpy()
    values = sub[metric].to_numpy()
    first_val, last_val = float(values[0]), float(values[-1])
    first_year, last_year = int(years[0]), int(years[-1])
    pct = (last_val - first_val) / first_val * 100.0

    line_color, text_color, fill_color = color_for_change(pct)
    sign = "+" if pct >= 0 else ""
    metric_label = "pages" if metric == "pages" else "words"

    st.markdown(header, unsafe_allow_html=True)
    fig = build_sparkline(years, values, line_color, fill_color, metric_label)
    st.plotly_chart(fig, use_container_width=True,
                    config={"displayModeBar": False})
    st.markdown(
        f"<div class='tile-pct' style='color:{text_color};'>{sign}{pct:.1f}%</div>"
        f"<div class='tile-vals'>{fmt_count(first_val)} → {fmt_count(last_val)} {metric_label}</div>"
        f"<div class='tile-years'>{first_year}–{last_year}</div>",
        unsafe_allow_html=True,
    )


def main() -> None:
    _ensure_required_paths()
    _inject_css()
    df = load_data()

    st.markdown(f'<h1 style="color:{GW_BLUE};">Code of Federal Regulations: Word and Page Counts by Title</h1>', unsafe_allow_html=True)

    st.markdown("""
    <style>
    [data-testid="stCaptionContainer"] {
        color: #00223E !important;
    }
    </style>
    """, unsafe_allow_html=True)

    st.caption(
        "Net change in words or pages for each of the 50 CFR titles over a "
        "selected year range. Green = up, red = down, gray = within "
        f"±{NEUTRAL_THRESHOLD_PCT:g}%."
    )

    usable_df = df[df["year_complete"]]

    st.markdown(
        """
        <style>
        div[data-testid="stRadio"] label p {
            color: #00223E !important;
        }
        div[data-testid="stSlider"] label p {
            color: #00223E !important;
        }
        div[data-testid="stSelectbox"] label p {
            color: #00223E !important;
        }
        /* Open-dropdown options render in a separate popover outside the
           selectbox, so they need their own rule. */
        ul[data-testid="stSelectboxVirtualDropdown"] li,
        div[data-baseweb="popover"] li[role="option"],
        div[data-baseweb="menu"] li {
            color: #00223E !important;
        }
        /* Help tooltip popover */
        div[data-baseweb="tooltip"] [data-testid="stMarkdownContainer"],
        div[data-baseweb="tooltip"] > div {
            background-color: white !important;
        }
        div[data-baseweb="popover"] > div {
            background-color: white !important;
        }
        div[data-baseweb="popover"] [data-testid="stTooltipContent"] {
            background-color: white !important;
        }
        </style>
        """,
        unsafe_allow_html=True,
    )

    # Layout (left -> right): year slider, metric toggle, sort selector, download.
    # The metric is still *read* before the slider is built (below), because the
    # slider's span depends on it (pages from 2000, words from 1970) -- a column's
    # on-screen position is independent of widget creation order.
    # Widths chosen so the sort + download columns are each 1/5 of the row --
    # matching a tile card below (the grid is 5 equal columns) -- with the slider
    # spanning two. gap="small" matches the grid's gap so the columns line up.
    ctrl_slider, ctrl_metric, ctrl_sort, ctrl_dl = st.columns([2, 1, 1, 1], gap="small")
    with ctrl_metric:
        metric = st.radio(
            "Metric",
            options=["words", "pages"],
            horizontal=True,
            format_func=str.capitalize,
            help=("Pages come from the typeset PDFs and are the steadier metric; "
                  "words come from the XML body text, which is more granular but "
                  "a bit noisier year to year."),
        )

    # Year bounds for the selected metric (years where that metric has data):
    # words span 1970-present, pages 2000-present.
    metric_years = sorted(
        usable_df.loc[usable_df[metric].notna(), "year"].unique().tolist()
    )
    y_min, y_max = int(metric_years[0]), int(metric_years[-1])
    # When the metric changes, keep the user's selected range but clamp it to the
    # new metric's available span (words: 1970+, pages: 2000+). If the prior
    # selection doesn't overlap the new span at all, fall back to the full span.
    # Within a metric, the chosen sub-range persists across reruns via the key.
    if st.session_state.get("_last_metric") != metric:
        st.session_state["_last_metric"] = metric
        prev = st.session_state.get("year_range")
        if prev is None:
            st.session_state["year_range"] = (y_min, y_max)
        else:
            ns, ne = max(prev[0], y_min), min(prev[1], y_max)
            st.session_state["year_range"] = (ns, ne) if ns < ne else (y_min, y_max)

    with ctrl_slider:
        year_range = st.slider(
            "Year Range",
            min_value=y_min,
            max_value=y_max,
            step=1,
            key="year_range",
            help=("Sets the time span shown. Words go back to 1970, pages to "
                  "2000. The most recent year is excluded until it's complete: "
                  "the CFR's 50 titles are published gradually, so the newest "
                  "year is usually still missing some titles well into the "
                  "following year."),
        )
    with ctrl_sort:
        sort_by = st.selectbox(
            "Sort by",
            options=["Title number", "Largest increase", "Largest decrease"],
            format_func=str.title,
            help=("Orders the tiles: by title number (1–50), or by largest "
                  "increase / decrease in the selected metric over the chosen "
                  "years."),
        )
    with ctrl_dl:
        st.markdown("<div style='height:1.7rem;'></div>", unsafe_allow_html=True)
        st.download_button(
            label="Download Data (CSV)",
            data=load_export_bytes(),
            file_name="cfr_words_pages_by_title.csv",
            mime="text/csv",
            use_container_width=True,
        )

    start_year, end_year = year_range

    # Tile order. Default is numeric (Title 1-50); the other options rank by net
    # change in the selected metric over the selected range, with no-data titles
    # always last.
    all_titles = list(range(1, 51))
    if sort_by == "Title number":
        ordered_titles = all_titles
    else:
        pct_by_title = {
            t: title_change_pct(
                usable_df[usable_df["title"] == t], start_year, end_year, metric)
            for t in all_titles
        }
        with_data = [t for t in all_titles if pct_by_title[t] is not None]
        no_data = [t for t in all_titles if pct_by_title[t] is None]
        with_data.sort(key=lambda t: pct_by_title[t],
                       reverse=(sort_by == "Largest increase"))
        ordered_titles = with_data + no_data

    # 5 columns x 10 rows, in the chosen order.
    for row_start in range(0, 50, 5):
        cols = st.columns(5, gap="small")
        for i, col in enumerate(cols):
            title_num = ordered_titles[row_start + i]
            df_t = usable_df[usable_df["title"] == title_num]
            with col:
                with st.container(border=True):
                    render_panel(title_num, df_t, start_year, end_year, metric)

    # Footer: inline labelled lines (Note, Sources, Updated, more-info link) on
    # the left, GW/RSC logo aligned bottom-right. Per-title caveats live on
    # their own tiles (hover ⓘ).
    updated = format_updated(df)
    updated_line = (
        f"<div class='notes-line'><span class='notes-label'>Updated:</span> "
        f"{updated}</div>" if updated else "")
    logo_b64 = load_logo_b64()
    logo_html = (
        f"<div class='notes-logo'><img "
        f"src='data:image/png;base64,{logo_b64}' "
        f"alt='GW Regulatory Studies Center'></div>" if logo_b64 else "")
    st.markdown(
        f"<div class='notes-section'><div class='notes-footer'>"
        f"<div class='notes-inner'>"
        f"<div class='notes-line'><span class='notes-label'>Note:</span> "
        f"{NOTE}</div>"
        f"<div class='notes-line'><span class='notes-label'>Sources:</span> "
        f"{SOURCES}</div>"
        f"{updated_line}"
        f"<div class='notes-line'><a class='notes-link' href='{INFO_URL}' "
        f"target='_blank' rel='noopener noreferrer'>More information on how "
        f"we collect data</a></div>"
        f"</div>"
        f"{logo_html}"
        f"</div></div>",
        unsafe_allow_html=True,
    )

if __name__ == "__main__":
    main()
