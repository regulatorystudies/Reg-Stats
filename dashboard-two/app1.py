"""
Minimal Streamlit dashboard: pick an administration and see the monthly
significant rules plot (same data, styling, and utils as monthly_sig.ipynb).
"""
import io
import sys
from pathlib import Path

import matplotlib.dates as mdates
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sns
import streamlit as st
from PIL import Image

# Resolve paths when running from dashboard-two (or repo root)
BASE = Path(__file__).resolve().parent
sys.path.insert(0, str(BASE))
from utilis.style import GW_COLORS

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
    df["Date"] = pd.to_datetime(
        df["Year"].astype(str) + "-" + df["Month"].astype(str) + "-01"
    )
    df = df.sort_values("Date")
    df[ECON_COL] = pd.to_numeric(df[ECON_COL], errors="coerce").fillna(0)
    df[OTHER_COL] = pd.to_numeric(df[OTHER_COL], errors="coerce").fillna(0)

    sns.set_style("whitegrid")
    fig, ax = plt.subplots(figsize=(14, 7))
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
    ax.set_title(
        f"Significant Final Rules Published Each Month\nunder the {admin_name} Administration",
        fontsize=16,
        pad=18,
    )
    ax.set_ylabel("Number of Rules")
    ax.xaxis.set_major_locator(mdates.MonthLocator(interval=2))
    ax.margins(x=0)
    ax.xaxis.set_major_formatter(mdates.DateFormatter("%b %y"))
    plt.setp(ax.get_xticklabels(), rotation=60, ha="right")
    ax.grid(True, axis="y", linewidth=1.5, alpha=0.6)
    ax.grid(False, axis="x")
    sns.despine(ax=ax)
    ax.legend(frameon=False)
    fig.subplots_adjust(bottom=0.22)
    ax.set_position([0.08, 0.26, 0.88, 0.64])

    if LOGO_PATH.exists():
        im = Image.open(LOGO_PATH).convert("RGBA")
        footer_logo_ax = fig.add_axes([0.03, 0.05, 0.30, 0.14])
        footer_logo_ax.imshow(np.asarray(im), interpolation="lanczos")
        footer_logo_ax.axis("off")
        footer_logo_ax.set_aspect("equal", adjustable="box")

    fig.text(
        0.93,
        0.07,
        "Source: Office of the Federal Register (federalregister.gov)\nUpdated February 11, 2025",
        ha="right",
        va="bottom",
        fontsize=12,
    )
    return fig


def main():
    df = load_data()
    admins = sorted(df["Admin"].dropna().unique().tolist())
    if not admins:
        st.warning("No administrations found in the data.")
        return

    st.title("Monthly Significant Final Rules by Administration")

    # Left: control panel | Right: plot
    col_controls, col_plot = st.columns([1, 4], gap="large")

    with col_controls:
        st.markdown("### Controls")
        admin = st.selectbox(
            "Administration",
            admins,
            index=admins.index("Biden") if "Biden" in admins else 0,
            label_visibility="collapsed",
        )
        st.markdown("---")
        st.markdown("**Download plot**")
        download_fmt = st.selectbox(
            "Format",
            ["PNG", "SVG", "PDF"],
            label_visibility="collapsed",
        )

    df_admin = df[df["Admin"] == admin]
    if df_admin.empty:
        with col_plot:
            st.warning(f"No data for {admin}.")
        return

    fig = plot_admin(df_admin, admin)

    with col_plot:
        st.pyplot(fig)

    with col_controls:
        buf = io.BytesIO()
        fmt = download_fmt.lower()
        fig.savefig(buf, format=fmt, bbox_inches="tight", dpi=150)
        buf.seek(0)
        st.download_button(
            label=f"Download as {download_fmt}",
            data=buf,
            file_name=f"monthly_sig_rules_{admin.replace(' ', '_')}.{fmt}",
            mime="image/png" if fmt == "png" else "image/svg+xml" if fmt == "svg" else "application/pdf",
        )

    plt.close(fig)


if __name__ == "__main__":
    main()
