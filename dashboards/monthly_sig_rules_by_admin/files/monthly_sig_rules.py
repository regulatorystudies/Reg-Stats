"""
title: Monthly Significant Final Rules by Administration
author: Sayam Palrecha
Date: June 4, 2026
"""
from datetime import date
import base64
import sys
from pathlib import Path

BASE = Path(__file__).resolve().parent
DASHBOARD_ROOT = BASE.parent
sys.path.insert(0, str(DASHBOARD_ROOT))
import numpy as np
import pandas as pd
import plotly.graph_objects as go
import streamlit as st

try:
    from utilis.style import GW_COLORS
except (FileNotFoundError, OSError):
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
        "fill": "#B2DDF4"
    }
axis_text = "#222222"
DATA_ROOT = Path(__file__).resolve().parents[3]
FONT_PATH = DATA_ROOT / "charts" / "style" / "a-avenir-next-lt-pro.otf"
FONT_FAMILY = "Avenir Next LT Pro, Avenir, Helvetica Neue, Arial, sans-serif"

DATA_PATH = DATA_ROOT / "data" / "monthly_es_rules" / "monthly_significant_rules_by_admin.csv"
LOGO_PATH = DATA_ROOT / "charts" / "style" / "gw_ci_rsc_2cs_pos.png"
ECON_COL = "Economically Significant"
OTHER_COL = "Other Significant"

st.set_page_config(
    page_title="Monthly Significant Rules by Administration",
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
    /* Dropdown option list background */
    [data-baseweb="popover"] [data-baseweb="menu"],
    [data-baseweb="popover"] ul {{
        background-color: #E8DDC6 !important;
    }}

    /* Individual option text */
    [data-baseweb="popover"] [data-baseweb="menu"] li,
    [data-baseweb="popover"] ul li {{
        background-color: #E8DDC6 !important;
        color: #033C5A !important;
    }}

    /* Hovered option */
    [data-baseweb="popover"] ul li:hover {{
        background-color: #A69362 !important;
        color: #ffffff !important;
    }}

    /* Currently selected option */
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
    [data-testid="stMainBlockContainer"],
    [data-testid="stAppViewBlockContainer"],
    [data-testid="stVerticalBlock"],
    [data-testid="stHorizontalBlock"],
    section.main, .main .block-container {{
        padding-top: 1rem !important;
        background-color: {BG_COLOR} !important;
    }}
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

    /* ── WCAG 2.1 AA: Keyboard focus ring ── */
    /* Streamlit removes outlines by default which fails WCAG 2.4.7.  */
    /* This restores a visible focus indicator on all interactive elements. */
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
    [data-testid="stSlider"] input:focus,
    [data-testid="stDownloadButton"] button:focus {{
        outline: 3px solid #033C5A !important;
        outline-offset: 2px !important;
        box-shadow: 0 0 0 3px #F8E08E !important;
    }}

    /* ── WCAG 2.1 AA: Skip-to-content link ── */
    /* Hidden until focused by keyboard — lets screen reader/keyboard users */
    /* jump straight to the chart without tabbing through all controls.     */
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
    /* Highlighted row when navigating */
    [data-baseweb="menu"] ul li:hover,
    [data-baseweb="menu"] ul li:focus,
    [data-baseweb="menu"] ul li[aria-selected="true"],
    [data-baseweb="popover"] ul li:hover,
    [data-baseweb="popover"] ul li:focus,
    [data-baseweb="popover"] ul li[aria-selected="true"] {{
        background-color: #DAC8A3 !important;
        color: #ffffff !important;
    }}

    /* BaseWeb internal highlight override */
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
def load_data(file_mtime):
    df = pd.read_csv(DATA_PATH)
    df.columns = df.columns.str.replace(".", " ", regex=False)
    return df


def _prep_plot_df(df_admin: pd.DataFrame):
    """Return dataframe with Date and numeric econ/other for plotting."""
    df = df_admin.copy()
    df["Date"] = pd.to_datetime(
        df["Year"].astype(str) + "-" + df["Month"].astype(str) + "-01",
        format="mixed"
    )
    df = df.sort_values("Date")
    df[ECON_COL] = pd.to_numeric(df[ECON_COL], errors="coerce").fillna(0)
    df[OTHER_COL] = pd.to_numeric(df[OTHER_COL], errors="coerce").fillna(0)
    return df

def build_aria_summary(df_filtered: pd.DataFrame, admin_name: str) -> str:

    df = _prep_plot_df(df_filtered)
    total_econ = int(df[ECON_COL].sum())
    total_other = int(df[OTHER_COL].sum())
    total_all = total_econ + total_other
    n_months = len(df)
    start = df["Date"].min().strftime("%B %Y")
    end = df["Date"].max().strftime("%B %Y")

    peak_row = df.loc[(df[ECON_COL] + df[OTHER_COL]).idxmax()]
    peak_date = peak_row["Date"].strftime("%B %Y")
    peak_val = int(peak_row[ECON_COL] + peak_row[OTHER_COL])

    lines = [
        f"Chart summary for the {admin_name} Administration.",
        f"Showing {n_months} months from {start} to {end}.",
        f"Total significant rules published: {total_all}.",
        f"  Economically Significant: {total_econ}.",
    ]
    if total_other > 0:
        lines.append(f"  Other Significant: {total_other}.")
    lines.append(f"Peak month: {peak_date} with {peak_val} rules.")
    return " ".join(lines)

def plot_admin_plotly(df_admin: pd.DataFrame, admin_name: str):
    df = _prep_plot_df(df_admin)
    econ_color = GW_COLORS["GWblue"]
    other_color = GW_COLORS["GWbuff"]
    has_other_sig = df[OTHER_COL].sum() > 0
    custom_data = list(zip(df[ECON_COL].astype(int), df[OTHER_COL].astype(int)))

    fig = go.Figure()
    hover_both = "<b>%{x|%b %Y}</b><br>Economically Significant: %{customdata[0]}<br>Other Significant: %{customdata[1]}<extra></extra>"

    if has_other_sig:
        fig.add_trace(go.Bar(
            x=df["Date"],
            y=df[ECON_COL],
            name="Economically Significant",
            marker_color=econ_color,
            customdata=custom_data,
            hovertemplate='<b>%{x|%b %Y}</b><br>Economically Significant: %{customdata[0]}<extra></extra>',
        ))
        fig.add_trace(go.Bar(
            x=df["Date"],
            y=df[OTHER_COL],
            name="Other Significant",
            marker_color=other_color,
            marker=dict(color=other_color, line=dict(width=0)),
            customdata=custom_data,
            hovertemplate=hover_both,
        ))
    else:
        fig.add_trace(go.Bar(
            x=df["Date"],
            y=df[ECON_COL],
            name="Economically Significant",
            marker_color=econ_color,
            customdata=custom_data,
            hovertemplate="<b>%{x|%b %Y}</b><br>Economically Significant: %{customdata[0]}<extra></extra>",
            showlegend=True,
        ))

    y_max = (df[ECON_COL] + df[OTHER_COL]).max()
    y_top = int(np.ceil(y_max / 5) * 5) if y_max > 0 else 10

    fig.update_layout(
        barmode="stack",
        height=575,
        font=dict(family=FONT_FAMILY),
        title=dict(
            text=f"Significant Final Rules Published Each Month<br>under the {admin_name} Administration",
            font=dict(size=17, color='black', family=FONT_FAMILY),
            x=0.5,
            xanchor="center",
        ),
        yaxis=dict(
            title=dict(text="Number of Rules", font=dict(color="#333333", family=FONT_FAMILY)),
            range=[0, y_top],
            gridcolor="rgba(204, 204, 204, 0.4)",
            gridwidth=1,
            showline=False,
            tickfont=dict(color="#333333", family=FONT_FAMILY),
            ticks="outside",
            ticklen=0,
            tickwidth=1.2,
            tickcolor="#333333",
            zeroline=True,
            zerolinecolor="#CCCCCC",
            zerolinewidth=2,
        ),
        xaxis=dict(
            tickformat="%y %b",
            tickangle=-45,
            showgrid=False,
            showline=False,
            tickfont=dict(color="#333333", family=FONT_FAMILY),
            ticks="outside",
            ticklen=0,
            tickwidth=2,
            tickcolor="#CCCCCC",
            dtick="M3",
        ),
        legend=dict(
            orientation="h",
            yanchor="top",
            y=-0.18,
            xanchor="center",
            x=0.43,
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
    )

    fig.add_annotation(
        text=(
            "Sources: Office of the Federal Register (federalregister.gov) for Biden<br>"
            "administration and all subsequent administrations; Office of Information<br>"
            "and Regulatory Affairs (reginfo.gov) for all prior administrations.<br>"
            f"Accessed: {date.today().strftime('%B %d, %Y')}"
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
        fig.add_layout_image(
            dict(
                source=f"data:image/png;base64,{logo_base64}",
                xref="paper",
                yref="paper",
                x=-0.02,
                y=-0.26,
                sizex=0.35,
                sizey=0.23,
                xanchor="left",
                yanchor="top",
            )
        )
    return fig


def fig_to_png_bytes(fig: go.Figure, width: int = 1200, scale: int = 2) -> bytes:
    height = fig.layout.height or 600
    return fig.to_image(format="png", width=width, height=height, scale=scale)

def main():
    df = load_data(DATA_PATH.stat().st_mtime)
    admins = ["Trump 47", "Biden", "Trump 45", "Obama", "Bush 43", "Clinton", "Bush 41", "Reagan"]
    if not admins:
        st.warning("No administrations found in the data.")
        return
    # ── Page landmark: main heading ──────────────────────────────────────────
    # role="main" gives screen readers a named landmark to jump to (WCAG 1.3.1)
    st.markdown(
        '<div role="main" id="main-content">',
        unsafe_allow_html=True,
    )
    st.markdown("# **Monthly Significant Final Rules Published by Administration**")

    col_controls, col_plot = st.columns([1.25, 3.25], gap="large")

    with col_controls:
        # ── aria-label on the control region (WCAG 1.3.1) ───────────────────
        st.markdown(
            '<div role="region" aria-label="Chart controls">',
            unsafe_allow_html=True,
        )
        st.markdown("### Select Administration")
        admin = st.selectbox(
            "Selected Administration",
            admins,
            index=admins.index("Trump 47") if "Trump 47" in admins else 0,
            label_visibility="hidden",
            help="Choose the presidential administration to view monthly significant final rules.",
        )

    df_admin = df[df["Admin"] == admin]
    if df_admin.empty:
        with col_plot:
            st.warning(f"No data for {admin}.")
        return

    df_admin = df_admin.copy()
    df_admin["Date"] = pd.to_datetime(
        df_admin["Year"].astype(str) + "-" + df_admin["Month"].astype(str) + "-01",
        format="mixed"
    )
    df_admin = df_admin.sort_values("Date")
    total_months = len(df_admin)

    with col_controls:
        st.markdown("---")
        st.markdown("### Select Number of Months to Display")
        num_months = st.slider(
            "Number of Months to Display",
            min_value=6,
            max_value=total_months,
            value=total_months,
            step=1,
            label_visibility="collapsed",
            help="Show the first N months of data from the start of the administration. Drag to adjust.",
        )

    df_admin_filtered = df_admin.head(num_months).copy()
    fig_plotly = plot_admin_plotly(df_admin_filtered, admin)

    # ── Screen reader summary (WCAG 1.1.1, 1.3.1) ───────────────────────────
    # aria-live="polite" means the summary is announced when it changes
    # without interrupting whatever the screen reader is currently saying.
    aria_summary = build_aria_summary(df_admin_filtered, admin)

    with col_controls:
        st.markdown("---")
        st.markdown("### Download")

        png_bytes = fig_to_png_bytes(fig_plotly)
        st.download_button(
            label="Static Image (PNG)",
            data=png_bytes,
            file_name=f"monthly_sig_rules_{admin.replace(' ', '_')}.png",
            mime="image/png",
            use_container_width=True,
            help="Save the current plot as a PNG image.",
        )

        html_data = fig_plotly.to_html(full_html=True, include_plotlyjs="cdn")
        st.download_button(
            label="Interactive Plot (HTML)",
            data=html_data,
            file_name=f"monthly_sig_rules_{admin.replace(' ', '_')}.html",
            mime="text/html",
            help="Download an interactive version of the plot.",
            use_container_width=True,
        )

        csv_data = df.to_csv(index=False)
        st.download_button(
            label="Data (CSV)",
            data=csv_data,
            file_name="monthly_significant_rules_by_admin.csv",
            mime="text/csv",
            help="Download the data as a CSV file.",
            use_container_width=True,
        )

        # Close the controls region div
        st.markdown("</div>", unsafe_allow_html=True)

    with col_plot:
        # ── Chart landmark with aria-label and skip-link target (WCAG 2.4.1) ─
        st.markdown(
            f"""
            <div id="chart-region"
                 role="region"
                 aria-label="Bar chart: significant final rules by month, {admin} Administration"
                 style="border-radius: 6px; padding: 10px; background-color: #E8DDC6;">
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
                     width: 1px;
                     height: 1px;
                     padding: 0;
                     margin: -1px;
                     overflow: hidden;
                     clip: rect(0,0,0,0);
                     white-space: nowrap;
                     border: 0;
                 ">
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

        st.markdown("This dashboard tracks the monthly number of “significant” final rules, as [defined]" 
        "(https://regulatorystudies.columbian.gwu.edu/terminology) by E.O. 12866 section 3(f), published by the selected administration. “Economically significant” rules are those defined by section 3(f)(1) and “other significant” rules are those defined in section 3(f)(2-4). Note that from April 6, 2023 to January 20, 2025, these definitions changed such that the economically significant (section 3(f)(1)) required a higher impact threshold (\\$200 million vs. $100 million).")
        st.write(
            "[More information on how we collect data]"
            "(https://github.com/regulatorystudies/Reg-Stats/tree/main/data/py_funcs)"
        )

        st.markdown("</div></div>", unsafe_allow_html=True)

if __name__ == "__main__":
    main()