import pandas as pd
from pyprojroot import here
from plotnine import *
from PIL import Image
import matplotlib.font_manager as fm

# colors
GW_COLORS = {
    "GWblue": "#033C5A",
    "GWbuff": "#A69362",
    "lightblue": "#0073AA",
    "lightyellow": "#F8E08E",
    # Secondary colors
    "darkyellow": "#FFC72C",
    "brown": "#A75523",
    "darkgreen": "#008364",
    "lightgreen": "#78BE20",
    "red": "#C9102F",
    "RSCgray": "#E0E0E0",
    "RSCdarkgray": "#bdbdbd",
    "fill": "#B2DDF4"
}

# logo
logo_path = here("dashboard-two/utilis/style/gw_ci_rsc_2cs_pos.png")
logo = Image.open(logo_path)

# font
font_path = str(here("dashboard-two/utilis/style/a-avenir-next-lt-pro.otf"))
fm.fontManager.addfont(font_path)
custom_font = fm.FontProperties(fname=font_path).get_name()

theme_RSC = theme_minimal(base_family=custom_font) + \
    theme(
        plot_title=element_text(ha='center', va='bottom', margin={'b': 25}, size=20),
        legend_position="none",
        panel_grid_major_x=element_blank(),
        axis_text_x=element_text(angle=65, ha='right', va='top', size=12),
        axis_title_x=element_text(size=12, margin={'t': 12}),
        axis_ticks_major_x=element_line(color=GW_COLORS["RSCgray"]),
        axis_text_y=element_text(size=12),
        axis_title_y=element_text(size=12, angle=90, margin={'r': 12}),
        panel_grid_major_y=element_line(color=GW_COLORS["RSCgray"], linetype="solid", size=0.5),
        panel_grid_minor=element_blank(),
        plot_caption=element_text(ha='right', va='bottom', margin={'t': 10}, size=11),
        plot_margin=50 # Plotnine uses a single value or a dictionary for margins
    )