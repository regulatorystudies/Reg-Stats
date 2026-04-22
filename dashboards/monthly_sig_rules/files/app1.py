import base64
import io
import sys
from pathlib import Path

BASE = Path(__file__).resolve().parent
DASHBOARD_ROOT = BASE.parent
sys.path.insert(0, str(DASHBOARD_ROOT))

import numpy as np
import pandas as pd
import plotly.graph_objects as go
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker
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

DATA_ROOT = Path(__file__).resolve().parents[3]
FONT_PATH = DATA_ROOT / "charts" / "style" / "a-avenir-next-lt-pro.otf"
FONT_FAMILY = "Avenir Next LT Pro, Avenir, Helvetica Neue, Arial, sans-serif"

DATA_PATH = DATA_ROOT / "charts" / "data" / "monthly_significant_rules_by_admin.csv"
LOGO_PATH = DATA_ROOT / "charts" / "style" / "gw_ci_rsc_2cs_pos.png"
ECON_COL = "Economically Significant"
OTHER_COL = "Other Significant"

st.set_page_config(
    page_title="Monthly Significant Rules by Administration",
    layout="wide",
)
BG_COLOR = "#E8DDC6" #GW_COLORS["GWblue"]
TEXT_COLOR =GW_COLORS["GWblue"]

font_base64 = ""
if FONT_PATH.exists():
    with open(FONT_PATH, "rb") as f:
        font_base64 = base64.b64encode(f.read()).decode("utf-8")

st.markdown(
    f"""
    <style>
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

    /* ── WCAG 2.1 AA: Keyboard focus ring ── */
    /* Streamlit removes outlines by default which fails WCAG 2.4.7.  */
    /* This restores a visible focus indicator on all interactive elements. */
    [data-testid="stDownloadButton"] button,
    [data-testid="stBaseButton-secondary"],
    [data-testid="stDownloadButton"] button p,
    [data-testid="stSelectbox"] div[data-baseweb="select"] span,
    [data-testid="stSelectbox"] div[data-baseweb="select"] div {{
        color: #ffffff !important;
        background-color: #033C5A !important;  /* ADD THIS */
        border-color: #033C5A !important;      /* ADD THIS */
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
    .skip-link:focus {{
        top: 0;
        outline: 3px solid #033C5A !important;
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
    """
    Build a plain-text data summary for screen readers.
    Injected as an aria-live region so it updates when the user
    changes the administration or the month slider.
    """
    df = _prep_plot_df(df_filtered)
    total_econ  = int(df[ECON_COL].sum())
    total_other = int(df[OTHER_COL].sum())
    total_all   = total_econ + total_other
    n_months    = len(df)
    start       = df["Date"].min().strftime("%B %Y")
    end         = df["Date"].max().strftime("%B %Y")

    peak_row  = df.loc[(df[ECON_COL] + df[OTHER_COL]).idxmax()]
    peak_date = peak_row["Date"].strftime("%B %Y")
    peak_val  = int(peak_row[ECON_COL] + peak_row[OTHER_COL])

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
    y_top = int(np.ceil(y_max / 5)*5) if y_max > 0 else 10

    fig.update_layout(
        barmode="stack",
        height=575,
        font=dict(family=FONT_FAMILY),
        title=dict(
            text=f"Significant Final Rules Published Each Month<br>under the {admin_name} Administration",
            font=dict(size=17, color='#033C5A', family=FONT_FAMILY),
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
        text="Source: Office of the Federal Register (federalregister.gov)<br>Updated February 11, 2026",
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


def fig_to_png_bytes(df_filtered: pd.DataFrame, admin_name: str) -> bytes:
    """Render the chart server-side with matplotlib and return PNG bytes."""
    df = _prep_plot_df(df_filtered)
    has_other_sig = df[OTHER_COL].sum() > 0

    econ_vals = df[ECON_COL].values
    other_vals = df[OTHER_COL].values
    dates = df["Date"].dt.strftime("%b '%y").values
    x = np.arange(len(dates))
    bar_width = 0.7

    fig, ax = plt.subplots(figsize=(14, 7))
    fig.patch.set_facecolor("white")
    ax.set_facecolor("white")

    ax.bar(x, econ_vals, width=bar_width, color=GW_COLORS["GWblue"], label="Economically Significant")
    if has_other_sig:
        ax.bar(x, other_vals, width=bar_width, bottom=econ_vals, color=GW_COLORS["GWbuff"],
               label="Other Significant", linewidth=0)

    y_max = (econ_vals + other_vals).max()
    y_top = int(np.ceil(y_max / 5) * 5) if y_max > 0 else 10
    ax.set_ylim(0, y_top)

    step = 3
    shown = list(range(0, len(dates), step))
    ax.set_xticks(shown)
    ax.set_xticklabels([dates[i] for i in shown], rotation=-45, ha="left", fontsize=9, color="#333333")

    ax.set_ylabel("Number of Rules", color="#333333", fontsize=11)
    ax.tick_params(axis="y", colors="#333333", labelsize=9)
    ax.set_title(
        f"Significant Final Rules Published Each Month\nunder the {admin_name} Administration",
        fontsize=14, color="#033C5A", pad=16
    )

    ax.yaxis.grid(True, color="#CCCCCC", linewidth=0.8, alpha=0.6)
    ax.set_axisbelow(True)
    ax.spines["top"].set_visible(False)
    ax.spines["right"].set_visible(False)
    ax.spines["left"].set_visible(False)
    ax.spines["bottom"].set_color("#CCCCCC")
    ax.axhline(0, color="#CCCCCC", linewidth=1.5)

    ax.legend(
        loc="upper center",
        bbox_to_anchor=(0.43, -0.18),
        ncol=2,
        frameon=False,
        fontsize=10,
        labelcolor="#333333",
    )

    fig.text(
        0.98, 0.01,
        "Source: Office of the Federal Register (federalregister.gov)\nUpdated February 11, 2026",
        ha="right", va="bottom", fontsize=8, color="#333333"
    )

    if LOGO_PATH.exists():
        from matplotlib.image import imread
        logo_img = imread(str(LOGO_PATH))
        logo_ax = fig.add_axes([0.01, 0.01, 0.18, 0.1])
        logo_ax.imshow(logo_img)
        logo_ax.axis("off")

    plt.tight_layout(rect=[0, 0.08, 1, 1])
    buf = io.BytesIO()
    fig.savefig(buf, format="png", dpi=150, bbox_inches="tight", facecolor="white")
    plt.close(fig)
    buf.seek(0)
    return buf.getvalue()


def main():
    df = load_data()
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
    st.title("Monthly Significant Final Rules by Administration")

    col_controls, col_plot = st.columns([1.25, 3.25], gap="large")

    with col_controls:
        # ── aria-label on the control region (WCAG 1.3.1) ───────────────────
        st.markdown(
            '<div role="region" aria-label="Chart controls">',
            unsafe_allow_html=True,
        )
        st.markdown("### Select Administration")
        admin = st.selectbox(
            "Administration",
            admins,
            index=admins.index("Trump 47") if "Trump 47" in admins else 0,
            # label_visibility="visible" so the label is read by screen readers
            label_visibility="visible",
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
        st.markdown("**Number of Months**")
        num_months = st.slider(
            "Months to display",
            min_value=6,
            max_value=total_months,
            value=total_months - 1,
            step=1,
            # label_visibility="visible" ensures the slider label is announced
            label_visibility="visible",
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
        st.markdown("**Download Plot**")

        png_bytes = fig_to_png_bytes(df_admin_filtered, admin)
        st.download_button(
            label="Download PNG",
            data=png_bytes,
            file_name=f"monthly_sig_rules_{admin.replace(' ', '_')}.png",
            mime="image/png",
            use_container_width=True,
            help="Save the current plot as a PNG image.",
        )

        html_data = fig_plotly.to_html(full_html=True, include_plotlyjs="cdn")
        st.download_button(
            label="Download Interactive Plot (HTML)",
            data=html_data,
            file_name=f"monthly_sig_rules_{admin.replace(' ', '_')}.html",
            mime="text/html",
            help="Download an interactive version of the plot.",
            use_container_width=True,
        )

        csv_data = df.to_csv(index=False)
        st.download_button(
            label="Download Data (CSV)",
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
                 aria-label="Bar chart: significant final rules by month, {admin} Administration">
            """,
            unsafe_allow_html=True,
        )

        st.plotly_chart(fig_plotly, use_container_width=True, config={"displayModeBar": False})

        # ── aria-live text summary for screen readers (WCAG 1.1.1) ───────────
        # Visually hidden but fully readable by assistive technology.
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

        # ── Logo alt text (WCAG 1.1.1) ────────────────────────────────────────
        # The Plotly layout_image has no alt attribute. We inject a labelled
        # version below the chart so screen readers get the logo description.
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

        st.markdown(
            "This graph tracks the number of [economically significant]"
            "(https://regulatorystudies.columbian.gwu.edu/terminology) final rules "
            "and other significant final rules published each month during the selected "
            "administration. Economically significant rules are regulations that have an "
            "estimated annual economic effect of \\$100 million or more, as defined in "
            "section 3(f)(1) of Executive Order 12866. However, rules published between "
            "April 6, 2023, and January 20, 2025, are defined as economically significant "
            "if they meet a higher threshold of \\$200 million, in accordance with Executive "
            "Order 14094 (which was rescinded on January 20, 2025)."
        )

        # Close chart region and main divs
        st.markdown("</div></div>", unsafe_allow_html=True)


if __name__ == "__main__":
    main()