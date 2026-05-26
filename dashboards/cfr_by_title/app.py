
from __future__ import annotations

import base64
from pathlib import Path

import pandas as pd
import plotly.graph_objects as go
import streamlit as st

BASE = Path(__file__).resolve().parent
REPO_ROOT = BASE.parent.parent
DATA_PATH = REPO_ROOT / "data" / "cfr_pages" / "by_title" / "cfr_pages_words_by_title.csv"
FONT_PATH = REPO_ROOT / "charts" / "style" / "a-avenir-next-lt-pro.otf"

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

st.set_page_config(
    page_title="CFR Page and Word Counts by Title",
    layout="wide",
)


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
        html, body, [class*="css"]  {{
            font-family: 'Avenir Next LT Pro', 'Avenir Next', Avenir, 'Helvetica Neue', Arial, sans-serif;
        }}
        .stApp {{ background-color: {GW_BUFF_20}; }}
        .tile-title {{ font-size: 0.95rem; font-weight: 600; color: {GW_BLUE};
                       line-height: 1.15; margin-bottom: 0; white-space: nowrap;
                       overflow: hidden; text-overflow: ellipsis; }}
        .tile-name  {{ font-size: 0.85rem; color: #555; line-height: 1.15;
                       margin-bottom: 4px; white-space: nowrap;
                       overflow: hidden; text-overflow: ellipsis; }}
        .tile-pct   {{ font-size: 1.05rem; font-weight: 700; line-height: 1.1; }}
        .tile-vals  {{ font-size: 0.72rem; color: #555; line-height: 1.2; }}
        .tile-years {{ font-size: 0.68rem; color: #888; line-height: 1.2; }}
        .tile-empty {{ font-size: 0.78rem; color: #999; font-style: italic;
                       padding: 18px 0; text-align: center; }}
        h1 {{ color: {GW_BLUE}; }}
        </style>
        """,
        unsafe_allow_html=True,
    )


@st.cache_data
def load_data() -> pd.DataFrame:
    df = pd.read_csv(DATA_PATH)
    df["year"] = df["year"].astype(int)
    df["title"] = df["title"].astype(int)
    return df


@st.cache_data
def load_export_bytes() -> bytes:
    """The scraper writes cfr_pages_words_by_title.csv in download-ready form
    (title_name column included, rolling-publication years already dropped).
    Serve the file bytes verbatim."""
    return DATA_PATH.read_bytes()


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
        hoverlabel=dict(bgcolor="white", font_size=11),
    )
    return fig


def render_panel(title_num: int, df_title: pd.DataFrame,
                 start_year: int, end_year: int, metric: str) -> None:
    name = CFR_TITLES.get(title_num, "?")
    header = (
        f"<div class='tile-title'>Title {title_num}</div>"
        f"<div class='tile-name' title='{name}'>{name}</div>"
    )

    sub = df_title[(df_title["year"] >= start_year) & (df_title["year"] <= end_year)]
    sub = sub.sort_values("year")

    if len(sub) < 2 or sub[metric].iloc[0] == 0:
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
        f"<div class='tile-vals'>{fmt_count(first_val)} &rarr; {fmt_count(last_val)} {metric_label}</div>"
        f"<div class='tile-years'>{first_year}&ndash;{last_year}</div>",
        unsafe_allow_html=True,
    )


def main() -> None:
    _inject_css()
    df = load_data()

    st.markdown("# CFR Page and Word Counts by Title")
    st.caption(
        "Net change in pages or words for each of the 50 CFR titles over a "
        "selected year range. Green = up, red = down, gray = within "
        f"±{NEUTRAL_THRESHOLD_PCT:g}%."
    )

    usable_df = df[df["year_complete"]]
    years = sorted(usable_df["year"].unique().tolist())

    ctrl_left, ctrl_mid, ctrl_right = st.columns([5, 2, 2])
    with ctrl_left:
        year_range = st.slider(
            "Year Range",
            min_value=years[0],
            max_value=years[-1],
            value=(years[0], years[-1]),
            step=1,
            help=("Limited to CFR years through the most recent complete "
                  "edition."),
        )
    with ctrl_mid:
        metric = st.radio(
            "Metric",
            options=["pages", "words"],
            horizontal=True,
            format_func=str.capitalize,
            help=("Pages is the more stable metric: it comes from PDFs (the "
                  "typeset publication) and isn't affected by XML composition "
                  "differences. Words comes from XML body content and is "
                  "somewhat more volatile across years due to GovInfo's "
                  "evolving XML schemas; use it for granular analysis but "
                  "favor pages for trends."),
        )
    with ctrl_right:
        incomplete_in_export = sorted(
            df.loc[~df["year_complete"], "year"].unique().tolist()
        )
        incomplete_str = (
            ", ".join(str(y) for y in incomplete_in_export)
            if incomplete_in_export else "none"
        )
        st.markdown("<div style='height:1.7rem;'></div>", unsafe_allow_html=True)
        st.download_button(
            label="⬇ Download Data",
            data=load_export_bytes(),
            file_name="cfr_pages_words_by_title.csv",
            mime="text/csv",
            use_container_width=True,
        )

    start_year, end_year = year_range

    # 5 columns x 10 rows.
    for row_start in range(0, 50, 5):
        cols = st.columns(5, gap="small")
        for i, col in enumerate(cols):
            title_num = row_start + i + 1
            df_t = usable_df[usable_df["title"] == title_num]
            with col:
                with st.container(border=True):
                    render_panel(title_num, df_t, start_year, end_year, metric)

    last_scrape = pd.to_datetime(df["last_scraped_at"]).max().date().isoformat()
    last_complete = years[-1]
    next_year = last_complete + 1
    st.caption(
        "Source: Government Publishing Office (GovInfo.gov). Pages counted from CFR PDF volumes. "
        "Words counted from the regulatory body of CFR bulk XML, excluding "
        "front-matter (`<FMTR>`: TOC, Cite-this-Code, Explanation) and "
        "back-matter (`<BMTR>`: Finding Aids, Alphabetical List of Agencies, "
        "List of CFR Sections Affected) per GPO's CFR XML User Guide, which "
        "states user aids are not part of the legal text of the CFR. The "
        "all-content count is preserved in the CSV's `words_all` column. "
        "Title 35 was eliminated after the 2000 edition; Titles 2 and 6 first "
        "appear in 2005 and 2004 respectively. "
        "**A note on the year range:** CFR titles are published by GovInfo on a "
        "staggered annual schedule that can stretch 18–24 months past the "
        "revision date. A year is treated as complete only when (a) the scrape "
        "happened at least one year after the previous revision and (b) every title's "
        "volume count is within 30% of its previous-complete-year count. Years "
        f"that fail either check are excluded from the slider so partially-"
        f"published titles don't appear as spurious drops. As of the last scrape "
        f"({last_scrape}) the most recent complete year is {last_complete}; "
        f"{next_year} data will appear here once GovInfo finishes publishing its "
        f"remaining revision volumes."
    )


if __name__ == "__main__":
    main()
