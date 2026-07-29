"""
title: Regulatory Agency Personnel by Fiscal Year
author: Sayam Palrecha
"""
import base64
import io
import os
import textwrap
from datetime import date
from pathlib import Path

import numpy as np
import pandas as pd
import plotly.graph_objects as go
import streamlit as st

_APP_DIR = Path(__file__).resolve().parent
_COMBINED_CSV = Path("data") / "reg_budget" / "regulatory_agency_personnel_by_fy.csv"
_SUBCAT_CSV = (
    Path("data") / "reg_budget" / "by_regulatory_subcategory"
    / "reg_subcategory_regulatory_agency_personnel_by_fy.csv"
)
_STYLE_DIR = Path("charts") / "style"

MAIN_SERIES = {
    "economic_regulation": ("Economic", "#0d9bd8"),
    "social_reg_adjusted": ("Social", "#0d4a6d"),
    "tsa": ("TSA", "#497690"),
}
MAIN_ORDER = list(MAIN_SERIES.keys())

ECONOMIC_SUBCATS = {
    "finance_and_banking",
    "industry_specific_regulation",
    "general_business",
}
SUBCAT_LABELS = {
    "consumer_safety_and_health": "Consumer Safety and Health",
    "homeland_security": "Homeland Security",
    "transportation": "Transportation",
    "workplace": "Workplace",
    "environment_and_energy": "Environment and Energy",
    "finance_and_banking": "Finance and Banking",
    "industry_specific_regulation": "Industry-Specific Regulation",
    "general_business": "General Business",
}
SUBCAT_COLORS = {
    "consumer_safety_and_health": "#EF4343",
    "homeland_security": "#D1A0B9",
    "transportation": "#FFEFAE",
    "workplace": "#ADCAB8",
    "environment_and_energy": "#52C9E8",
    "finance_and_banking": "#0075C8",
    "industry_specific_regulation": "#CCE3F4",
    "general_business": "#00223E",
}

GWblue, GWbuff, buff20 = "#033C5A", "#A69362", "#E8DDC6"
GRID, AXIS = "#d9d9d9", "#222222"


def _repo_root() -> Path:
    env = os.environ.get("DATA_ROOT", "").strip()
    if env:
        return Path(env).expanduser().resolve()
    for base in (_APP_DIR, *_APP_DIR.parents):
        if (base / _COMBINED_CSV).is_file():
            return base
    return _APP_DIR.parents[2] if len(_APP_DIR.parents) > 2 else _APP_DIR


ROOT = _repo_root()
COMBINED_PATH = ROOT / _COMBINED_CSV
SUBCAT_PATH = ROOT / _SUBCAT_CSV
LOGO_PATH = ROOT / _STYLE_DIR / "gw_ci_rsc_2cs_pos.png"
FONT_PATH = ROOT / _STYLE_DIR / "a-avenir-next-lt-pro.otf"


def _font_b64(path: Path) -> str:
    if not path.is_file():
        return ""
    return base64.b64encode(path.read_bytes()).decode()


def _clean_numeric(df: pd.DataFrame) -> pd.DataFrame:
    out = df.copy()
    out = out.loc[:, ~out.columns.str.match(r"^Unnamed")]
    out.columns = [c.replace("-", "_").replace(".", "_") for c in out.columns]
    out = out[out["year"].notna()].copy()
    out["year"] = pd.to_numeric(out["year"], errors="coerce").astype("Int64")
    out = out.dropna(subset=["year"])
    out["year"] = out["year"].astype(int)
    for col in out.columns:
        if col == "year":
            continue
        out[col] = (
            pd.to_numeric(
                out[col].astype(str).str.replace(",", "", regex=False),
                errors="coerce",
            ).fillna(0)
            / 1000
        )
    return out


def ydynam(values, step: float = 50, pad: int = 1) -> float:
    vmax = float(np.nanmax(values)) if len(values) else 0.0
    if not np.isfinite(vmax) or vmax <= 0:
        return step * pad
    return float(np.ceil((vmax + step * pad) / step) * step)


def _subcat_step(vmax: float) -> float:
    for threshold, step in (
        (2, 0.5), (3, 0.5), (5, 1), (10, 2), (20, 5),
        (50, 10), (100, 25), (200, 50),
    ):
        if vmax < threshold:
            return step
    return 100.0


def _logo_image(fig: go.Figure) -> None:
    if not LOGO_PATH.is_file():
        return
    mime = "image/png" if LOGO_PATH.suffix.lower() == ".png" else "image/jpeg"
    b64 = base64.b64encode(LOGO_PATH.read_bytes()).decode()
    fig.add_layout_image(
        source=f"data:{mime};base64,{b64}",
        xref="paper", yref="paper",
        x=0.075, y=0.12, sizex=0.16, sizey=0.11,
        xanchor="left", yanchor="top", sizing="contain", layer="above",
    )


def _base_layout(fig, title, ylab, note, caption, years, y_top, y_step):
    fig.add_shape(
        type="rect", xref="paper", yref="paper",
        x0=0.02, y0=0.03, x1=0.98, y1=0.97,
        fillcolor="#ffffff", line=dict(width=0), layer="below",
    )
    y0, y1 = int(years.min()), int(years.max())
    fig.add_annotation(
        text=f"<b>{title}</b>", xref="paper", yref="paper",
        x=0.5, y=0.93, showarrow=False,
        font=dict(size=22, color=AXIS), xanchor="center",
    )
    # Note sits under the axis; logo + source sit on a lower row (no overlap).
    # Hard-wrap manually (rather than relying on Plotly's pixel-based `width`
    # wrapping) since the figure renders at a responsive width and a fixed
    # pixel width can be wider than the actual plot, clipping the text.
    wrapped_note = "<br>".join(textwrap.wrap(note, width=90))
    fig.add_annotation(
        text=wrapped_note, xref="paper", yref="paper",
        x=0.08, y=0.22, showarrow=False, align="left",
        font=dict(size=13, color=AXIS), xanchor="left", yanchor="top",
    )
    fig.add_annotation(
        text=caption, xref="paper", yref="paper",
        x=0.94, y=0.03, showarrow=False, align="right",
        font=dict(size=13, color=AXIS), xanchor="right", yanchor="bottom",
    )
    _logo_image(fig)
    fig.update_layout(
        plot_bgcolor="#ffffff", paper_bgcolor="white",
        showlegend=False, hovermode="x unified", height=720,
        margin=dict(l=4, r=4, t=4, b=4),
        hoverlabel=dict(
            bgcolor="white", font_color=AXIS, bordercolor="#aaaaaa",
            font=dict(size=13),
        ),
        xaxis=dict(
            range=[y0, y1],
            tickvals=list(range(y0, y1 + 1, 2)),
            tickangle=-65, showgrid=False, zeroline=False, showline=False,
            tickfont=dict(size=12, color="#555555"),
            domain=[0.08, 0.94],
        ),
        yaxis=dict(
            title=dict(text=ylab, font=dict(size=14, color=AXIS)),
            range=[0, y_top], tickvals=list(np.arange(0, y_top + 1e-9, y_step)),
            gridcolor=GRID, showgrid=True, zeroline=True,
            zerolinecolor=GRID, zerolinewidth=1.5, showline=False,
            tickfont=dict(size=13, color="#555555"),
            domain=[0.34, 0.88],
        ),
    )


def make_combined_chart(df: pd.DataFrame, selected: list[str], caption: str) -> go.Figure:
    fig = go.Figure()
    if not selected:
        _base_layout(
            fig, "Regulatory Agency Personnel by Fiscal Year",
            "Thousands of Full-Time Equivalent Personnel",
            "Please select at least one category.", caption,
            df["year"], 50, 50,
        )
        fig.add_annotation(
            text="Please select at least one category to display.",
            xref="paper", yref="paper", x=0.5, y=0.55,
            showarrow=False, font=dict(size=14, color=AXIS),
        )
        return fig

    cols = [c for c in MAIN_ORDER if c in selected]
    stack = df[cols].sum(axis=1)
    y_top = ydynam(stack.values, 50, 1)
    years = df["year"]

    for col in cols:
        label, color = MAIN_SERIES[col]
        fig.add_trace(go.Scatter(
            x=years, y=df[col], name=label,
            mode="lines", line=dict(width=0.5, color=color),
            stackgroup="one", fillcolor=color,
            hovertemplate=f"{label}: %{{y:.1f}}k  <extra></extra>",
        ))

    # end-of-series labels at midpoints of the stack
    last = df.iloc[-1]
    cum = 0.0
    for col in cols:
        val = float(last[col])
        mid = cum + val / 2
        cum += val
        label, _ = MAIN_SERIES[col]
        if val > 0:
            fig.add_annotation(
                x=float(last["year"]) - 5, y=mid, text=label,
                showarrow=False, font=dict(size=16, color="white"),
            )

    note = (
        "Note: The Transportation Security Administration (TSA) is displayed separately "
        "from Social Regulation as it has features that differ from other regulatory agencies."
    )
    _base_layout(
        fig, "Regulatory Agency Personnel by Fiscal Year",
        "Thousands of Full-Time Equivalent Personnel",
        note, caption, years, y_top, 50,
    )
    return fig


def make_subcat_chart(df: pd.DataFrame, cols: list[str], caption: str) -> go.Figure:
    fig = go.Figure()
    if not cols:
        _base_layout(
            fig, "Regulatory Agency Personnel by Fiscal Year",
            "Thousands of Full-Time Equivalent Personnel",
            "Please select at least one category.", caption,
            df["year"], 50, 50,
        )
        fig.add_annotation(
            text="Please select at least one category to display.",
            xref="paper", yref="paper", x=0.5, y=0.55,
            showarrow=False, font=dict(size=14, color=AXIS),
        )
        return fig

    years = df["year"]
    stack = df[cols].sum(axis=1)
    vmax = float(stack.max())
    step = _subcat_step(vmax)
    y_top = float(np.ceil(vmax / step) * step) if vmax > 0 else step

    for col in cols:
        label = SUBCAT_LABELS[col]
        color = SUBCAT_COLORS[col]
        fig.add_trace(go.Scatter(
            x=years, y=df[col], name=label,
            mode="lines", line=dict(width=0.5, color=color),
            stackgroup="one", fillcolor=color,
            hovertemplate=f"{label}: %{{y:.1f}}k  <extra></extra>",
        ))

    if len(cols) == 1:
        col = cols[0]
        label = SUBCAT_LABELS[col]
        title = f"Regulatory Agency Personnel: {label}"
        reg_type = (
            "Economic Regulation" if col in ECONOMIC_SUBCATS else "Social Regulation"
        )
        if col == "homeland_security":
            note = (
                "Note: The Homeland Security subcategory belongs to the Social Regulation "
                "category. TSA, which is displayed separately in the main personnel chart, "
                "is included here."
            )
        else:
            note = f"Note: The {label} subcategory belongs to the {reg_type} category."
    else:
        title = "Regulatory Agency Personnel by Subcategory"
        note = "Note: Selected regulatory subcategories are stacked."

    _base_layout(
        fig, title, "Thousands of Full-Time Equivalent Personnel",
        note, caption, years, y_top, step,
    )
    return fig


# --- UI ---
st.set_page_config(page_title="Regulatory Agency Personnel by Fiscal Year", layout="wide")

if not COMBINED_PATH.is_file() or not SUBCAT_PATH.is_file():
    st.error(f"Data files not found.\nTried:\n{COMBINED_PATH}\n{SUBCAT_PATH}")
    st.stop()

combined = _clean_numeric(pd.read_csv(COMBINED_PATH))
subcat = _clean_numeric(pd.read_csv(SUBCAT_PATH))
combined = combined[["year", *MAIN_ORDER]].copy()
sub_cols = [c for c in SUBCAT_LABELS if c in subcat.columns]
subcat = subcat[["year", *sub_cols]].copy()
sub_labels = [SUBCAT_LABELS[c] for c in sub_cols]
label_to_col = {SUBCAT_LABELS[c]: c for c in sub_cols}

updated = pd.to_datetime(os.path.getmtime(COMBINED_PATH), unit="s").strftime("%B %d, %Y")
caption = f"Source: FY 2024 Regulators' Budget report<br>Updated: {updated}"

if "selected_cats" not in st.session_state:
    st.session_state.selected_cats = []  # empty → combined Economic / Social / TSA

font_b64 = _font_b64(FONT_PATH)
font_css = "'AvenirCustom', sans-serif" if font_b64 else "sans-serif"
st.markdown(
    f"""
    <style>
    {"@font-face { font-family: 'AvenirCustom'; src: url(data:font/opentype;base64," + font_b64 + ") format('opentype'); }" if font_b64 else ""}
    html, body, [class*="css"], .stApp * {{ font-family: {font_css} !important; }}
    .stApp {{ background-color: {buff20}; }}
    .stApp *, h1, h2, h3, label, p, span, div {{ color: {GWblue} !important; }}
    h1, h2, h3 {{ color: {GWbuff} !important; }}
    .stButton > button, .stDownloadButton > button {{
        background-color: {GWblue} !important; color: #ffffff !important;
        border: 1px solid {buff20} !important;
    }}
    .stButton > button *, .stDownloadButton > button * {{ color: #ffffff !important; }}
    .stMultiSelect div[data-baseweb="select"] > div {{
        background-color: #ffffff !important;
        border-color: {GWblue} !important;
    }}
    [data-baseweb="tag"] {{ background-color: {GWblue} !important; }}
    [data-baseweb="tag"] span,
    [data-baseweb="tag"] svg,
    [data-baseweb="tag"] > div {{
        color: #ffffff !important;
        fill: #ffffff !important;
    }}
    /* Dropdown menu: white background, readable text */
    [data-baseweb="popover"] {{
        background-color: #ffffff !important;
    }}
    [data-baseweb="popover"] [data-baseweb="menu"],
    [data-baseweb="popover"] ul {{
        background-color: #ffffff !important;
    }}
    [data-baseweb="popover"] [data-baseweb="menu"] li,
    [data-baseweb="popover"] ul li,
    [data-baseweb="popover"] li span,
    [data-baseweb="popover"] li div {{
        background-color: #ffffff !important;
        color: {GWblue} !important;
    }}
    [data-baseweb="popover"] ul li:hover,
    [data-baseweb="popover"] li[aria-selected="true"] {{
        background-color: {buff20} !important;
        color: {GWblue} !important;
    }}
    [data-baseweb="popover"] ul li:hover span,
    [data-baseweb="popover"] ul li:hover div,
    [data-baseweb="popover"] li[aria-selected="true"] span,
    [data-baseweb="popover"] li[aria-selected="true"] div {{
        background-color: transparent !important;
        color: {GWblue} !important;
    }}
    header[data-testid="stHeader"], [data-testid="stToolbar"], [data-testid="stDecoration"] {{
        display: none !important;
    }}
    [data-testid="stMainBlockContainer"] {{ padding-top: 1rem !important; }}
    </style>
    """,
    unsafe_allow_html=True,
)

st.title("Regulatory Agency Personnel by Fiscal Year")
left, right = st.columns([3, 9], gap="large")

with left:
    st.subheader("Select Sub-Categories")
    selected_labels = st.multiselect(
        " ",
        sub_labels,
        key="selected_cats",
        label_visibility="collapsed",
        help="Leave empty for the combined Economic / Social / TSA chart. "
             "Select one or more subcategories to study those series.",
    )

    def _deselect_all():
        st.session_state.selected_cats = []

    st.button("Deselect All", on_click=_deselect_all)

    if selected_labels:
        cols = [label_to_col[lab] for lab in selected_labels if lab in label_to_col]
        cols = [c for c in sub_cols if c in cols]
        fig = make_subcat_chart(subcat, cols, caption)
        slug = "subcategories" if len(cols) != 1 else cols[0]
        csv_path, csv_name = SUBCAT_PATH, SUBCAT_PATH.name
    else:
        fig = make_combined_chart(combined, MAIN_ORDER, caption)
        slug = "combined"
        csv_path, csv_name = COMBINED_PATH, COMBINED_PATH.name

    png = fig.to_image(format="png", width=1200, height=720, scale=2)
    html_buf = io.StringIO()
    fig.write_html(html_buf, include_plotlyjs="cdn", full_html=True)

    st.subheader("Download")
    st.download_button(
        "Static Image (PNG)", png,
        file_name=f"reg_budget_personnel_{slug}_{date.today().isoformat()}.png",
        mime="image/png", use_container_width=True,
    )
    st.download_button(
        "Interactive Plot (HTML)", html_buf.getvalue().encode(),
        file_name=f"reg_budget_personnel_{slug}_{date.today().isoformat()}.html",
        mime="text/html", use_container_width=True,
    )
    st.download_button(
        "Data- Total (CSV)", csv_path.read_bytes(),
        file_name=csv_name, mime="text/csv", use_container_width=True,
    )
    st.download_button(
        "Data- By Sub Categories (CSV)", SUBCAT_PATH.read_bytes(),
        file_name=SUBCAT_PATH.name, mime="text/csv", use_container_width=True,
    )

with right:
    st.plotly_chart(fig, use_container_width=True)
    st.write("This dashboard displays regulatory agency personnel by fiscal year, from the latest Regulators' Budget report. The default view shows federal personnel within the Economic Regulation, Social Regulation, and TSA categories. Use the drop-down menu to select regulatory subcategories."
    )
