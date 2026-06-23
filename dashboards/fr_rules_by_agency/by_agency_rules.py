import base64
import math
import sys
from pathlib import Path
from datetime import date

import pandas as pd
import plotly.graph_objects as go
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
DATA_PATH = DATA_ROOT / "data" / "fr_rules" / "agency_federal_register_rules_by_presidential_year.csv"
TOTAL_DATA = DATA_ROOT / "data" / "fr_rules" / "federal_register_rules_by_presidential_year.csv"
LOGO_PATH = DATA_ROOT / "charts" / "style" / "gw_ci_rsc_2cs_pos.png"

TOTAL_CHART_LABEL = "All Agencies (Total)"

RSC_GRAY = "#E0E0E0"

AGENCIES = [
    "cfpb", "cftc", "cpsc",
    "dhs", "doc", "dod", "doe", "doi", "doj", "dol", "dos", "dot",
    "ed", "epa",
    "fcc", "fdic", "ferc", "fhfa", "fmc", "ftc",
    "hhs", "hud",
    "icc",
    "mshfrc",
    "nlrb",
    "nrc",
    "occ",
    "oshrc",
    "prc",
    "sba", "sec",
    "treas",
    "usda",
    "va",
]

st.set_page_config(
    page_title="Agency Rules Published in the Federal Register by Presidential Year",
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
def load_data():
    df = pd.read_csv(DATA_PATH)
    df.columns = ["agency", "acronym", "name", "year", "final", "proposed"]
    df = df.dropna().copy()
    for col in ("final", "proposed"):
        df[col] = pd.to_numeric(df[col], errors="coerce").fillna(0)
    df["year"] = pd.to_numeric(df["year"], errors="coerce")
    return df


def _to_long(df: pd.DataFrame) -> pd.DataFrame:
    long_df = df.melt(
        id_vars=["agency", "acronym", "name", "year"],
        value_vars=["final", "proposed"],
        var_name="rule_type",
        value_name="rule_num",
    )
    rule_labels = {"final": "Final Rules", "proposed": "Proposed Rules"}
    long_df["rule_type"] = long_df["rule_type"].map(rule_labels)
    return long_df


def _filter_leading_zeros(df_long: pd.DataFrame) -> pd.DataFrame:
    found_non_zero = False
    keep = []
    for rule_num in df_long["rule_num"]:
        if rule_num >= 1:
            found_non_zero = True
        keep.append(found_non_zero or rule_num != 0)
    return df_long.loc[keep].copy()


def _get_interval(values) -> int:
    if len(values) == 0:
        return 1
    max_value = max(values) / 5
    if max_value < 50:
        interval = round(max_value)
    else:
        interval = round(max_value, -1)
    return max(int(interval), 1)


def _ydynam(values, interval: int) -> int:
    if len(values) == 0:
        return 10
    max_val = max(values)
    if interval == 1:
        return int(max_val) + interval
    return int(math.ceil(max_val / interval) * interval)


def _agency_long(df: pd.DataFrame, agency_key: str) -> pd.DataFrame:
    df_agency = _to_long(df[df["acronym"].str.upper() == agency_key.upper()])
    if df_agency.empty:
        return df_agency
    return _filter_leading_zeros(df_agency)


def _eligible_agencies(df: pd.DataFrame) -> list[tuple[str, str]]:
    """Agencies from the Rmd list with at least one year and max rules >= 10."""
    eligible = []
    for agency_key in AGENCIES:
        df_agency = _agency_long(df, agency_key)
        if df_agency.empty:
            continue
        if df_agency["rule_num"].max() < 10:
            continue
        name = df_agency["name"].iloc[0]
        eligible.append((agency_key.upper(), name))
    return eligible


@st.cache_data
def load_combined_long(df: pd.DataFrame) -> pd.DataFrame:
    """Government-wide totals by year (final and proposed)."""
    totals = (
        df.groupby("year", as_index=False)[["final", "proposed"]]
        .sum()
        .assign(agency="total", acronym="TOTAL", name="Total Rules")
    )
    return _filter_leading_zeros(_to_long(totals))


def build_aria_summary(df_long: pd.DataFrame, agency_acronym: str, agency_name: str) -> str:
    df = df_long.sort_values(["year", "rule_type"])
    total_rules = int(df["rule_num"].sum())
    n_years = df["year"].nunique()
    start = int(df["year"].min()) if n_years else 0
    end = int(df["year"].max()) if n_years else 0

    if len(df) > 0:
        peak_row = df.loc[df["rule_num"].idxmax()]
        peak_year = int(peak_row["year"])
        peak_val = int(peak_row["rule_num"])
        peak_type = peak_row["rule_type"]
    else:
        peak_year = peak_val = 0
        peak_type = ""

    return (
        f"Chart summary for {agency_name} ({agency_acronym.upper()}). "
        f"Showing {n_years} presidential years from {start} to {end}. "
        f"Total rules published: {total_rules}. "
        f"Peak: {peak_year} with {peak_val} {peak_type}."
    )


def plot_agency_plotly(df_long: pd.DataFrame, agency_acronym: str, agency_name: str):
    interval = _get_interval(df_long["rule_num"].tolist())
    upper = _ydynam(df_long["rule_num"].tolist(), interval)

    fig = go.Figure()
    rule_styles = {
        "Final Rules": {"color": GW_COLORS["GWblue"], "dash": "solid"},
        "Proposed Rules": {"color": GW_COLORS["lightblue"], "dash": "dash"},
    }

    for rule_type, style in rule_styles.items():
        subset = df_long[df_long["rule_type"] == rule_type].sort_values("year")
        fig.add_trace(go.Scatter(
            x=subset["year"],
            y=subset["rule_num"],
            mode="lines",
            name=rule_type,
            line=dict(color=style["color"], width=2, dash=style["dash"]),
            hovertemplate=(
                f"{rule_type}: %{{y}}<extra></extra>"
            ),
        ))

    year_min = int(df_long[df_long["rule_num"] > 0]["year"].min())
    year_max = int(df_long["year"].max())

    fig.update_layout(
        height=575,
        font=dict(family=FONT_FAMILY),
        title=dict(
            text=f"{agency_acronym.upper() if agency_acronym != 'total' else 'Total'} Rules Published in the Federal Register by Presidential Year",
            font=dict(size=17, color="black", family=FONT_FAMILY),
            x=0.5,
            xanchor="center",
        ),
        yaxis=dict(
            title=dict(text="Number of Rules", font=dict(color="#333333", family=FONT_FAMILY)),
            range=[0, upper],
            gridcolor="rgba(224, 224, 224, 0.9)",
            gridwidth=1,
            showline=False,
            tickfont=dict(color="#333333", family=FONT_FAMILY),
            dtick=interval,
            zeroline=True,
            zerolinecolor=RSC_GRAY,
            zerolinewidth=2.5,
        ),
        xaxis=dict(
            tickangle=-55,
            showgrid=False,
            showline=False,
            linecolor=RSC_GRAY,
            linewidth=2,
            tickfont=dict(color="#333333", family=FONT_FAMILY),
            tickmode="linear",
            dtick=1,
            range=[year_min-0.18, year_max + 0.5],
        ),
        legend=dict(
            orientation="h",
            yanchor="bottom",
            y=1.02,
            xanchor="center",
            x=0.5,
            font=dict(size=13, color="#333333", family=FONT_FAMILY),
            bgcolor="rgba(255,255,255,0)",
        ),
        showlegend=True,
        plot_bgcolor="white",
        paper_bgcolor="white",
        margin=dict(l=60, r=40, t=90, b=180),
        hoverlabel=dict(
            bgcolor="white",
            font_size=13,
            font_color="#333333",
            font_family=FONT_FAMILY,
        ),
        hovermode="x unified",
    )

    current_date = date.today().strftime("%B %d, %Y")
    fig.add_annotation(
        text=(
            "Source: Federal Register API;<br>"
            "excludes corrections to rules.<br><br>"
            f"Accessed: {current_date}"
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


import copy
import plotly.io as pio


def fig_to_png_bytes(fig, scale=3):
    export_fig = copy.deepcopy(fig)

    # Match the on-screen shape: height stays 575, pick a wide width.
    height = 575
    width = 1100  # wide, like the column it renders in

    export_fig.update_layout(height=height, width=width)

    try:
        return pio.to_image(export_fig, format="png", width=width, height=height, scale=scale)
    except Exception as exc:  # pragma: no cover - surfaced in UI instead
        raise RuntimeError(
            "PNG export requires the 'kaleido' package. Install it with "
            "`pip install -U kaleido`."
        ) from exc


def main():
    df = load_data()
    eligible = _eligible_agencies(df)

    if not eligible:
        st.warning("No agencies found in the data.")
        return

    df_combined = load_combined_long(df)
    agency_names = {acronym: name for acronym, name in eligible}
    agencies = sorted(agency_names.keys())
    agency_display_options = [f"{a} \u2014 {agency_names[a]}" for a in agencies]
    chart_options = [TOTAL_CHART_LABEL] + agency_display_options

    st.markdown('<div role="main" id="main-content">', unsafe_allow_html=True)
    st.title("Rules Published in the Federal Register by Agency")

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
                "Choose Total Rules for government-wide final and proposed rule totals by "
                "presidential year, or choose an agency."
            ),
        )

    is_total = selected_display == TOTAL_CHART_LABEL

    if is_total:
        df_plot = df_combined
        agency_acronym = "total"
        agency_name = "Total Rules"
        fig_plotly = plot_agency_plotly(df_plot, agency_acronym, agency_name)
        aria_summary = build_aria_summary(df_plot, agency_acronym, agency_name)
        png_bytes = fig_to_png_bytes(fig_plotly)
        download_slug = "total"
        chart_region_aria = (
            "Line chart: total final and proposed Federal Register rules by presidential year"
        )
        footnote = (
            "This dashboard tracks the number of final and proposed rules published in the "
            "Federal Register by each agency per presidential year. Final rules appear as a "
            "solid navy line; proposed rules appear as a dashed light-blue line.  \n\n"
            "[More information on how we collect data]"
            "(https://github.com/regulatorystudies/Reg-Stats/tree/main/data/py_funcs)"
        )
    else:
        selected_acronym = selected_display.split(" \u2014 ")[0]
        selected_name = agency_names.get(selected_acronym, selected_acronym)
        df_plot = _agency_long(df, selected_acronym)

        if df_plot.empty:
            with col_plot:
                st.warning(f"No data for {selected_acronym}.")
            return

        fig_plotly = plot_agency_plotly(df_plot, selected_acronym, selected_name)
        aria_summary = build_aria_summary(df_plot, selected_acronym, selected_name)
        png_bytes = fig_to_png_bytes(fig_plotly)
        download_slug = selected_acronym.lower()
        chart_region_aria = (
            f"Line chart: Federal Register rules by presidential year, {selected_acronym}"
        )
        footnote = (
            "This dashboard tracks the number of final and proposed rules published in the "
            "Federal Register by each agency per presidential year. Final rules appear as a "
            "solid navy line; proposed rules appear as a dashed light-blue line.  \n\n"
            "[More information on how we collect data]"
            "(https://github.com/regulatorystudies/Reg-Stats/tree/main/data/py_funcs)"
        )

    with col_controls:
        st.markdown("---")
        st.markdown("### Download")

        st.download_button(
            label="Static Image (PNG)",
            data=png_bytes,
            file_name=f"{download_slug}_federal_register_rules_by_presidential_year.png",
            mime="image/png",
            use_container_width=True,
            help="Save the current plot as a PNG image.",
        )

        html_data = fig_plotly.to_html(full_html=True, include_plotlyjs="cdn")
        st.download_button(
            label="Interactive Plot (HTML)",
            data=html_data,
            file_name=f"{download_slug}_federal_register_rules_by_presidential_year.html",
            mime="text/html",
            help="Download an interactive version of the plot.",
            use_container_width=True,
        )
        combined_csv_data = TOTAL_DATA.read_bytes()
        st.download_button(
            label="Data - Total (CSV)",
            data=combined_csv_data,
            file_name="federal_register_rules_by_presidential_year.csv",
            mime="text/csv",
            help="Download the total dataset as a CSV file.",
            use_container_width=True,
        )

        csv_data = df.to_csv(index=False)
        st.download_button(
            label="Data – By Agency (CSV)",
            data=csv_data,
            file_name="agency_federal_register_rules_by_presidential_year.csv",
            mime="text/csv",
            help="Download the by-agency dataset as a CSV file.",
            use_container_width=True,
        )

        st.markdown("</div>", unsafe_allow_html=True)

    with col_plot:
        st.markdown(
            f"""
            <div id="chart-region"
                 role="region"
                 aria-label="{chart_region_aria}"
                 style="border-radius: 6px; padding: 10px; background-color: white;">
            """,
            unsafe_allow_html=True,
        )

        st.plotly_chart(fig_plotly, use_container_width=True, config={"displayModeBar": False})

        st.markdown(
            f"""
            <div aria-live="polite"
                 aria-atomic="true"
                 style="
                     position: absolute;
                     width: 1px; height: 1px;
                     padding: 0; margin: -1px;
                     overflow: hidden;
                     clip: rect(0,0,0,0);
                     white-space: nowrap;
                     border: 0;">
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
        st.markdown("</div></div>", unsafe_allow_html=True)


if __name__ == "__main__":
    main()
