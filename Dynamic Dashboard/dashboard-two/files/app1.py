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

DATA_ROOT = Path(__file__).resolve().parents[3]
FONT_PATH = DATA_ROOT / "charts" / "style" / "a-avenir-next-lt-pro.otf"
FONT_FAMILY = "Avenir Next LT Pro, Avenir, Helvetica Neue, Arial, sans-serif"

DATA_PATH = DATA_ROOT / "charts"/ "data" / "monthly_significant_rules_by_admin.csv"
LOGO_PATH = DATA_ROOT / "charts" / "style" / "gw_ci_rsc_2cs_pos.png"
ECON_COL = "Economically Significant"
OTHER_COL = "Other Significant"

st.set_page_config(page_title="Monthly Significant Rules by Administration", layout="wide")

# Theme: GWblue background, GWbuff text
BG_COLOR = GW_COLORS["GWblue"]
TEXT_COLOR = GW_COLORS["GWbuff"]

# Load custom font as base64 for embedding
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

    # Check if there's any Other Significant data
    has_other_sig = df[OTHER_COL].sum() > 0

    # Create custom data for hover
    custom_data = list(zip(df[ECON_COL].astype(int), df[OTHER_COL].astype(int)))

    fig = go.Figure()

    if has_other_sig:
        # Both categories exist - show both in hover, only on top bar
        fig.add_trace(go.Bar(
            x=df["Date"],
            y=df[ECON_COL],
            name="Economically Significant",
            marker_color=econ_color,
            customdata=custom_data,
            hoverinfo="skip",
        ))

        fig.add_trace(go.Bar(
            x=df["Date"],
            y=df[OTHER_COL],
            name="Other Significant",
            marker_color=other_color,
            customdata=custom_data,
            hovertemplate="<b>%{x|%b %Y}</b><br>Economically Significant: %{customdata[0]}<br>Other Significant: %{customdata[1]}<extra></extra>",
        ))
    else:
        # Only Economically Significant data - show hover on the only bar
        fig.add_trace(go.Bar(
            x=df["Date"],
            y=df[ECON_COL],
            name="Economically Significant",
            marker_color=econ_color,
            customdata=custom_data,
            hovertemplate="<b>%{x|%b %Y}</b><br>Economically Significant: %{customdata[0]}<extra></extra>",
        ))

    y_max = (df[ECON_COL] + df[OTHER_COL]).max()
    y_top = int(np.ceil(y_max / 5) * 5) if y_max > 0 else 10

    fig.update_layout(
        barmode="stack",
        height=575,
        font=dict(family=FONT_FAMILY),
        title=dict(
            text=f"Significant Final Rules Published Each Month<br>under the {admin_name} Administration",
            font=dict(size=17, color=GW_COLORS['GWblue'], family=FONT_FAMILY),
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
        hovermode="closest",
    )

    fig.add_annotation(
        text="Source: Office of the Federal Register (federalregister.gov)<br>Updated February 11, 2026",
        xref="paper",
        yref="paper",
        x=1.0,
        y=-0.22,
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
        st.markdown("### Select Administration")
        admin = st.selectbox(
            "Administration",
            admins,
            index=admins.index("Trump 47") if "Trump 47" in admins else 0,
            label_visibility="collapsed",
            help="Choose the presidential administration to view monthly significant final rules.",
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
    total_months = len(df_admin) - 1

    with col_controls:
        st.markdown("---")
        st.markdown("**Number of Months**")
        num_months = st.slider(
            "Months to display",
            min_value=6,
            max_value=total_months,
            value=total_months,
            step=1,
            label_visibility="collapsed",
            help="Show the first N months of data from the start of the administration. Drag to adjust.",
        )
    # Filter to first N months (from the start)
    df_admin_filtered = df_admin.head(num_months).copy()

    fig_plotly = plot_admin_plotly(df_admin_filtered, admin)

    with col_controls:
        st.markdown("---")
        st.markdown("**Download plot**")
        
        # Format selector and download button side by side
        fmt_col, btn_col = st.columns(2)
        with fmt_col:
            download_fmt = st.selectbox(
                "Format",
                ["PNG", "PDF"],
                label_visibility="collapsed",
                help="Select file format for the downloaded plot."
            )
        
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

        with btn_col:
            st.download_button(
                label=f"Download {download_fmt}",
                data=buf,
                file_name=f"monthly_sig_rules_{admin.replace(' ', '_')}.{fmt}",
                mime=mime,
                help="Save the current plot to your device.",
            )
        
        # Download data button below
        csv_data = df_admin_filtered[["Year", "Month", ECON_COL, OTHER_COL]].to_csv(index=False)
        st.download_button(
            label="Download Data (CSV)",
            data=csv_data,
            file_name=f"monthly_sig_rules_{admin.replace(' ', '_')}_data.csv",
            mime="text/csv",
            help="Download the filtered data as a CSV file.",
            use_container_width=True
        )

    with col_plot:
        st.plotly_chart(fig_plotly, use_container_width=True, config={"displayModeBar": False})
        st.markdown(
            "This graph tracks the number of [economically significant](https://regulatorystudies.columbian.gwu.edu/terminology) final rules and other significant final rules published each month during the Trump 47 administration. Economically significant rules are regulations that have an estimated annual economic effect of \\$ 100 million or more, as defined in section 3(f)(1) of Executive Order 12866. However, rules published between April 6, 2023, and January 20, 2025, are defined as economically significant if they meet a higher threshold of \\$200 million, in accordance with Executive Order 14094 (which was rescinded on January 20, 2025)")

if __name__ == "__main__":
    main()
