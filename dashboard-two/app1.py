"""
Minimal Streamlit dashboard: pick an administration and see the monthly
significant rules plot (same data, styling, and utils as monthly_sig.ipynb).
"""
import io
import sys
from pathlib import Path
BASE = Path(__file__).resolve().parent
sys.path.insert(0, str(BASE))

import matplotlib.dates as mdates
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sns
import streamlit as st
from PIL import Image

# Resolve paths when running from dashboard-two (or repo root)
try:
    from utilis.style import GW_COLORS
except (FileNotFoundError, OSError):
    # Fallback if style.py fails (e.g., logo path issue)
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

# Font (same as notebook)
import matplotlib as mpl
import matplotlib.font_manager as fm

FONT_PATH = BASE / "utilis" / "style" / "a-avenir-next-lt-pro.otf"
if FONT_PATH.exists():
    fm.fontManager.addfont(str(FONT_PATH))
    avenir = fm.FontProperties(fname=str(FONT_PATH))
    mpl.rcParams["font.family"] = avenir.get_name()
mpl.rcParams["pdf.fonttype"] = 42
mpl.rcParams["ps.fonttype"] = 42

DATA_PATH = BASE / "data" / "monthly_significant_rules_by_admin.csv"
LOGO_PATH = BASE / "utilis" / "style" / "gw_ci_rsc_2cs_pos.png"
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


def plot_admin(df_admin: pd.DataFrame, admin_name: str):
    df = df_admin.copy()
    # Handle abbreviated month names (e.g., "Jun", "Jan")
    df["Date"] = pd.to_datetime(
        df["Year"].astype(str) + "-" + df["Month"].astype(str) + "-01",
        format="mixed"
    )
    df = df.sort_values("Date")
    df[ECON_COL] = pd.to_numeric(df[ECON_COL], errors="coerce").fillna(0)
    df[OTHER_COL] = pd.to_numeric(df[OTHER_COL], errors="coerce").fillna(0)

    sns.set_style("whitegrid")
    fig, ax = plt.subplots(figsize=(12, 6), dpi=200)
    bar_width_days = 25
    econ_color = GW_COLORS["GWblue"]
    other_color = GW_COLORS["GWbuff"]

    ax.bar(
        df["Date"],
        df[ECON_COL],
        width=bar_width_days,
        label="Economically Significant",
        color=econ_color,
        align="center",
    )
    ax.bar(
        df["Date"],
        df[OTHER_COL],
        width=bar_width_days,
        bottom=df[ECON_COL],
        label="Other Significant",
        color=other_color,
        align="center",
    )
    y_max = (df[ECON_COL] + df[OTHER_COL]).max()
    y_top = int(np.ceil(y_max / 5) * 5) + 5 if y_max > 0 else 10  # next multiple of 5, plus one tick
    ax.set_ylim(0, y_top)
    ax.set_title(
        f"Significant Final Rules Published Each Month\nunder the {admin_name} Administration",
        fontsize=15,
        pad=15,
    )
    ax.set_ylabel("Number of Rules")
    ax.xaxis.set_major_locator(mdates.MonthLocator(interval=3))
    ax.margins(x=0)
    ax.xaxis.set_major_formatter(mdates.DateFormatter("%b %y"))
    plt.setp(ax.get_xticklabels(), rotation=60, ha="right")
    ax.grid(True, axis="y", linewidth=1.0, alpha=0.4)
    ax.grid(False, axis="x")
    sns.despine(ax=ax)
    # Remove y-axis line, make x-axis same color as grid but thicker
    ax.spines["left"].set_visible(False)
    ax.spines["bottom"].set_color("#CCCCCC")  # Match grid color
    ax.spines["bottom"].set_linewidth(2.0)
    ax.tick_params(axis="y", colors="#333333", width=1.2, length=4)
    # X-axis: tick marks match x-axis color, labels stay dark
    ax.tick_params(axis="x", which="major", colors="#CCCCCC", width=1.0, length=5, direction="out", bottom=True, labelcolor="#333333")
    ax.legend(frameon=False, loc="upper left")
    fig.subplots_adjust(bottom=0.25)  # More space at bottom for logo and padding
    ax.set_position([0.10, 0.26, 0.88, 0.64])

    if LOGO_PATH.exists():
        im = Image.open(LOGO_PATH).convert("RGBA")
        arr = np.array(im)
        # Align logo with y-axis (left=0.10), move lower (bottom=0.02), add padding below
        footer_logo_ax = fig.add_axes([0.06, 0.02, 0.24, 0.11])
        footer_logo_ax.imshow(arr, interpolation="bilinear")
        footer_logo_ax.axis("off")
        footer_logo_ax.set_aspect("equal", adjustable="box")

    # Align source note bottom with logo bottom (y=0.02)
    fig.text(
        0.98,
        0.08,
        "Source: Office of the Federal Register (federalregister.gov)\nUpdated February 11, 2025",
        ha="right",
        va="bottom",
        fontsize=10,
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

        )
        st.markdown("---")
        st.markdown("**Download plot**")
        download_fmt = st.selectbox(
            "Format",
            ["PNG", "PDF"],
            label_visibility="collapsed",
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
        )

    # Filter to most recent N months
    df_admin_filtered = df_admin.tail(num_months).copy()

    fig = plot_admin(df_admin_filtered, admin)

    with col_plot:
        st.pyplot(fig)

    with col_controls:
        buf = io.BytesIO()
        fmt = download_fmt.lower()
        fig.savefig(buf, format=fmt, bbox_inches="tight", dpi=300)
        buf.seek(0)
        st.download_button(
            label=f"Download as {download_fmt}",
            data=buf,
            file_name=f"monthly_sig_rules_{admin.replace(' ', '_')}.{fmt}",
            mime="image/png" if fmt == "png" else "image/svg+xml" if fmt == "svg" else "application/pdf",
        )
        st.markdown(
            "This graph tracks the number of [economically significant](https://regulatorystudies.columbian.gwu.edu/terminology) final rules and other significant final rules published each month during the Trump 47 administration. Economically significant rules are regulations that have an estimated annual economic effect of \\$ 100 million or more, as defined in section 3(f)(1) of Executive Order 12866. However, rules published between April 6, 2023, and January 20, 2025, are defined as economically significant if they meet a higher threshold of \\$200 million, in accordance with Executive Order 14094 (which was rescinded on January 20, 2025)")

    plt.close(fig)

if __name__ == "__main__":
    main()
