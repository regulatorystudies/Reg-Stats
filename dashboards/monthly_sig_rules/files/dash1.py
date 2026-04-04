# app.py

import io
import os
from pathlib import Path
from datetime import date
import matplotlib.font_manager as fm
import numpy as np
import pandas as pd
import streamlit as st
import matplotlib.pyplot as plt
from matplotlib.offsetbox import OffsetImage, AnnotationBbox
from adjustText import adjust_text
from PIL import Image
import plotly.graph_objects as go

# -----------------------------------------------------------------------------
# Config / equivalents for sourced R helpers
# Replace these values/paths with the exact ones from your style.R/local_utils.R
# -----------------------------------------------------------------------------

BASE_DIR = Path(__file__).resolve().parent
DATA_DIR = Path("/Users/sayam_palrecha/Desktop/RSC-Git/data/cumulative_es_rules")
DATA_FILE = "cumulative_econ_significant_rules_by_presidential_month.csv"
LOGO_PATH = Path("/Users/sayam_palrecha/Desktop/RSC-Git/charts/style/gw_ci_rsc_2cs_pos.png")

# Colors from style.R placeholders — replace with exact values
red = "#b22222"
darkgreen = "#006400"
GWblue = "#033C5A"
GWbuff = "#A69362"
lightblue = "#6baed6"
darkyellow = "#b8860b"
lightgreen = "#66a61e"
brown = "#8b4513"
RSCdarkgray = "#4d4d4d"

admins = ["Reagan", "Bush_41", "Clinton", "Bush_43", "Obama", "Trump_45", "Biden", "Trump_47"]
admin_labels = ["Reagan", "Bush 41", "Clinton", "Bush 43", "Obama", "Trump 45", "Biden", "Trump 47"]
admin_colors = [red, darkgreen, GWblue, GWbuff, lightblue, darkyellow, lightgreen, brown]
admin_color_map = dict(zip(admin_labels, admin_colors))

FONT_PATH = "/Users/sayam_palrecha/Desktop/RSC-Git/charts/style/a-avenir-next-lt-pro.otf"
# Register font with matplotlib
fm.fontManager.addfont(str(FONT_PATH))
FONT_PROP = fm.FontProperties(fname=str(FONT_PATH))
FONT_FAMILY = FONT_PROP.get_name()
plt.rcParams["font.family"] = FONT_FAMILY

# Plot colors
PLOT_BG = "#ffffff"
GRID = "#d0d0d0"

import base64

def load_font_base64(path):
    with open(path, "rb") as f:
        return base64.b64encode(f.read()).decode()

def ydynam(df: pd.DataFrame, step: int = 50, pad_steps: int = 3) -> int:
    if df.empty:
        return step * pad_steps
    y_max = df["econ_rules"].max()
    return int(np.ceil((y_max + step * pad_steps) / step) * step)


def alpha_hex(hex_color: str, alpha: float):
    hex_color = hex_color.lstrip("#")
    if len(hex_color) != 6:
        return (1, 1, 1, alpha)
    r = int(hex_color[0:2], 16) / 255
    g = int(hex_color[2:4], 16) / 255
    b = int(hex_color[4:6], 16) / 255
    return (r, g, b, alpha)


# -----------------------------------------------------------------------------
# Data loading
# -----------------------------------------------------------------------------

data_path = DATA_DIR / DATA_FILE
cum_sig = pd.read_csv(data_path)

data_updated_date = pd.to_datetime(os.path.getmtime(data_path), unit="s").strftime("%B %d, %Y")

# Rename columns
cum_sig.columns = ["month", "months_in_office"] + admins

# Get rid of unnecessary columns
cum_sig = cum_sig[["months_in_office"] + admins]

# Get rid of unnecessary rows (R: -c(98:101) => Python 0-based rows 97:100)
cum_sig = cum_sig.drop(index=range(97, 101), errors="ignore").reset_index(drop=True)

# Create long data frame
cum_sig_long_na = cum_sig.melt(
    id_vars=["months_in_office"],
    value_vars=admins,
    var_name="president",
    value_name="econ_rules"
)

# Remove NA values
cum_sig_long = cum_sig_long_na.dropna().copy()

# Change president column labels/order
label_map = dict(zip(admins, admin_labels))
cum_sig_long["president"] = cum_sig_long["president"].map(label_map)
cum_sig_long["president"] = pd.Categorical(
    cum_sig_long["president"],
    categories=admin_labels,
    ordered=True
)
cum_sig_long = cum_sig_long.sort_values(["president", "months_in_office"]).reset_index(drop=True)

# -----------------------------------------------------------------------------
# Streamlit UI
# -----------------------------------------------------------------------------

st.set_page_config(
    page_title="Cumulative Economically Significant Final Rules Published by Administration",
    layout="wide"
)

if "selected_presidents" not in st.session_state:
    st.session_state.selected_presidents = admin_labels.copy()

if "show_12_months" not in st.session_state:
    st.session_state.show_12_months = False

st.title("Cumulative Economically Significant Final Rules Published by Administration")

left, right = st.columns([3, 9], gap="large")

with left:
    st.subheader("Select Administration to Display")

    selected_presidents = st.multiselect(
        " ",
        options=admin_labels,
        default=st.session_state.selected_presidents,
        key="selected_presidents"
    )

    def _deselect_all():
        st.session_state.selected_presidents = []

    st.button("Deselect All", on_click=_deselect_all)

    toggle_label = "Show Full Range" if st.session_state.show_12_months else "Show First 12 Months Only"
    if st.button(toggle_label):
        st.session_state.show_12_months = not st.session_state.show_12_months
        st.rerun()

    st.markdown("---")
    st.link_button("RegStats Page", "https://regulatorystudies.columbian.gwu.edu/regstats#cumulativeES")

    st.markdown("---")
    st.subheader("About This Dashboard")
    st.write(
        "This dashboard tracks cumulative economically significant rules published by administrations over time."
    )
    st.write(
        "Economically significant rules are regulations that have an estimated annual economic effect of "
        "$100 million or more, as [defined](https://regulatorystudies.columbian.gwu.edu/terminology) "
        "in section 3(f)(1) of Executive Order (EO) 12866."
    )
    st.write(
        "[More information on how we collect data]"
        "(https://github.com/regulatorystudies/Reg-Stats/tree/main/data/py_funcs)"
    )
    st.write(
        "[Download Data]"
        "(https://regulatorystudies.columbian.gwu.edu/sites/g/files/zaxdzs4751/files/2025-07/"
        "cumulative_econ_significant_rules_by_presidential_month.csv)"
    )
font_base64 = load_font_base64(FONT_PATH)

st.markdown(
    f"""
    <style>
    @font-face {{
        font-family: 'AvenirCustom';
        src: url(data:font/opentype;base64,{font_base64}) format('opentype');
        font-weight: normal;
        font-style: normal;
    }}


    html, body, [class*="css"] {{
        font-family: 'AvenirCustom', sans-serif !important;
    }}

    .stApp {{
        background-color: {GWblue};
        color: {GWbuff};
        font-family: 'AvenirCustom', sans-serif !important;
    }}

    [data-testid="stSidebar"] {{
        background-color: {GWblue};
    }}

    [data-testid="stSidebar"] * {{
        color: {GWbuff} !important;
        font-family: 'AvenirCustom', sans-serif !important;
    }}

    .stApp * {{
        color: {GWbuff};
        font-family: 'AvenirCustom', sans-serif !important;
    }}

    h1, h2, h3, h4, h5, h6 {{
        color: {GWbuff} !important;
        font-family: 'AvenirCustom', sans-serif !important;
    }}

    p, div, span, label {{
        font-family: 'AvenirCustom', sans-serif !important;
    }}

    .stButton > button,
    .stDownloadButton > button,
    .stLinkButton a {{
        background-color: {GWblue} !important;
        color: {GWbuff} !important;
        border: 1px solid {GWbuff} !important;
        font-family: 'AvenirCustom', sans-serif !important;
    }}

    .stMultiSelect div[data-baseweb="select"] > div {{
        background-color: white !important;
        color: white !important;
    }}
    .stMultiSelect svg {{
        fill: black !important;
    }}
    [data-baseweb="tag"] {{
        background-color: {GWblue} !important;
        background: {GWblue} !important;
    }}
    [data-baseweb="tag"] span,
    [data-baseweb="tag"] svg,
    [data-baseweb="tag"] > div {{
        background-color: {GWblue} !important;
        background: {GWblue} !important;
    }}

    header[data-testid="stHeader"] {{
        display: none !important;
    }}


    [data-testid="stToolbar"] {{
        display: none !important;
    }}

    .block-container {{
        padding-top: {GWblue} !important;
    }}
    </style>
    """,
    unsafe_allow_html=True
)
# -----------------------------------------------------------------------------
# Reactive-equivalent filtering
# -----------------------------------------------------------------------------

selected_presidents = st.session_state.selected_presidents

if len(selected_presidents) == 0:
    filtered_data = cum_sig_long.iloc[0:0].copy()
else:
    filtered_data = cum_sig_long[cum_sig_long["president"].isin(selected_presidents)].copy()

if st.session_state.show_12_months:
    filtered_data = filtered_data[filtered_data["months_in_office"] <= 12].copy()

# Auto-toggle for first-term line: TRUE if any selected data include months > 48
if filtered_data.empty:
    show_first_term_line = False
else:
    max_months_by_pres = filtered_data.groupby("president", observed=True)["months_in_office"].max()
    show_first_term_line = (max_months_by_pres > 48).any()

# Calculate line endpoints
if filtered_data.empty:
    line_ends = pd.DataFrame(columns=["president", "months_in_office_end", "econ_rules_end"])
else:
    line_ends = (
        filtered_data.groupby("president", observed=True)
        .agg(
            months_in_office_end=("months_in_office", "max"),
            econ_rules_end=("econ_rules", "max")
        )
        .reset_index()
    )

# -----------------------------------------------------------------------------
# Plot creation
# -----------------------------------------------------------------------------

def make_plot(data_dl: pd.DataFrame, selected_presidents_dl, show_12_months_dl: bool, for_download: bool = False):
    # Dashboard colors
    fig_bg = GWblue          # outer dashboard / card background
    fig_text = GWbuff        # footer text on blue area

    # Plot card colors
    plot_bg = "#ffffff"      # full white plot card
    axis_text = "#222222"
    grid = "#d9d9d9"
    first_term_color = "#9c9c9c"

    if data_dl.empty:
        fig = plt.figure(figsize=(12, 10) if for_download else (12, 7), facecolor=fig_bg)
        ax = fig.add_axes([0.05, 0.10, 0.90, 0.82] if for_download else [0.05, 0.12, 0.90, 0.80])
        ax.set_facecolor(plot_bg)
        ax.text(
            0.5,
            0.5,
            "Please select at least one presidential administration to display."
            if not for_download
            else "Please select at least one president to display",
            ha="center",
            va="center",
            fontsize=18 if for_download else 12,
            color=axis_text,
            fontproperties=FONT_PROP
        )
        ax.set_xticks([])
        ax.set_yticks([])
        for spine in ax.spines.values():
            spine.set_visible(False)
        return fig

    max_months = 12 if show_12_months_dl else int(data_dl["months_in_office"].max())
    y_max = float(data_dl["econ_rules"].max())
    x_breaks = np.arange(0, max_months + 1, 4) if max_months >= 4 else np.arange(0, max_months + 1, 1)

    # Figure = blue dashboard area
    fig = plt.figure(figsize=(12, 10) if for_download else (12, 7), facecolor=fig_bg)

    # White plot "card" background that includes chart + logo + footnotes
    card = fig.add_axes([0.04, 0.06, 0.92, 0.86] if for_download else [0.03, 0.06, 0.94, 0.88], zorder=0)
    card.set_facecolor(plot_bg)
    card.set_xticks([])
    card.set_yticks([])
    for spine in card.spines.values():
        spine.set_visible(False)

    # Main chart area inside the white card
    ax = fig.add_axes([0.10, 0.30, 0.82, 0.50] if for_download else [0.08, 0.24, 0.86, 0.64], zorder=1)
    ax.set_facecolor(plot_bg)

    for president in selected_presidents_dl:
        pres_data = data_dl[data_dl["president"] == president].sort_values("months_in_office")
        if pres_data.empty:
            continue
        ax.plot(
            pres_data["months_in_office"],
            pres_data["econ_rules"],
            linewidth=1.15,
            color=admin_color_map[president],
            solid_capstyle="round"
        )

    ax.set_title(
        "Cumulative Economically Significant Final Rules Published by Administration",
        fontsize=16 if for_download else 18,
        pad=16,
        color=axis_text,
        fontproperties=FONT_PROP
    )
    ax.set_xlabel(
        "Months In Office",
        fontsize=12 if for_download else 13,
        color=axis_text,
        fontproperties=FONT_PROP
    )
    ax.set_ylabel(
        "Number of Rules",
        fontsize=12 if for_download else 13,
        color=axis_text,
        fontproperties=FONT_PROP
    )

    ax.set_xlim(0, max_months)
    ax.set_xticks(x_breaks)
    ax.set_ylim(0, y_max + 20)

    y_top_dynamic = ydynam(data_dl, 50, 0)
    ax.set_yticks(np.arange(0, y_top_dynamic + 1, 50))

    # Gridlines
    ax.grid(axis="y", color=grid, linewidth=0.8)
    ax.grid(axis="x", visible=False)

    # Axis styling
    ax.spines["top"].set_visible(False)
    ax.spines["right"].set_visible(False)
    ax.spines["left"].set_visible(False)
    ax.spines["bottom"].set_color(grid)
    ax.spines["bottom"].set_linewidth(1.0)

    ax.tick_params(axis="x", labelsize=11, color=grid, labelcolor="#555555")
    ax.tick_params(axis="y", labelsize=11, length=0, labelcolor="#555555")

    for lbl in ax.get_xticklabels() + ax.get_yticklabels():
        lbl.set_fontproperties(FONT_PROP)

    if show_first_term_line:
        ax.axvline(48, linestyle="--", linewidth=0.8, color=first_term_color)
        ax.text(
            48.2,
            y_max + 8,
            "End of First Presidential Term",
            ha="left",
            va="bottom",
            fontsize=10.5,
            color="#666666",
            fontproperties=FONT_PROP
        )

    line_ends_dl = (
        data_dl.groupby("president", observed=True)
        .agg(
            months_in_office_end=("months_in_office", "max"),
            econ_rules_end=("econ_rules", "max")
        )
        .reset_index()
    )

    texts = []
    for _, row in line_ends_dl.iterrows():
        txt = ax.text(
            row["months_in_office_end"] - 0.4 if row["months_in_office_end"] >= max_months - 6 else row["months_in_office_end"] + 0.4,
            row["econ_rules_end"] + 2,
            row["president"],
            fontsize=11,
            color=admin_color_map.get(row["president"], "#333333"),
            ha="right" if row["months_in_office_end"] >= max_months - 6 else "left",
            va="bottom",
            fontproperties=FONT_PROP
        )
        texts.append(txt)

    if texts:
        adjust_text(
            texts,
            ax=ax,
            only_move={"points": "y", "text": "y"},
            force_text=(1.2, 1.8),
            force_static=(1.2, 1.8),
            expand=(1.02, 1.10)
        )

    footer_note = (
        "Note: Data for month 0 include rules published between January 21 and January 31 "
        "of the administration's first year."
    )

    footer_sources = (
        "Sources: Office of the Federal Register (federalregister.gov) for Biden\n"
        "administration and all subsequent administrations; Office of Information\n"
        "and Regulatory Affairs (reginfo.gov) for all prior administrations.\n"
        + (f"Updated: {data_updated_date}" if for_download else f"Accessed: {date.today().strftime('%B %d, %Y')}")
    )

    # Footer note inside white card
    fig.text(
        0.08 if for_download else 0.06,
        0.16 if for_download else 0.11,
        footer_note,
        ha="left",
        va="center",
        fontsize=9 if for_download else 8.5,
        color=axis_text,
        fontproperties=FONT_PROP
    )

    # Footer sources inside white card
    fig.text(
        0.92 if for_download else 0.94,
        0.12 if for_download else 0.08,
        footer_sources,
        ha="right",
        va="center",
        fontsize=9.5 if for_download else 8.5,
        color=axis_text,
        linespacing=1.35,
        fontproperties=FONT_PROP
    )

    # Logo inside white card, bottom-left
    if LOGO_PATH.exists():
        try:
            logo = Image.open(LOGO_PATH)
            imagebox = OffsetImage(logo, zoom=0.22 if for_download else 0.18)
            ab = AnnotationBbox(
                imagebox,
                (0.17 if for_download else 0.15, 0.14 if for_download else 0.07),
                xycoords="figure fraction",
                frameon=False,
                box_alignment=(0.5, 0.5),
                zorder=2
            )
            fig.add_artist(ab)
        except Exception:
            pass

    return fig

    max_months = 12 if show_12_months_dl else int(data_dl["months_in_office"].max())
    y_max = data_dl["econ_rules"].max()
    x_breaks = np.arange(0, max_months + 1, 4) if max_months >= 4 else np.arange(0, max_months + 1, 1)

    fig = plt.figure(figsize=(12, 10) if for_download else (12, 7), facecolor=fig_bg)
    ax = fig.add_axes([0.08, 0.25, 0.87, 0.55] if for_download else [0.07, 0.22, 0.89, 0.66])
    ax.set_facecolor(plot_bg)

    for president in selected_presidents_dl:
        pres_data = data_dl[data_dl["president"] == president].sort_values("months_in_office")
        if pres_data.empty:
            continue
        ax.plot(
            pres_data["months_in_office"],
            pres_data["econ_rules"],
            linewidth=1.15,
            color=admin_color_map[president],
            label=president,
            solid_capstyle="round"
        )

    ax.set_title(
        "Cumulative Economically Significant Final Rules Published by Administration",
        fontsize=16 if for_download else 18,
        pad=18,
        weight="normal",
        color="black",
        fontproperties=FONT_PROP
    )
    ax.set_xlabel("Months In Office", fontsize=12 if for_download else 13, color="black", fontproperties=FONT_PROP)
    ax.set_ylabel("Number of Rules", fontsize=12 if for_download else 13, color="black", fontproperties=FONT_PROP)

    ax.set_xlim(0, max_months)
    ax.set_xticks(x_breaks)
    ax.set_ylim(0, y_max + 20)

    y_top_dynamic = ydynam(data_dl, 50, 0)
    ax.set_yticks(np.arange(0, y_top_dynamic + 1, 50))

    ax.grid(axis="y", color=grid, linewidth=0.8)
    ax.grid(axis="x", visible=False)

    ax.spines["top"].set_visible(False)
    ax.spines["right"].set_visible(False)
    ax.spines["left"].set_visible(False)
    ax.spines["bottom"].set_color(grid)
    ax.spines["bottom"].set_linewidth(1.0)

    ax.tick_params(axis="x", labelsize=11, color=grid, labelcolor="#555555")
    ax.tick_params(axis="y", labelsize=11, length=0, labelcolor="#555555")

    for lbl in ax.get_xticklabels() + ax.get_yticklabels():
        lbl.set_fontproperties(FONT_PROP)

    if show_first_term_line:
        ax.axvline(48, linestyle="--", linewidth=0.8, color="#9a9a9a")
        ax.text(
            48.2,
            y_max + 10,
            "End of First Presidential Term",
            ha="left",
            va="bottom",
            fontsize=10.5,
            color="#666666",
            fontproperties=FONT_PROP
        )

    line_ends_dl = (
        data_dl.groupby("president", observed=True)
        .agg(
            months_in_office_end=("months_in_office", "max"),
            econ_rules_end=("econ_rules", "max")
        )
        .reset_index()
    )

    texts = []
    for _, row in line_ends_dl.iterrows():
        color = admin_color_map.get(row["president"], "#333333")
        txt = ax.text(
            row["months_in_office_end"] - 0.8 if row["months_in_office_end"] >= 90 else row["months_in_office_end"] + 0.3,
            row["econ_rules_end"] + 2,
            row["president"],
            fontsize=11,
            color=color,
            ha="right" if row["months_in_office_end"] >= 90 else "left",
            va="bottom",
            fontproperties=FONT_PROP
        )
        texts.append(txt)

    if texts:
        adjust_text(
            texts,
            ax=ax,
            only_move={"points": "y", "text": "y"},
            force_text=(1.2, 1.8),
            force_static=(1.2, 1.8),
            expand=(1.02, 1.10)
        )

    footer_note = (
        "Note: Data for month 0 include rules published between January 21 and January 31 "
        "of the administration's first year."
    )

    footer_sources = (
        "Sources: Office of the Federal Register (federalregister.gov) for Biden\n"
        "administration and all subsequent administrations; Office of Information\n"
        "and Regulatory Affairs (reginfo.gov) for all prior administrations.\n"
        + (f"Updated: {data_updated_date}" if for_download else f"Accessed: {date.today().strftime('%B %d, %Y')}")
    )

    fig.text(
        0.055 if for_download else 0.03,
        0.16 if for_download else 0.10,
        footer_note,
        ha="left",
        va="center",
        fontsize=9 if for_download else 8.5,
        color=fig_text,
        fontproperties=FONT_PROP
    )

    fig.text(
        0.955,
        0.12 if for_download else 0.055,
        footer_sources,
        ha="right",
        va="center",
        fontsize=9.5 if for_download else 8.5,
        color=fig_text,
        linespacing=1.35,
        fontproperties=FONT_PROP
    )

    if LOGO_PATH.exists():
        try:
            logo = Image.open(LOGO_PATH)
            imagebox = OffsetImage(logo, zoom=0.20 if for_download else 0.16)
            ab = AnnotationBbox(
                imagebox,
                (0.14, 0.085 if for_download else 0.045),
                xycoords="figure fraction",
                frameon=False,
                box_alignment=(0.5, 0.5)
            )
            fig.add_artist(ab)
        except Exception:
            pass

    return fig

    max_months = 12 if show_12_months_dl else int(data_dl["months_in_office"].max())
    y_max = data_dl["econ_rules"].max()
    x_breaks = np.arange(0, max_months + 1, 4) if max_months >= 4 else np.arange(0, max_months + 1, 1)

    fig = plt.figure(figsize=(12, 10) if for_download else (12, 7), facecolor=bg)
    ax = fig.add_axes([0.08, 0.25, 0.87, 0.55] if for_download else [0.07, 0.22, 0.89, 0.66])
    ax.set_facecolor(bg)

    # Plot lines
    for president in selected_presidents_dl:
        pres_data = data_dl[data_dl["president"] == president].sort_values("months_in_office")
        if pres_data.empty:
            continue
        ax.plot(
            pres_data["months_in_office"],
            pres_data["econ_rules"],
            linewidth=1.15,
            color=admin_color_map[president],
            label=president,
            solid_capstyle="round"
        )

    # Title / labels
    ax.set_title(
        "Cumulative Economically Significant Final Rules Published by Administration",
        fontsize=16 if for_download else 18,
        pad=18,
        weight="normal"
    )
    ax.set_xlabel("Months In Office", fontsize=12 if for_download else 13)
    ax.set_ylabel("Number of Rules", fontsize=12 if for_download else 13)

    ax.set_xlim(0, max_months)
    ax.set_xticks(x_breaks)
    ax.set_ylim(0, y_max + 20)

    y_top_dynamic = ydynam(data_dl, 50, 0)
    ax.set_yticks(np.arange(0, y_top_dynamic + 1, 50))

    # Gridlines: horizontal only
    ax.grid(axis="y", color=grid, linewidth=0.8)
    ax.grid(axis="x", visible=False)

    # Axes styling
    ax.spines["top"].set_visible(False)
    ax.spines["right"].set_visible(False)
    ax.spines["left"].set_visible(False)
    ax.spines["bottom"].set_color(grid)
    ax.spines["bottom"].set_linewidth(1.0)

    ax.tick_params(axis="x", labelsize=11, color=grid, labelcolor="#555555")
    ax.tick_params(axis="y", labelsize=11, length=0, labelcolor="#555555")

    # First-term line
    if show_first_term_line:
        ax.axvline(48, linestyle="--", linewidth=0.8, color="#9a9a9a")
        ax.text(
            48.2,
            y_max + 10,
            "End of First Presidential Term",
            ha="left",
            va="bottom",
            fontsize=10.5,
            color="#666666"
        )

    # Endpoint labels
    line_ends_dl = (
        data_dl.groupby("president", observed=True)
        .agg(
            months_in_office_end=("months_in_office", "max"),
            econ_rules_end=("econ_rules", "max")
        )
        .reset_index()
    )

    texts = []
    for _, row in line_ends_dl.iterrows():
        color = admin_color_map.get(row["president"], "#333333")
        txt = ax.text(
            row["months_in_office_end"] - 0.8 if row["months_in_office_end"] >= 90 else row["months_in_office_end"] + 0.3,
            row["econ_rules_end"] + 2,
            row["president"],
            fontsize=11,
            color=color,
            ha="right" if row["months_in_office_end"] >= 90 else "left",
            va="bottom"
        )
        texts.append(txt)

    if texts:
        adjust_text(
            texts,
            ax=ax,
            only_move={"points": "y", "text": "y"},
            force_text=(1.2, 1.8),
            force_static=(1.2, 1.8),
            expand=(1.02, 1.10)
        )

    # Footer text
    accessed_date = date.today().strftime("%B %d, %Y")
    footer_note = (
        "Note: Data for month 0 include rules published between January 21 and January 31 "
        "of the administration's first year."
    )

    footer_sources = (
        "Sources: Office of the Federal Register (federalregister.gov) for Biden\n"
        "administration and all subsequent administrations; Office of Information\n"
        "and Regulatory Affairs (reginfo.gov) for all prior administrations.\n"
        + (f"Updated: {data_updated_date}" if for_download else f"Accessed: {accessed_date}")
    )

    fig.text(
        0.055 if for_download else 0.03,
        0.16 if for_download else 0.10,
        footer_note,
        ha="left",
        va="center",
        fontsize=9 if for_download else 8.5,
        color="#222222"
    )

    fig.text(
        0.955,
        0.12 if for_download else 0.055,
        footer_sources,
        ha="right",
        va="center",
        fontsize=9.5 if for_download else 8.5,
        color="#222222",
        linespacing=1.35
    )

    # Logo
    if LOGO_PATH.exists():
        try:
            logo = Image.open(LOGO_PATH)
            imagebox = OffsetImage(logo, zoom=0.20 if for_download else 0.16)
            ab = AnnotationBbox(
                imagebox,
                (0.14, 0.085 if for_download else 0.045),
                xycoords="figure fraction",
                frameon=False,
                box_alignment=(0.5, 0.5)
            )
            fig.add_artist(ab)
        except Exception:
            pass

    return fig

def make_plotly_chart(data_dl: pd.DataFrame, selected_presidents_dl, show_12_months_dl: bool):
    """
    Interactive Plotly chart that mirrors the matplotlib layout exactly:
      - GWblue outer background
      - White card from paper (0.03, 0.04) → (0.97, 0.96)
      - Chart axes domain matches fig.add_axes([0.08, 0.24, 0.86, 0.64])
      - Title, footer note, sources, logo placed at same paper-coord positions
        as the matplotlib fig.text() and AnnotationBbox calls
      - Endpoint labels and first-term line reproduced as data-coord annotations
    """
    axis_text  = "#222222"
    grid_color = "#d9d9d9"

    # --- shared card shape helper ---
    def _add_card(f):
        f.add_shape(
            type="rect", xref="paper", yref="paper",
            x0=0.02, y0=0.03, x1=0.98, y1=0.97,
            fillcolor="#ffffff", line=dict(width=0), layer="below"
        )

    # --- empty-state ---
    if data_dl.empty:
        fig = go.Figure()
        _add_card(fig)
        fig.add_annotation(
            text="Please select at least one presidential administration to display.",
            xref="paper", yref="paper", x=0.5, y=0.55,
            showarrow=False, font=dict(size=14, color=axis_text)
        )
        fig.update_layout(
            plot_bgcolor="#ffffff", paper_bgcolor=GWblue,
            xaxis=dict(visible=False, domain=[0.08, 0.94]),
            yaxis=dict(visible=False, domain=[0.30, 0.88]),
            showlegend=False, height=660,
            margin=dict(l=4, r=4, t=4, b=4)
        )
        return fig

    max_months = 12 if show_12_months_dl else int(data_dl["months_in_office"].max())
    y_max      = float(data_dl["econ_rules"].max())
    x_ticks    = list(np.arange(0, max_months + 1, 4)) if max_months >= 4 else list(np.arange(0, max_months + 1, 1))
    y_top      = int(ydynam(data_dl, 50, 0))
    y_ticks    = list(np.arange(0, y_top + 1, 50))

    fig = go.Figure()
    _add_card(fig)

    # --- data lines with hover ---
    for president in selected_presidents_dl:
        pres_data = data_dl[data_dl["president"] == president].sort_values("months_in_office")
        if pres_data.empty:
            continue
        fig.add_trace(go.Scatter(
            x=pres_data["months_in_office"],
            y=pres_data["econ_rules"],
            mode="lines",
            name=president,
            line=dict(color=admin_color_map[president], width=1.5),
            showlegend=False,
            hovertemplate=(
                "<b>%{fullData.name}</b><br>"
                "Months in Office: <b>%{x}</b><br>"
                "Number of Rules: <b>%{y}</b>"
                "<extra></extra>"
            )
        ))

    # --- chart title ---
    fig.add_annotation(
        xref="paper", yref="paper",
        x=0.51, y=0.955,
        text="Cumulative Economically Significant Final Rules Published by Administration",
        showarrow=False, xanchor="center", yanchor="top",
        font=dict(size=13, color=axis_text)
    )

    # --- first-term dashed line + label (mirrors ax.axvline + ax.text) ---
    if show_first_term_line:
        fig.add_vline(x=48, line_dash="dash", line_color="#9c9c9c", line_width=0.8)
        fig.add_annotation(
            x=48.3, y=y_max + 8,
            xref="x", yref="y",
            text="End of First Presidential Term",
            showarrow=False, xanchor="left", yanchor="bottom",
            font=dict(size=10.5, color="#666666")
        )

    # --- endpoint labels (mirrors the ax.text loop + adjust_text logic) ---
    line_ends_dl = (
        data_dl.groupby("president", observed=True)
        .agg(
            months_in_office_end=("months_in_office", "max"),
            econ_rules_end=("econ_rules", "max")
        )
        .reset_index()
    )
    for _, row in line_ends_dl.iterrows():
        at_right_edge = row["months_in_office_end"] >= max_months - 6
        fig.add_annotation(
            x=row["months_in_office_end"] - 0.4 if at_right_edge else row["months_in_office_end"] + 0.4,
            y=row["econ_rules_end"] + 2,
            xref="x", yref="y",
            text=str(row["president"]),
            showarrow=False,
            xanchor="right" if at_right_edge else "left",
            yanchor="bottom",
            font=dict(size=11, color=admin_color_map.get(str(row["president"]), "#333333"))
        )

    # --- footer note (sits just above the logo row) ---
    fig.add_annotation(
        xref="paper", yref="paper",
        x=0.06, y=0.27,
        text=(
            "Note: Data for month 0 include rules published between January 21 and January 31 "
            "of the administration's first year."
        ),
        showarrow=False, xanchor="left", yanchor="bottom",
        font=dict(size=8.5, color=axis_text), align="left"
    )

    # --- footer sources (bottom-right, aligned with logo row) ---
    fig.add_annotation(
        xref="paper", yref="paper",
        x=0.94, y=0.24,
        text=(
            "Sources: Office of the Federal Register (federalregister.gov) for Biden<br>"
            "administration and all subsequent administrations; Office of Information<br>"
            "and Regulatory Affairs (reginfo.gov) for all prior administrations.<br>"
            f"Accessed: {date.today().strftime('%B %d, %Y')}"
        ),
        showarrow=False, xanchor="right", yanchor="top",
        font=dict(size=8.5, color=axis_text), align="right"
    )

    # --- logo (larger, firmly in lower-left footer area) ---
    _logo_path = Path(LOGO_PATH)
    if _logo_path.exists():
        try:
            with open(_logo_path, "rb") as _f:
                _logo_b64 = base64.b64encode(_f.read()).decode()
            _mime = "image/png" if _logo_path.suffix.lower() == ".png" else "image/jpeg"
            fig.add_layout_image(
                source=f"data:{_mime};base64,{_logo_b64}",
                xref="paper", yref="paper",
                x=0.04, y=0.245,
                sizex=0.22, sizey=0.20,
                xanchor="left", yanchor="top",
                sizing="contain", layer="above"
            )
        except Exception:
            pass

    # --- layout: axis domains mirror fig.add_axes([0.08, 0.24, 0.86, 0.64]) ---
    fig.update_layout(
        plot_bgcolor="#ffffff",
        paper_bgcolor=GWblue,
        title=dict(text=""),
        xaxis=dict(
            title=dict(text="Months In Office", font=dict(size=13, color=axis_text)),
            tickfont=dict(size=11, color="#555555"),
            range=[0, max_months],
            tickvals=x_ticks,
            showgrid=False, zeroline=False,
            linecolor=grid_color, linewidth=1,
            ticks="outside", tickcolor=grid_color,
            domain=[0.08, 0.94]
        ),
        yaxis=dict(
            title=dict(text="Number of Rules", font=dict(size=13, color=axis_text)),
            tickfont=dict(size=11, color="#555555"),
            range=[0, y_max + 20],
            tickvals=y_ticks,
            gridcolor=grid_color, showgrid=True,
            zeroline=False, showline=False,
            domain=[0.30, 0.88]
        ),
        showlegend=False,
        hovermode="closest",
        hoverlabel=dict(bgcolor="white", font_color="#222222", bordercolor="#aaaaaa"),
        height=660,
        margin=dict(l=4, r=4, t=4, b=4)
    )
    return fig


with right:
    with right:
        plotly_fig = make_plotly_chart(
            data_dl=filtered_data,
            selected_presidents_dl=selected_presidents,
            show_12_months_dl=st.session_state.show_12_months
        )
        st.plotly_chart(plotly_fig, use_container_width=True)

        download_fig = make_plot(
            data_dl=filtered_data,
            selected_presidents_dl=selected_presidents,
            show_12_months_dl=st.session_state.show_12_months,
            for_download=True
        )

        buf = io.BytesIO()
        download_fig.savefig(
            buf,
            format="png",
            dpi=300,
            facecolor=download_fig.get_facecolor(),
            edgecolor="none"
        )
        plt.close(download_fig)
        buf.seek(0)

        st.download_button(
            label="Download Plot",
            data=buf,
            file_name=f"cumulative_econ_significant_rules_{date.today().isoformat()}.png",
            mime="image/png"
        )
