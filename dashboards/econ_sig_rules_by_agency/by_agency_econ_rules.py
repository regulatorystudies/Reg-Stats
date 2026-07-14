import base64
import io
import sys
from pathlib import Path
from datetime import date

import numpy as np
import pandas as pd
import plotly.graph_objects as go
import plotly.io as pio
import streamlit as st

BASE = Path(__file__).resolve().parent
DASHBOARD_ROOT = BASE.parent
sys.path.insert(0, str(DASHBOARD_ROOT))

GW_COLORS = {
    "GWblue": "#033C5A",
    "GWbuff": "#A69362",
    "lightblue": "#0073AA",
    "lightyellow": "#F8E08E",
    "darkyellow": "#FFC72C",
    "brown": "#A75523",
    "darkgreen": "#008364",
    "lightgreen": "#78BE20",
    "red": "#C9102F",
    "RSCgray": "#E0E0E0",
    "RSCdarkgray": "#bdbdbd",
    "fill": "#B2DDF4",
}

DATA_ROOT = Path(__file__).resolve().parents[2]
FONT_PATH = DATA_ROOT / "charts" / "style" / "a-avenir-next-lt-pro.otf"
FONT_FAMILY = "Avenir Next LT Pro, Avenir, Helvetica Neue, Arial, sans-serif"
DATA_PATH = DATA_ROOT / "data" / "es_rules" / "agency_econ_significant_rules_by_presidential_year.csv"
COMBINED_DATA_PATH =DATA_ROOT / "data" / "es_rules" / "econ_significant_rules_by_presidential_year.csv"
LOGO_PATH = DATA_ROOT / "charts" / "style" / "gw_ci_rsc_2cs_pos.png"

TOTAL_CHART_LABEL = "All Agencies (Total)"

# Party colors matching the notebook style
PARTY_COLORS = {"Democratic": "#003366", "Republican": "#CC0000"}
LIGHTBLUE = "#6699CC"   # diagonal-stripe color for Democratic bars
RSC_GRAY = "#AAAAAA"    # grid lines & axis lines

st.set_page_config(
    page_title="Economically Significant Final Rules Published Agency",
    layout="wide",
)
BG_COLOR = "#E8DDC6"
TEXT_COLOR = GW_COLORS["GWblue"]

font_base64 = ""
if FONT_PATH.exists():
    with open(FONT_PATH, "rb") as f:
        font_base64 = base64.b64encode(f.read()).decode("utf-8")

st.markdown(
    f"""
    <style>
    [data-baseweb="popover"] [data-baseweb="menu"],
    [data-baseweb="popover"] ul {{
        background-color: #E8DDC6 !important;
    }}
    [data-baseweb="popover"] [data-baseweb="menu"] li,
    [data-baseweb="popover"] ul li {{
        background-color: #E8DDC6 !important;
        color: #033C5A !important;
    }}
    [data-baseweb="popover"] ul li:hover {{
        background-color: #A69362 !important;
        color: #ffffff !important;
    }}
    [data-baseweb="popover"] ul li[aria-selected="true"] {{
        background-color: #033C5A !important;
        color: #ffffff !important;
    }}
    @font-face {{
        font-family: 'Avenir Next LT Pro';
        src: url(data:font/otf;base64,{font_base64}) format('opentype');
        font-weight: normal;
        font-style: normal;
    }}
    .stApp, [data-testid="stAppViewContainer"] {{ background-color: {BG_COLOR}; }}
    [data-testid="stHeader"] {{ background-color: {BG_COLOR} !important; height: 0 !important; min-height: 0 !important; }}
    [data-testid="stToolbar"] {{ display: none !important; }}
    [data-testid="stDecoration"] {{ display: none !important; }}
    [data-testid="stMainBlockContainer"] {{ padding-top: 1rem !important; background-color: {BG_COLOR} !important; }}
    html, body, [class*="css"] {{
        color: {TEXT_COLOR};
        font-family: 'Avenir Next LT Pro', Avenir, 'Helvetica Neue', Arial, sans-serif;
    }}
    h1, h2, h3, h4, p, span, label, div {{
        color: {TEXT_COLOR};
        font-family: 'Avenir Next LT Pro', Avenir, 'Helvetica Neue', Arial, sans-serif;
    }}
    .js-plotly-plot .plotly .gtitle,
    .js-plotly-plot .plotly .xtick text,
    .js-plotly-plot .plotly .ytick text,
    .js-plotly-plot .plotly .legend text,
    .js-plotly-plot .plotly .annotation-text {{
        font-family: 'Avenir Next LT Pro', Avenir, 'Helvetica Neue', Arial, sans-serif !important;
    }}
    [data-testid="stDownloadButton"] button,
    [data-testid="stBaseButton-secondary"],
    [data-testid="stDownloadButton"] button p,
    [data-testid="stSelectbox"] div[data-baseweb="select"] span,
    [data-testid="stSelectbox"] div[data-baseweb="select"] div {{
        color: #E8DDC6 !important;
        background-color: #033C5A !important;
        border-color: #033C5A !important;
    }}
    a:focus,
    button:focus,
    [role="button"]:focus,
    select:focus,
    input:focus,
    [data-testid="stSelectbox"]:focus-within,
    [data-testid="stDownloadButton"] button:focus {{
        outline: 3px solid #033C5A !important;
        outline-offset: 2px !important;
        box-shadow: 0 0 0 3px #F8E08E !important;
    }}
    .skip-link {{
        position: absolute;
        top: -999px;
        left: 0;
        background: #F8E08E;
        color: #033C5A;
        padding: 8px 16px;
        font-weight: 700;
        font-size: 14px;
        z-index: 9999;
        border-radius: 0 0 4px 0;
        text-decoration: none;
    }}
    [data-testid="stTooltipContent"] {{
        background-color: #E8DDC6 !important;
        color: #E8DDC6 !important;
    }}
    .skip-link:focus {{
        top: 0;
        outline: 3px solid #033C5A !important;
    }}
    /* Visually-hidden utility class for screen-reader-only content (WCAG 1.1.1) */
    .visually-hidden {{
        position: absolute !important;
        width: 1px !important;
        height: 1px !important;
        padding: 0 !important;
        margin: -1px !important;
        overflow: hidden !important;
        clip: rect(0, 0, 0, 0) !important;
        white-space: nowrap !important;
        border: 0 !important;
    }}
    [data-baseweb="popover"] ul li:focus,
    [data-baseweb="popover"] ul li[data-highlighted="true"],
    [data-baseweb="menu"] [role="option"]:focus,
    [data-baseweb="menu"] [role="option"][aria-activedescendant] {{
        background-color: #E8DDC6 !important;
        color: #E8DDC6 !important;
    }}
    [data-baseweb="menu"] ul li:hover,
    [data-baseweb="menu"] ul li:focus,
    [data-baseweb="menu"] ul li[aria-selected="true"],
    [data-baseweb="popover"] ul li:hover,
    [data-baseweb="popover"] ul li:focus,
    [data-baseweb="popover"] ul li[aria-selected="true"] {{
        background-color: #DAC8A3 !important;
        color: #ffffff !important;
    }}
    [data-baseweb="menu"] [role="option"]:hover,
    [data-baseweb="menu"] [role="option"].highlighted,
    [data-baseweb="menu"] [role="option"][data-highlighted],
    [data-baseweb="menu"] [role="option"]:focus {{
        background-color: #DAC8A3 !important;
        color: #ffffff !important;
    }}
    </style>

    <!-- Skip navigation link (WCAG 2.4.1) -->
    <a class="skip-link" href="#chart-region">Skip to chart</a>
    """,
    unsafe_allow_html=True,
)


@st.cache_data
def load_combined_data():
    df = pd.read_csv(COMBINED_DATA_PATH)
    df.columns = ["year", "party", "rules"]
    df = df.dropna().copy()
    df["rules"] = pd.to_numeric(df["rules"], errors="coerce").fillna(0)
    return df


@st.cache_data
def load_data():
    df = pd.read_csv(DATA_PATH)
    df.columns = ["name", "acronym", "year", "party", "rules"]
    df = df.dropna().copy()
    df["acronym"] = df["acronym"].replace("STATE", "DOS")
    df["rules"] = pd.to_numeric(df["rules"], errors="coerce").fillna(0)
    return df


def _get_interval(values) -> int:
    """Return a round y-axis tick interval, mirroring R's get_interval()."""
    max_val = int(max(values)) if len(values) > 0 else 1
    if max_val <= 20:
        interval = round(max_val / 5)
    else:
        interval = max(int(max_val / 10) * 5, 5)
    return max(interval, 1)


def _ydynam(df: pd.DataFrame, interval: int, padding: int = 5) -> int:
    """Compute upper y-axis limit, mirroring R's ydynam()."""
    max_val = int(df["rules"].max()) if len(df) > 0 else 1
    return (int(max_val / interval) + 1) * interval + padding


def build_data_table(df: pd.DataFrame) -> pd.DataFrame:
    """Return a clean, sorted year/party/rules table for accessible display."""
    out = df.sort_values("year")[["year", "party", "rules"]].copy()
    out["year"] = out["year"].astype(int)
    out["rules"] = out["rules"].astype(int)
    out.columns = ["Presidential Year", "Presidential Party", "Number of Rules"]
    return out.reset_index(drop=True)


def build_aria_summary(df_agency: pd.DataFrame, agency_acronym: str, agency_name: str) -> str:
    """Build a plain-text data summary for screen readers."""
    df = df_agency.sort_values("year")
    total_rules = int(df["rules"].sum())
    n_years = len(df)
    start = int(df["year"].min())
    end = int(df["year"].max())

    if len(df) > 0:
        peak_row = df.loc[df["rules"].idxmax()]
        peak_year = int(peak_row["year"])
        peak_val = int(peak_row["rules"])
    else:
        peak_year = peak_val = 0

    lines = [
        f"Chart summary for {agency_name} ({agency_acronym.upper()}).",
        f"Showing {n_years} presidential years from {start} to {end}.",
        f"Total economically significant rules published: {total_rules}.",
        f"Peak year: {peak_year} with {peak_val} rules.",
    ]
    return " ".join(lines)


def build_combined_aria_summary(df_combined: pd.DataFrame) -> str:
    """Plain-text summary for the government-wide chart (screen readers)."""
    df = df_combined.sort_values("year")
    total_rules = int(df["rules"].sum())
    n_years = len(df)
    start = int(df["year"].min()) if n_years else 0
    end = int(df["year"].max()) if n_years else 0

    if len(df) > 0:
        peak_row = df.loc[df["rules"].idxmax()]
        peak_year = int(peak_row["year"])
        peak_val = int(peak_row["rules"])
    else:
        peak_year = peak_val = 0

    lines = [
        "Chart summary for total economically significant final rules across all agencies.",
        f"Showing {n_years} presidential years from {start} to {end}.",
        f"Total economically significant rules published: {total_rules}.",
        f"Peak year: {peak_year} with {peak_val} rules.",
    ]
    return " ".join(lines)


def plot_agency_plotly(df_agency: pd.DataFrame, agency_acronym: str, agency_name: str):
    """Build an interactive Plotly bar chart coloured by presidential party."""
    df = df_agency.sort_values("year").copy()

    years = df["year"].tolist()
    rules = df["rules"].tolist()
    parties = df["party"].tolist()

    colors = [PARTY_COLORS.get(p, "#003366") for p in parties]
    patterns = ["" for _ in parties]
    fg_colors = colors

    hover_texts = [
        f"<b>Year {yr}</b><br>Rules: {int(r)}<br>Party: {p}"
        for yr, r, p in zip(years, rules, parties)
    ]

    interval = _get_interval(rules) if rules else 1
    upper = _ydynam(df, interval, padding=1) if len(df) > 0 else 10

    fig = go.Figure()

    # Main bar trace with per-bar party colours and hatch patterns
    fig.add_trace(go.Bar(
        x=years,
        y=rules,
        marker=dict(
            color=colors,
            pattern=dict(
                shape=patterns,
                fgcolor=fg_colors,
                size=8,
            ),
            line=dict(width=0),
        ),
        hovertext=hover_texts,
        hovertemplate="%{hovertext}<extra></extra>",
        showlegend=False,
    ))

    # Invisible dummy traces purely for the legend
    fig.add_trace(go.Bar(
        x=[None], y=[None],
        name="Democratic",
        marker=dict(color="#003366"),
    ))
    fig.add_trace(go.Bar(
        x=[None], y=[None],
        name="Republican",
        marker=dict(color="#CC0000"),
    ))

    fig.update_layout(
        height=575,
        font=dict(family=FONT_FAMILY),
        title=dict(
            text=(
                f"{agency_acronym.upper()} Economically Significant Final Rules"
                f"<br>Published by Presidential Year"
            ),
            font=dict(size=17, color="black", family=FONT_FAMILY),
            x=0.5,
            xanchor="center",
        ),
        yaxis=dict(
            title=dict(text="Number of Rules", font=dict(color="#333333", family=FONT_FAMILY)),
            range=[0, upper],
            gridcolor="rgba(170, 170, 170, 0.4)",
            gridwidth=1,
            showline=False,
            tickfont=dict(color="#333333", family=FONT_FAMILY),
            ticks="outside",
            ticklen=0,
            tickwidth=1.2,
            tickcolor="#333333",
            zeroline=True,
            zerolinecolor=RSC_GRAY,
            zerolinewidth=1.5,
            dtick=interval,
        ),
        xaxis=dict(
            tickangle=45,
            showgrid=False,
            showline=False,
            tickfont=dict(color="#333333", family=FONT_FAMILY),
            ticks="outside",
            ticklen=0,
            dtick=1,
            tickmode="linear",
            ticklabeloverflow="allow",
        ),
        legend=dict(
            orientation="h",
            yanchor="top",
            y=-0.18,
            xanchor="center",
            x=0.5,
            traceorder="normal",
            bgcolor="rgba(255,255,255,0)",
            borderwidth=0,
            font=dict(color="#333333", family=FONT_FAMILY),
        ),
        showlegend=True,
        plot_bgcolor="white",
        paper_bgcolor="white",
        margin=dict(l=60, r=40, t=80, b=180),
        hoverlabel=dict(
            bgcolor="white",
            font_size=13,
            font_color="#333333",
            font_family=FONT_FAMILY,
        ),
        hovermode="closest",
        barmode="relative",
    )

    current_date = date.today().strftime("%B %d, %Y")
    fig.add_annotation(
        text=(
            "Sources: Office of the Federal Register (federalregister.gov) for the years 2021 and onwards; "
            "<br>Office of Information and Regulatory Affairs (reginfo.gov) for all prior years. "
            f"<br>Accessed: {current_date}"
        ),
        xref="paper",
        yref="paper",
        x=1.0,
        y=-0.26,
        showarrow=False,
        font=dict(size=11, color="#333333", family=FONT_FAMILY),
        align="right",
        xanchor="right",
        yanchor="top",
    )

    if LOGO_PATH.exists():
        with open(LOGO_PATH, "rb") as f:
            logo_base64 = base64.b64encode(f.read()).decode("utf-8")
        fig.add_layout_image(dict(
            source=f"data:image/png;base64,{logo_base64}",
            xref="paper",
            yref="paper",
            x=-0.02,
            y=-0.26,
            sizex=0.35,
            sizey=0.23,
            xanchor="left",
            yanchor="top",
        ))

    return fig


def fig_to_png_bytes(fig: go.Figure, scale: float = 2.0) -> bytes:
    height = fig.layout.height or 600
    width = int(height * 2)  # wide aspect ratio matching the responsive UI
    try:
        return pio.to_image(fig, format="png", width=width, height=height, scale=scale)
    except Exception as exc:  # pragma: no cover - surfaced in UI instead
        raise RuntimeError(
            "PNG export requires the 'kaleido' package. Install it with "
            "`pip install -U kaleido`."
        ) from exc


def plot_combined_plotly(df_combined: pd.DataFrame):
    """Build interactive Plotly bar chart for all-agency combined econ significant rules."""
    df = df_combined.sort_values("year").copy()

    years = df["year"].tolist()
    rules = df["rules"].tolist()
    parties = df["party"].tolist()

    colors = [PARTY_COLORS.get(p, "#003366") for p in parties]

    hover_texts = [
        f"<b>Year {yr}</b><br>Rules: {int(r)}<br>Party: {p}"
        for yr, r, p in zip(years, rules, parties)
    ]

    # Match R's ydynam(econ_sig_rules, 25, 3) — interval=25, padding=3
    interval = 25
    upper = _ydynam(df, interval, padding=3)

    fig = go.Figure()

    fig.add_trace(go.Bar(
        x=years,
        y=rules,
        marker=dict(
            color=colors,
            line=dict(width=0),
        ),
        hovertext=hover_texts,
        hovertemplate="%{hovertext}<extra></extra>",
        showlegend=False,
    ))

    # Legend dummy traces
    fig.add_trace(go.Bar(
        x=[None], y=[None],
        name="Democratic",
        marker=dict(color="#003366"),
    ))
    fig.add_trace(go.Bar(
        x=[None], y=[None],
        name="Republican",
        marker=dict(color="#CC0000"),
    ))

    fig.update_layout(
        height=500,
        font=dict(family=FONT_FAMILY),
        title=dict(
            text="Economically Significant Final Rules Published by Presidential Year",
            font=dict(size=17, color="black", family=FONT_FAMILY),
            x=0.5,
            xanchor="center",
        ),
        yaxis=dict(
            title=dict(text="Number of Rules", font=dict(color="#333333", family=FONT_FAMILY)),
            range=[0, upper],
            gridcolor="rgba(170, 170, 170, 0.4)",
            gridwidth=1,
            showline=False,
            tickfont=dict(color="#333333", family=FONT_FAMILY),
            ticks="outside",
            ticklen=0,
            tickwidth=1.2,
            tickcolor="#333333",
            zeroline=True,
            zerolinecolor=RSC_GRAY,
            zerolinewidth=1.5,
            dtick=interval,
        ),
        xaxis=dict(
            tickangle=45,
            showgrid=False,
            showline=False,
            tickfont=dict(color="#333333", family=FONT_FAMILY),
            ticks="outside",
            ticklen=0,
            dtick=1,
            tickmode="linear",
            ticklabeloverflow="allow",
        ),
        legend=dict(
            orientation="h",
            yanchor="top",
            y=-0.18,
            xanchor="center",
            x=0.5,
            traceorder="normal",
            bgcolor="rgba(255,255,255,0)",
            borderwidth=0,
            font=dict(color="#333333", family=FONT_FAMILY),
        ),
        showlegend=True,
        plot_bgcolor="white",
        paper_bgcolor="white",
        margin=dict(l=60, r=40, t=60, b=160),
        hoverlabel=dict(
            bgcolor="white",
            font_size=13,
            font_color="#333333",
            font_family=FONT_FAMILY,
        ),
        hovermode="closest",
        barmode="relative",
    )

    current_date = date.today().strftime("%B %d, %Y")
    fig.add_annotation(
        text=(
            "Sources: Office of the Federal Register (federalregister.gov) for the years 2021 and onwards; "
            "<br>Office of Information and Regulatory Affairs (reginfo.gov) for all prior years. "
            f"<br>Accessed: {current_date}"
        ),
        xref="paper",
        yref="paper",
        x=1.0,
        y=-0.30,
        showarrow=False,
        font=dict(size=11, color="#333333", family=FONT_FAMILY),
        align="right",
        xanchor="right",
        yanchor="top",
    )

    if LOGO_PATH.exists():
        with open(LOGO_PATH, "rb") as f:
            logo_base64 = base64.b64encode(f.read()).decode("utf-8")
        fig.add_layout_image(dict(
            source=f"data:image/png;base64,{logo_base64}",
            xref="paper",
            yref="paper",
            x=-0.02,
            y=-0.24,
            sizex=0.35,
            sizey=0.22,
            xanchor="left",
            yanchor="top",
        ))

    return fig


def main():
    df = load_data()

    agencies_df = df[["acronym", "name"]].drop_duplicates().sort_values("acronym")
    agencies = agencies_df["acronym"].tolist()
    agency_names = {row["acronym"]: row["name"] for _, row in agencies_df.iterrows()}
    agency_display_options = [f"{a} \u2014 {agency_names.get(a, a)}" for a in agencies]

    if not agencies:
        st.warning("No agencies found in the data.")
        return

    df_combined = load_combined_data()
    chart_options = [TOTAL_CHART_LABEL] + agency_display_options

    st.markdown('<main role="main" id="main-content">', unsafe_allow_html=True)
    st.title("Economically Significant Final Rules Published by Agency")

    col_controls, col_plot = st.columns([1.25, 3.25], gap="large")

    with col_controls:
        st.markdown(
            '<div role="region" aria-label="Chart controls">',
            unsafe_allow_html=True,
        )
        st.markdown("### Select Agency")

        selected_display = st.selectbox(
            "Chart selection",
            chart_options,
            index=0,
            label_visibility="hidden",
            help=(
                "Choose Total Economically Significant for selected federal agencies totals by presidential year, "
                "or choose an agency."
            ),
        )

    is_total = selected_display == TOTAL_CHART_LABEL

    if is_total:
        fig_plotly = plot_combined_plotly(df_combined)
        aria_summary = build_combined_aria_summary(df_combined)
        data_table = build_data_table(df_combined)
        png_bytes = fig_to_png_bytes(fig_plotly)
        download_slug = "total"
        chart_region_aria = (
            "Bar chart: total economically significant final rules across all agencies by presidential year"
        )
        table_caption = (
            "Data table: total economically significant final rules across all agencies, by presidential year"
        )
        footnote = (
            "This dashboard shows the total number of [economically significant]"
            "(https://regulatorystudies.columbian.gwu.edu/terminology) final rules published by selected federal agencies "
            "per presidential year (February\u00a01\u2013January\u00a031). "
            "Economically significant rules are regulations with an estimated annual economic "
            "effect of \\$100\u00a0million or more, as defined in section\u00a03(f)(1) of "
            "Executive Order\u00a012866. Rules published between April\u00a06,\u00a02023, and "
            "January\u00a020,\u00a02025, are defined as economically significant if they meet "
            "a higher threshold of \\$200\u00a0million, per Executive Order\u00a014094 (rescinded "
            "January\u00a020,\u00a02025).  \n\n"
            "[More information on how we collect data]"
            "(https://github.com/regulatorystudies/Reg-Stats/tree/main/data/py_funcs)"
        )

    else:
        selected_acronym = selected_display.split(" \u2014 ")[0]
        selected_name = agency_names.get(selected_acronym, selected_acronym)
        df_agency = df[df["acronym"] == selected_acronym].copy()

        if df_agency.empty:
            with col_plot:
                st.warning(f"No data for {selected_acronym}.")
            return

        fig_plotly = plot_agency_plotly(df_agency, selected_acronym, selected_name)
        aria_summary = build_aria_summary(df_agency, selected_acronym, selected_name)
        data_table = build_data_table(df_agency)
        png_bytes = fig_to_png_bytes(fig_plotly)
        download_slug = selected_acronym.lower()
        chart_region_aria = (
            f"Bar chart: economically significant final rules by presidential year, {selected_acronym}"
        )
        table_caption = (
            f"Data table: economically significant final rules by presidential year for {selected_name} "
            f"({selected_acronym})"
        )
        footnote = (
            "This dashboard tracks the number of [economically significant]"
            "(https://regulatorystudies.columbian.gwu.edu/terminology) final rules "
            "published by each agency per presidential year (February\u00a01\u2013January\u00a031). "
            "Economically significant rules are regulations with an estimated annual economic "
            "effect of \\$100\u00a0million or more, as defined in section\u00a03(f)(1) of "
            "Executive Order\u00a012866. Rules published between April\u00a06,\u00a02023, and "
            "January\u00a020,\u00a02025, are defined as economically significant if they meet "
            "a higher threshold of \\$200\u00a0million, per Executive Order\u00a014094 (rescinded "
            "January\u00a020,\u00a02025).  \n\n"
            "[More information on how we collect data]"
            "(https://github.com/regulatorystudies/Reg-Stats/tree/main/data/py_funcs)"


        )
    with col_controls:
        st.markdown("---")
        st.markdown("### Download")

        st.download_button(
            label="Static Image (PNG)",
            data=png_bytes,
            file_name=f"{download_slug}_econ_significant_rules_by_presidential_year.png",
            mime="image/png",
            use_container_width=True,
            help="Save the current plot as a PNG image.",
        )

        html_data = fig_plotly.to_html(full_html=True, include_plotlyjs="cdn")
        st.download_button(
            label="Interactive Plot (HTML)",
            data=html_data,
            file_name=f"{download_slug}_econ_significant_rules_by_presidential_year.html",
            mime="text/html",
            help="Download an interactive version of the plot.",
            use_container_width=True,
        )

        combined_csv_data = COMBINED_DATA_PATH.read_bytes()
        st.download_button(
            label="Data - Total (CSV)",
            data=combined_csv_data,
            file_name="econ_significant_rules_by_presidential_year.csv",
            mime="text/csv",
            help="Download the total dataset as a CSV file.",
            use_container_width=True,
        )

        csv_data = df.to_csv(index=False)
        st.download_button(
            label="Data – By Agency (CSV)",
            data=csv_data,
            file_name="agency_econ_significant_rules_by_presidential_year.csv",
            mime="text/csv",
            help="Download the by-agency dataset as a CSV file.",
            use_container_width=True,
        )

        st.markdown("</div>", unsafe_allow_html=True)

    with col_plot:
        st.markdown(
            f"""
            <div id="chart-region"
                 role="img"
                 aria-label="{chart_region_aria}. {aria_summary}"
                 style="border-radius: 6px; padding: 10px; background-color: #E8DDC6;">
            """,
            unsafe_allow_html=True,
        )
        st.plotly_chart(fig_plotly, use_container_width=True, config={"displayModeBar": False})

        # Visually hidden aria-live region for screen readers (WCAG 1.1.1, 4.1.3)
        st.markdown(
            f"""
            <div aria-live="polite"
                 aria-atomic="true"
                 class="visually-hidden">
                {aria_summary}
            </div>
            """,
            unsafe_allow_html=True,
        )

        if LOGO_PATH.exists():
            with open(LOGO_PATH, "rb") as f:
                logo_b64 = base64.b64encode(f.read()).decode("utf-8")
            st.markdown(
                f"""
                <img src="data:image/png;base64,{logo_b64}"
                     alt="GW Regulatory Studies Center logo"
                     style="display:none;"
                     aria-hidden="false" />
                """,
                unsafe_allow_html=True,
            )
        st.markdown(footnote)

        st.markdown("</div>", unsafe_allow_html=True)

    st.markdown("</main>", unsafe_allow_html=True)

if __name__ == "__main__":
    main()