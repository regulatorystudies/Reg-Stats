
import textwrap
from datetime import datetime
from pathlib import Path

import matplotlib.dates as mdates
import matplotlib.pyplot as plt
import pandas as pd
import seaborn as sns

from utilis.style import GW_COLORS
from utilis.local_utilis import ydynam

# Default paths (run from dashboard-two or set as needed)
DATA_FILE = "data/monthly_significant_rules_by_admin.csv"
OUTPUT_DIR = "output"


def load_and_prepare_data(data_path: str, presidential_admin: str = "Biden") -> pd.DataFrame:
    """Load CSV, create Date, pivot to long format, filter by admin."""
    monthly_sig0 = pd.read_csv(data_path)

    monthly_sig1 = monthly_sig0.copy()
    monthly_sig1["Year"] = monthly_sig1["Year"].astype(str)
    monthly_sig1["Date"] = pd.to_datetime(
        "01-" + monthly_sig1["Month"] + "-" + monthly_sig1["Year"],
        format="%d-%b-%Y",
    )
    # Relocate Date after Month
    cols = list(monthly_sig1.columns)
    month_idx = cols.index("Month")
    cols.insert(month_idx + 1, cols.pop(cols.index("Date")))
    monthly_sig1 = monthly_sig1[cols]

    # Pivot long: Economically Significant, Other Significant -> Rule.Type, Rule.Number
    value_cols = ["Economically Significant", "Other Significant"]
    id_cols = [c for c in monthly_sig1.columns if c not in value_cols]
    monthly_sig2 = monthly_sig1.melt(
        id_vars=id_cols,
        value_vars=value_cols,
        var_name="Rule.Type",
        value_name="Rule.Number",
    )

    rule_type_order = ["Other Significant", "Economically Significant"]
    monthly_sig2["Rule.Type"] = pd.Categorical(
        monthly_sig2["Rule.Type"],
        categories=rule_type_order,
        ordered=True,
    )

    monthly_sig3 = monthly_sig2[monthly_sig2["Admin"] == presidential_admin].copy()
    return monthly_sig3


def plot_monthly_sig(monthly_sig: pd.DataFrame, presidential_admin: str, ax=None):
    """Build stacked bar chart of significant rules by month."""
    if ax is None:
        fig, ax = plt.subplots(figsize=(12, 9))
    else:
        fig = ax.figure

    # Y-axis limit from total rules per date (same logic as R ydynam(monthly_sig3, 10, 6))
    monthly_totals = monthly_sig.groupby("Date")["Rule.Number"].sum().reset_index()
    y_limit = ydynam(monthly_totals, 10, "Rule.Number")

    palette = {
        "Economically Significant": GW_COLORS["GWblue"],
        "Other Significant": GW_COLORS["GWbuff"],
    }

    sns.histplot(
        data=monthly_sig,
        x="Date",
        weights="Rule.Number",
        hue="Rule.Type",
        multiple="stack",
        palette=palette,
        shrink=0.8,
        edgecolor="white",
        linewidth=0.3,
        bins=len(monthly_sig["Date"].unique()) or 48,
        ax=ax,
    )

    ax.set_ylim(0, y_limit)
    ax.set_xlim(pd.Timestamp("2021-01-01"), pd.Timestamp("2025-01-31"))  # Jan 21 to Jan 25
    ax.set_yticks(range(0, int(y_limit) + 1, 10))
    ax.set_title(
        f"Significant Final Rules Published Each Month\nunder the {presidential_admin} Administration",
        pad=20,
        fontsize=14,
        fontweight="bold",
        ha="center",
    )
    ax.set_ylabel("Number of Rules")
    ax.set_xlabel("")

    ax.xaxis.set_major_formatter(mdates.DateFormatter("%b %y"))
    ax.xaxis.set_major_locator(mdates.MonthLocator(interval=2))
    plt.setp(ax.get_xticklabels(), rotation=65, ha="right")

    ax.spines[["top", "right", "left"]].set_visible(False)
    ax.spines["bottom"].set_color(GW_COLORS["RSCgray"])
    ax.grid(axis="y", color=GW_COLORS["RSCgray"], linestyle="-", linewidth=0.5)
    ax.set_axisbelow(True)

    handles, labels = ax.get_legend_handles_labels()
    ax.legend(
        handles[::-1],
        ["Economically Significant", "Other Significant"],
        loc="lower center",
        bbox_to_anchor=(0.5, -0.18),
        ncol=2,
        frameon=False,
        fontsize=12,
    )

    current_date = datetime.now().strftime("%B %d, %Y")
    caption_text = (
        f"Source: Office of the Federal Register (federalregister.gov)\n\nUpdated {current_date}"
    )
    wrapped_caption = "\n".join(textwrap.wrap(caption_text, width=65))
    ax.text(1, -0.12, wrapped_caption, transform=ax.transAxes, fontsize=10, ha="right", va="top")

    return fig, ax


def main():
    import argparse

    parser = argparse.ArgumentParser(description="Monthly significant rules by administration")
    parser.add_argument(
        "--data",
        default=DATA_FILE,
        help="Path to monthly_significant_rules_by_admin.csv",
    )
    parser.add_argument(
        "--admin",
        default="Biden",
        help="Presidential admin to plot (e.g. Biden, Trump 47)",
    )
    parser.add_argument("--out-dir", default=OUTPUT_DIR, help="Output directory for figures")
    parser.add_argument("--no-save", action="store_true", help="Only show plot, do not save")
    args = parser.parse_args()

    base = Path(__file__).resolve().parent
    data_path = base / args.data if not Path(args.data).is_absolute() else Path(args.data)
    if not data_path.exists():
        raise FileNotFoundError(f"Data file not found: {data_path}")

    monthly_sig = load_and_prepare_data(str(data_path), args.admin)
    if monthly_sig.empty:
        raise ValueError(f"No rows for admin '{args.admin}' in {data_path}")

    fig, ax = plot_monthly_sig(monthly_sig, args.admin)

    # Logo in bottom-left corner
    import matplotlib.image as mpimg
    logo_path = base / "utilis/style/gw_ci_rsc_2cs_pos.png"
    if logo_path.exists():
        logo_img = mpimg.imread(logo_path)
        logo_ax = fig.add_axes([0.02, 0.02, 0.2, 0.08])
        logo_ax.imshow(logo_img)
        logo_ax.axis("off")

    fig.tight_layout()

    if not args.no_save:
        out_dir = base / args.out_dir
        out_dir.mkdir(parents=True, exist_ok=True)
        slug = args.admin.lower().replace(" ", "_")
        name = f"monthly_significant_rules_{slug}"
        fig.savefig(out_dir / f"{name}.pdf", dpi=300, bbox_inches="tight")
        fig.savefig(out_dir / f"{name}.png", dpi=96, bbox_inches="tight", facecolor="white")
        print(f"Saved to {out_dir / name}.pdf and .png")

    plt.show()


if __name__ == "__main__":
    main()
