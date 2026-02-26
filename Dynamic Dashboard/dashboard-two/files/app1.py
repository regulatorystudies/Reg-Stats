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

FONT_FAMILY = "Avenir Next LT Pro"


DATA_ROOT = Path(__file__).resolve().parents[3]
DATA_PATH = DATA_ROOT / "charts"/ "data" / "monthly_significant_rules_by_admin.csv"
LOGO_PATH = DATA_ROOT / "charts" / "style" / "gw_ci_rsc_2cs_pos.png"
ECON_COL = "Economically Significant"
OTHER_COL = "Other Significant"

st.set_page_config(page_title="Monthly Significant Rules by Administration", layout="wide")

# Theme: GWblue background, GWbuff text
BG_COLOR = GW_COLORS["GWblue"]
TEXT_COLOR = GW_COLORS["GWbuff"]
st.markdown(
    f"""
    <style>
    .stApp, [data-testid="stAppViewContainer"] {{ background-color: {BG_COLOR}; }}
    html, body, [class*="css"] {{ color: {TEXT_COLOR}; }}
    h1, h2, h3, h4, p, span, label, div {{ color: {TEXT_COLOR}; }}
    </style>
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


def plot_admin_plotly(df_admin: pd.DataFrame, admin_name: str):
    """Create an interactive Plotly stacked bar chart with hover."""
    df = _prep_plot_df(df_admin)
    econ_color = GW_COLORS["GWblue"]
    other_color = GW_COLORS["GWbuff"]

    fig = go.Figure()

    fig.add_trace(go.Bar(
        x=df["Date"],
        y=df[ECON_COL],
        name="Economically Significant",
        marker_color=econ_color,
        hovertemplate="<b>%{x|%b %Y}</b><br>Economically Significant: %{y}<extra></extra>",
    ))

    fig.add_trace(go.Bar(
        x=df["Date"],
        y=df[OTHER_COL],
        name="Other Significant",
        marker_color=other_color,
        hovertemplate="<b>%{x|%b %Y}</b><br>Other Significant: %{y}<extra></extra>",
    ))

    y_max = (df[ECON_COL] + df[OTHER_COL]).max()
    y_top = int(np.ceil(y_max / 5) * 5) + 5 if y_max > 0 else 10

    fig.update_layout(
        barmode="stack",
        height=575,
        title=dict(
            text=f"Significant Final Rules Published Each Month<br>under the {admin_name} Administration",
            font=dict(size=17, color="#333333", family=FONT_FAMILY),
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
            ticklen=4,
            tickwidth=1.2,
            tickcolor="#333333",
            zeroline=True,
            zerolinecolor="#CCCCCC",
            zerolinewidth=2,
        ),
        xaxis=dict(
            tickformat="%y %b",
            tickangle=50,
            showgrid=False,
            showline=False,
            tickfont=dict(color="#333333", family=FONT_FAMILY),
            ticks="outside",
            ticklen=5,
            tickwidth=1,
            tickcolor="#CCCCCC",
            dtick="M3",
        ),
        legend=dict(
            orientation="h",
            yanchor="top",
            y=-0.20,
            xanchor="center",
            x=0.43,
            bgcolor="rgba(255,255,255,0)",
            borderwidth=0,
            font=dict(color="#333333", family=FONT_FAMILY),
        ),
        plot_bgcolor="white",
        paper_bgcolor="white",
        margin=dict(l=60, r=40, t=80, b=180),
        hoverlabel=dict(
            bgcolor="white",
            font_size=13,
            font_color="#333333",
            font_family=FONT_FAMILY,
        ),
    )

    # Add source text annotation (bottom right)
    fig.add_annotation(
        text="Source: Office of the Federal Register (federalregister.gov)<br>Updated February 11, 2026",
        xref="paper",
        yref="paper",
        x=1.0,
        y=-0.22,
        showarrow=False,
        font=dict(size=11.5, color="#333333", family=FONT_FAMILY),
        align="right",
        xanchor="right",
        yanchor="top",
    )

    # Add logo image (bottom left)
    if LOGO_PATH.exists():
        with open(LOGO_PATH, "rb") as f:
            logo_base64 = base64.b64encode(f.read()).decode("utf-8")
        fig.add_layout_image(
            dict(
                source=f"data:image/png;base64,{logo_base64}",
                xref="paper",
                yref="paper",
                x=-0.02,
                y=-0.22,
                sizex=0.35,
                sizey=0.23,
                xanchor="left",
                yanchor="top",
            )
        )

    return fig


def main():
    df = load_data()
    admins = ["Trump 47","Biden", "Trump 45", "Obama", "Bush 43","Clinton","Bush 41","Reagan"]
    if not admins:
        st.warning("No administrations found in the data.")
        return

    st.title("Monthly Significant Final Rules by Administration",text_alignment = "center")

    # Left: control panel | Right: plot
    col_controls, col_plot = st.columns([1.25, 3.25], gap="large")

    with col_controls:
        st.markdown("### Select Adminstration")
        admin = st.selectbox(
            "Administration",
            admins,
            index=admins.index("Trump 47") if "Trump 47" in admins else 0,
            label_visibility="collapsed",
            help="Choose the presidential administration to view monthly significant final rules.",
        )
        st.markdown("---")
        st.markdown("**Download plot**")
        download_fmt = st.selectbox(
            "Format",
            ["PNG", "PDF"],
            label_visibility="collapsed",
            help="Select file format for the downloaded plot.",
        )


    df_admin = df[df["Admin"] == admin]
    if df_admin.empty:
        with col_plot:
            st.warning(f"No data for {admin}.")
        return

    # Prepare date column for filtering
    df_admin = df_admin.copy()
    df_admin["Date"] = pd.to_datetime(
        df_admin["Year"].astype(str) + "-" + df_admin["Month"].astype(str) + "-01",
        format="mixed"
    )
    df_admin = df_admin.sort_values("Date")

    # Get number of months available
    total_months = len(df_admin)

    with col_controls:
        st.markdown("---")
        st.markdown("**Number of months**")
        num_months = st.slider(
            "Months to display",
            min_value=6,
            max_value=total_months,
            value=total_months,
            step=1,
            label_visibility="collapsed",
            help="Show only the most recent N months of data. Drag to adjust.",
        )

    # Filter to most recent N months
    df_admin_filtered = df_admin.tail(num_months).copy()

    fig_plotly = plot_admin_plotly(df_admin_filtered, admin)

    with col_plot:
        st.plotly_chart(fig_plotly, use_container_width=True)

    with col_controls:
        fmt = download_fmt.lower()
        if fmt == "png":
            buf = io.BytesIO()
            fig_plotly.write_image(buf, format="png", width=1000, height=600, scale=2)
            buf.seek(0)
            mime = "image/png"
        else:
            buf = io.BytesIO()
            fig_plotly.write_image(buf, format="pdf", width=1000, height=600)
            buf.seek(0)
            mime = "application/pdf"

        st.download_button(
            label=f"Download as {download_fmt}",
            data=buf,
            file_name=f"monthly_sig_rules_{admin.replace(' ', '_')}.{fmt}",
            mime=mime,
            help="Save the current plot to your device.",
        )
        st.markdown(
            "This graph tracks the number of [economically significant](https://regulatorystudies.columbian.gwu.edu/terminology) final rules and other significant final rules published each month during the Trump 47 administration. Economically significant rules are regulations that have an estimated annual economic effect of \\$ 100 million or more, as defined in section 3(f)(1) of Executive Order 12866. However, rules published between April 6, 2023, and January 20, 2025, are defined as economically significant if they meet a higher threshold of \\$200 million, in accordance with Executive Order 14094 (which was rescinded on January 20, 2025)")

if __name__ == "__main__":
    main()