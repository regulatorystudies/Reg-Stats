"""
title: Cumulative Economically Significant Final Rules Published by Administration
author: Sayam Palrecha
Date: June 4, 2026
"""
import io
import os
from pathlib import Path
from datetime import date
import base64
import numpy as np
import pandas as pd
import streamlit as st
import plotly.graph_objects as go


_APP_DIR = Path(__file__).resolve().parent
_CSV_NAME = "cumulative_econ_significant_rules_by_presidential_month.csv"
_REL_DATA_CSV = Path("data") / "cumulative_es_rules" / _CSV_NAME
_REL_CHARTS_CSV = Path("charts") / "data" / _CSV_NAME
_STYLE_DIR = Path("charts") / "style"


def _resolve_data_root() -> Path:
    env_root = os.environ.get("DATA_ROOT", "").strip()
    if env_root:
        return Path(env_root).expanduser().resolve()

    for base in (_APP_DIR, *_APP_DIR.parents):
        if (base / _REL_DATA_CSV).is_file() or (base / _REL_CHARTS_CSV).is_file():
            return base
    if len(_APP_DIR.parents) > 2:
        return _APP_DIR.parents[2]
    return _APP_DIR


DATA_ROOT = _resolve_data_root()

def _data_path_candidates() -> tuple[Path, ...]:
    candidates = (
        _APP_DIR / "data" / "cumulative_es_rules" / _CSV_NAME,
        _APP_DIR / _CSV_NAME,
        DATA_ROOT / "data" / "cumulative_es_rules" / _CSV_NAME,
        DATA_ROOT / "charts" / "data" / _CSV_NAME,
    )
    env_csv = os.environ.get("CUMULATIVE_ES_RULES_CSV", "").strip()
    if env_csv:
        return (Path(env_csv).expanduser(),) + candidates
    return candidates

_DATA_PATH_CANDIDATES = _data_path_candidates()
DATA_PATH = next((p for p in _DATA_PATH_CANDIDATES if p.is_file()), None)

def _resolve_style_asset(filename: str) -> Path:
    style_dir = os.environ.get("STYLE_DIR", "").strip()
    candidates = (
        [Path(style_dir) / filename] if style_dir else []
        + [
            DATA_ROOT / _STYLE_DIR / filename,
            _APP_DIR / "style" / filename,
            _APP_DIR / filename,
        ]
    )
    return next((p for p in candidates if p.is_file()), candidates[-1])


LOGO_PATH = _resolve_style_asset("gw_ci_rsc_2cs_pos.png")

# To change the color accent here put the new hex codes here
red = "#b22222"
buff20 = "#E8DDC6"
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

FONT_PATH = _resolve_style_asset("a-avenir-next-lt-pro.otf")

PLOT_BG = "#ffffff"
GRID = "#d0d0d0"


def load_font_base64(path):
    if not Path(path).exists():
        return ""
    with open(path, "rb") as f:
        return base64.b64encode(f.read()).decode()

# ydynam function used in our R scripts if you chang the step here
def ydynam(df: pd.DataFrame, step: int = 50, pad_steps: int = 3) -> int:
    if df.empty:
        return step * pad_steps
    y_max = df["econ_rules"].max()
    return int(np.ceil((y_max + step * pad_steps) / step) * step)

if DATA_PATH is None:
    st.error(
        "Data file not found. Tried:\n"
        + "\n".join(str(p) for p in _DATA_PATH_CANDIDATES)
        + "\n\nFor Railway: set service Root Directory to the repo root, or set "
        "CUMULATIVE_ES_RULES_CSV to the CSV path and include the file in the deploy."
    )
    st.stop()
cum_sig = pd.read_csv(DATA_PATH)

data_updated_date = pd.to_datetime(os.path.getmtime(DATA_PATH), unit="s").strftime("%B %d, %Y")
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

# Streamlit UI
st.set_page_config(
    page_title="Cumulative Economically Significant Final Rules Published by Administration",
    layout="wide"
)
if "selected_presidents" not in st.session_state:
    st.session_state.selected_presidents = admin_labels.copy()

if "show_12_months" not in st.session_state:
    st.session_state.show_12_months = False

st.title("Cumulative Economically Significant Final Rules Published by Administration")


# CSS for the colors and buttons and functions in the plot and other things
left, right = st.columns([3, 9], gap="large")
font_base64 = load_font_base64(FONT_PATH)
font_family_css = "'AvenirCustom', sans-serif" if font_base64 else "sans-serif"

st.markdown(
    f"""
    <style>
    {"@font-face { font-family: 'AvenirCustom'; src: url(data:font/opentype;base64," + font_base64 + ") format('opentype'); font-weight: normal; font-style: normal; }" if font_base64 else ""}
    html, body, [class*="css"] {{
        font-family: {font_family_css} !important;
    }}
    .stApp {{
        background-color: {"#E8DDC6"};
        color: {"#E8DDC6"};
        font-family: {font_family_css} !important;
    }}
    [data-testid="stSidebar"] {{
        background-color: {GWblue};
    }}
    [data-testid="stSidebar"] * {{
        color: {GWblue} !important;
        font-family: {font_family_css} !important;
    }}
    .stApp * {{
        color: {GWblue};
        font-family: {font_family_css} !important;
    }}
    h1, h2, h3, h4, h5, h6 {{
        color: {GWbuff} !important;
        font-family: {font_family_css} !important;
    }}
    p, div, span, label {{
        font-family: {font_family_css} !important;
    }}
    .stButton > button,
    .stDownloadButton > button,
    .stLinkButton a {{
        background-color: {GWblue} !important;
        color: {buff20} !important;
        border: 1px solid {buff20} !important;
        font-family: {font_family_css} !important;
    }}
    .stButton > button *,
    .stDownloadButton > button *,
    .stLinkButton a * {{
        color: {buff20} !important;
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
        color: {buff20} !important;
        fill: {GWbuff} !important;
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
# Reactive-equivalent filtering

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


def make_plotly_chart(data_dl: pd.DataFrame, selected_presidents_dl, show_12_months_dl: bool):
    axis_text = "#222222"
    grid_color = "#d9d9d9"

    # shared card shape helper
    def _add_card(f):
        f.add_shape(
            type="rect", xref="paper", yref="paper",
            x0=0.02, y0=0.03, x1=0.98, y1=0.97,
            fillcolor="#ffffff", line=dict(width=0), layer="below"
        )

    if data_dl.empty:
        fig = go.Figure()
        _add_card(fig)
        fig.add_annotation(
            text="Please select at least one presidential administration to display.",
            xref="paper", yref="paper", x=0.5, y=0.55,
            showarrow=False, font=dict(size=14, color=axis_text)
        )
        fig.update_layout(
            plot_bgcolor="#ffffff", paper_bgcolor='white',
            xaxis=dict(visible=False, domain=[0.08, 0.94]),
            yaxis=dict(visible=False, domain=[0.30, 0.88]),
            showlegend=False, height=660,
            margin=dict(l=4, r=4, t=4, b=4)
        )
        return fig

    max_months = 12 if show_12_months_dl else int(data_dl["months_in_office"].max())
    y_max = float(data_dl["econ_rules"].max())
    x_ticks = list(np.arange(0, max_months + 1, 4)) if max_months >= 4 else list(np.arange(0, max_months + 1, 1))
    y_top = int(ydynam(data_dl, 50, 0))
    y_step = 25 if show_12_months_dl else 50
    y_ticks = list(np.arange(0, y_top + 1, y_step))

    fig = go.Figure()
    _add_card(fig)

    # data lines with hover
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

    # chart title
    fig.add_annotation(
        xref="paper", yref="paper",
        x=0.51, y=0.955,
        text="Cumulative Economically Significant Final Rules Published by Administration",
        showarrow=False, xanchor="center", yanchor="top",
        font=dict(size=19.5, color='black')
    )

    # first-term dashed line + label
    if show_first_term_line:
        fig.add_vline(x=48, line_dash="dash", line_color="#9c9c9c", line_width=0.8)
        fig.add_annotation(
            x=48.3, y=y_max + 8,
            xref="x", yref="y",
            text="End of First Presidential Term",
            showarrow=False, xanchor="left", yanchor="bottom",
            font=dict(size=10.5, color="#666666")
        )

    # endpoint labels
    line_ends_dl = (
        data_dl.groupby("president", observed=True)
        .agg(
            months_in_office_end=("months_in_office", "max"),
            econ_rules_end=("econ_rules", "max")
        )
        .reset_index()
    )
    # Sort endpoints by y so we can space out labels that are too close
    line_ends_sorted = line_ends_dl.sort_values("econ_rules_end").reset_index(drop=True)
    min_gap = (y_max) * 0.035  # minimum vertical spacing between labels (in data units)  # minimum vertical spacing between labels (in data units)
    last_y = None
    for _, row in line_ends_sorted.iterrows():
        label_y = row["econ_rules_end"] + 2
        if last_y is not None and (label_y - last_y) < min_gap:
            label_y = last_y + min_gap
        last_y = label_y
        at_right_edge = row["months_in_office_end"] >= max_months - 6
        fig.add_annotation(
            x=row["months_in_office_end"] - 0.4 if at_right_edge else row["months_in_office_end"] + 0.4,
            y=label_y,
            xref="x", yref="y",
            text=f"<b>{row['president']}</b>",
            showarrow=False,
            xanchor="right" if at_right_edge else "left",
            yanchor="bottom",
            font=dict(size=11, color=admin_color_map.get(str(row["president"]), "#333333"))
        )

    # footer note
    fig.add_annotation(
        xref="paper", yref="paper",
        x=0.075, y=0.175,
        text=(
            "Note: Data for month 0 include rules published between January 21 and January 31 "
            "of the administration's first year."
        ),
        showarrow=False, xanchor="left", yanchor="bottom",
        font=dict(size=8.5, color=axis_text), align="left"
    )

    # footer sources (3 lines, no date)
    fig.add_annotation(
        xref="paper", yref="paper",
        x=0.94, y=0.175,
        text=(
            "Sources: Office of the Federal Register (federalregister.gov) for Biden<br>"
            "administration and all subsequent administrations; Office of Information<br>"
            "and Regulatory Affairs (reginfo.gov) for all prior administrations."
        ),
        showarrow=False, xanchor="right", yanchor="top",
        font=dict(size=8.5, color=axis_text), align="right"
    )

    # date line (separate, below sources)
    fig.add_annotation(
        xref="paper", yref="paper",
        x=0.94, y=0.08,
        text=f"Accessed: {date.today().strftime('%B %d, %Y')}",
        showarrow=False, xanchor="right", yanchor="bottom",
        font=dict(size=8.5, color=axis_text), align="right"
    )

    # logo
    _logo_path = Path(LOGO_PATH)
    if _logo_path.exists():
        try:
            with open(_logo_path, "rb") as _f:
                _logo_b64 = base64.b64encode(_f.read()).decode()
            _mime = "image/png" if _logo_path.suffix.lower() == ".png" else "image/jpeg"
            fig.add_layout_image(
                source=f"data:{_mime};base64,{_logo_b64}",
                xref="paper", yref="paper",
                x=0.075, y=0.175,
                sizex=0.18, sizey=0.15,
                xanchor="left", yanchor="top",
                sizing="contain", layer="above"
            )
        except Exception:
            pass

    # layout
    fig.update_layout(
        plot_bgcolor="#ffffff",
        paper_bgcolor='white',
        title=dict(text=""),
        xaxis=dict(
            title=dict(text="Months in Office", font=dict(size=13, color=axis_text)),
            tickfont=dict(size=11, color="#555555"),
            range=[0, max_months],
            tickvals=x_ticks,
            showgrid=False, zeroline=False,
            showline=False,
            ticklen=10,
            linecolor=grid_color, linewidth=2,
            ticks="outside", tickcolor=grid_color,
            domain=[0.08, 0.94]
        ),
        yaxis=dict(
            title=dict(text="Number of Rules", font=dict(size=13, color=axis_text)),
            tickfont=dict(size=11, color="#555555"),
            range=[0, y_max + 20],
            tickvals=y_ticks,
            gridcolor=grid_color, showgrid=True,
            zeroline=True,
            zerolinecolor=grid_color,
            zerolinewidth=1.5,
            showline=False,
            domain=[0.30, 0.88]
        ),
        showlegend=False,
        hovermode="closest",
        hoverlabel=dict(bgcolor="white", font_color="#222222", bordercolor="#aaaaaa"),
        height=660,
        margin=dict(l=4, r=4, t=4, b=4)
    )
    return fig


# Build the figure once; reusing it for all the three seprate buttons here
chart_fig = make_plotly_chart(
    data_dl=filtered_data,
    selected_presidents_dl=selected_presidents,
    show_12_months_dl=st.session_state.show_12_months
)

# Static PNG download buffer
png_bytes = chart_fig.to_image(format="png", width=1200, height=660, scale=3)
buf = io.BytesIO(png_bytes)
buf.seek(0)

# Interactive HTML download buffer
html_buf = io.StringIO()
chart_fig.write_html(html_buf, include_plotlyjs="cdn", full_html=True)
html_bytes = html_buf.getvalue().encode("utf-8")

# This is the section that would let the user download the files and select the admins

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

    btn_deselect, btn_toggle = st.columns(2, gap="small")
    with btn_deselect:
        st.button("Deselect All", on_click=_deselect_all)
    with btn_toggle:
        toggle_label = "Show Full Range" if st.session_state.show_12_months else "Show First Year Only"
        if st.button(toggle_label):
            st.session_state.show_12_months = not st.session_state.show_12_months
            st.rerun()

    # st.markdown()
    st.subheader("Download")

    st.download_button(
        label="Static Image (PNG)",
        data=buf,
        file_name=f"cumulative_econ_significant_rules_{date.today().isoformat()}.png",
        mime="image/png",
        use_container_width=True,
        key="download_png"
    )
    st.download_button(
        label="Interactive Plot (HTML)",
        data=html_bytes,
        file_name=f"cumulative_econ_significant_rules_{date.today().isoformat()}.html",
        mime="text/html",
        use_container_width=True,
        key="download_html"
    )
    with open(DATA_PATH, "rb") as _data_file:
        st.download_button(
            label="Data (CSV)",
            data=_data_file.read(),
            file_name=_CSV_NAME,
            mime="text/csv",
            use_container_width=True,
            key="download_data_csv"
        )


# this section adds the note under the plot and the link to pyfuncs
# incase of changes to the note make the changes in latex/ markdown text formatting
with right:
    st.plotly_chart(chart_fig, use_container_width=True)
    _about_left_spacer, about_col = st.columns([1, 49], gap="small")
    with about_col:
        st.write(
            "This dashboard tracks the cumulative number of economically significant final rules published by executive branch agencies under different administrations. "
            "Economically significant rules are regulations that have an estimated "
            "annual economic effect of \$100 million or more, as "
            "[defined](https://regulatorystudies.columbian.gwu.edu/terminology)"
            " in section 3(f)(1) of Executive Order 12866. "
            "However, rules published between April 6, 2023, and January 20, 2025, are defined as economically significant if they meet a higher threshold of \$200 million, in accordance with Executive Order 14094 (which was rescinded on January 20, 2025). "
        )
        st.write(
            "[More information on how we collect data]"
            "(https://github.com/regulatorystudies/Reg-Stats/tree/main/data/py_funcs)"
        )
