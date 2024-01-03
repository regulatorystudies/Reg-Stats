# load packages ####
  library(here)
  library(showtext)
  library(tidyverse)
  library(cowplot)

# assigning colors to objects ####
  
  # I got these hex codes from the GW Web Accessible Color Guidelines

  # core primary colors
    GWblue <- "#033C5A"
    GWbuff <- "#A69362"
    lightblue <- "#0073AA"
    lightyellow <- "#F8E08E"
    
  # secondary colors
    darkyellow <- "#FFC72C"
    brown <- "#A75523"
    darkgreen <- "#008364"
    lightgreen <- "#78BE20"
    red <- "#C9102F"
    
    RSCgray <- "#E0E0E0"
      # saw we used this gray a few times for grid lines, so added it as a color!
    fill <- "#B2DDF4"
      # this is the color used in the striping on patterned charts
    
# logo ####
   logo <- image_read(here("charts", "style", "gw_ci_rsc_2cs_pos.png"))
    
# font ####
  font_add("avenir_lt_pro", here("charts", "style", "a-avenir-next-lt-pro.otf"))
  showtext_auto()
    # according to documentation, showtext_auto needed for this to work properly 
  
# custom theme for RSC Reg Stats plots
  theme_RSC <- theme_minimal() +
    theme(
      plot.title = element_text(hjust = 0.5, vjust = 0, margin = margin(b = 10, unit = "pt"), size = 20),
      legend.position = "none",
      panel.grid.major.x = element_blank(),
      axis.text.x = element_text(angle = 65, hjust = 0.5, vjust = 1, size = 12),
      axis.title.x = element_text(size = 12, angle = 0, vjust = 0.5, hjust = 0.5, margin = margin(t = 10)),
      axis.ticks.x = element_line(color = RSCgray),
      axis.text.y = element_text(size = 12),
      axis.title.y = element_text(size = 12, angle = 90, vjust = 0.5, hjust = 0.5, margin = margin(r = 10)),
      panel.grid.major.y = element_line(color = RSCgray, linetype = "solid", linewidth = 0.50),
      panel.grid.minor = element_blank(),
      text = element_text(family = "avenir_lt_pro"),
      plot.caption = element_text(hjust = 1, vjust = 0, margin = margin(t = 10, l = 6, unit = "pt"), size = 11),
      plot.margin = margin(50, 50, 50, 50)
    )
  
  # thank you to Yaxin for developing this custom theme!
  
