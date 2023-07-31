# Economically Significant Final Rules Published by Presidential Year

# clean environment
rm(list =ls())

# remotes::install_github("coolbutuseless/ggpattern")
# ^ use this to install ggpattern package

# load packages
library(ggplot2)
library(dplyr)
library(extrafont)
library(tidyverse)
library(png)
library(grid)
library(ggpattern)

# get custom font
# font_import(path='/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/GW Logos and Fonts/GW Fonts')

# load data set from GitHub
url_file <- "https://raw.githubusercontent.com/yqz5514/Reg-Stats-Coding-Project/main/data/ES_rules_published_presidential_year_(with_party)_2023-03-28.csv"
sig <- read.csv(url(url_file))

# modify column names
colnames(sig) <- c("year", "party", "econ", "excluding.withdrawn")

# delete excluding.withdrawn column
sig$excluding.withdrawn <- NULL

# remove rows with NA values
sig <- sig[complete.cases(sig), ]

# make party factor variable
sig$party <- as.factor(sig$party)

#read logo
get_png <- function(filename) {
  grid::rasterGrob(png::readPNG(filename),interpolate = TRUE)
}

l <- get_png("/Users/henryhirsch/Henry/Git/Reg-Stats-Coding-Project/code/RSC_logo.png")




# generate bar1
bar1 <- ggplot(sig, aes(x = year, y = econ, pattern = party)) +
  geom_bar_pattern(stat = "identity", width = 0.5,
                   position = position_dodge(preserve = "single"),
                   pattern_fill = "black", pattern_angle = 45,
                   pattern_density = 0.1, pattern_spacing = 0.025,
                   pattern_key_scale_factor = 0.6, color = "black") +
  scale_fill_manual(values = c("blue", "red")) +
  scale_pattern_manual(values = c(Democratic = "stripe", Republican = "none")) +
  theme_minimal() +
  ggtitle("Economically Significant Final Rules Published \nby Presidential Year") +
  ylab("Number of Rules") +
  xlab("") +
  scale_y_continuous(expand = c(0, 0)) +
  annotation_custom(l, xmin = -9, xmax = 20, ymin = -10, ymax = -30) + # for logo
  coord_cartesian(clip = "off") +
  theme(
    plot.title = element_text(hjust = 0.5, margin = margin(b = 10, unit = "pt")),
    axis.text.x = element_text(angle = 45, hjust = 1, vjust = 1),
    legend.position = "none",
    panel.grid.major.x = element_blank(),
    panel.grid.major.y = element_line(color = "gray", linetype = "solid"),
    panel.grid.minor = element_blank()
  )

bar1


# generate bar2
bar2 <- bar1 +
  scale_y_continuous(breaks = seq(0, max(sig$econ) + 25, by = 25), expand = c(0, 0.05), limits = c(-2, max(sig$econ) + 25)) +
  theme(
    axis.text.x = element_text(angle = 45, hjust = 1, vjust = 1),
    panel.grid.major.x = element_blank(),
    panel.grid.major.y = element_line(color = "gray", linetype = "solid"),
    panel.grid.minor = element_blank()
  )

bar2

# generate bar3
current_date <- format(Sys.Date(), "%B %d, %Y")

caption_text <- paste("Sources: Office of the Federal Register (federalregister.gov) for the years starting 2021;\n       Office of Information and Regulatory Affairs (OIRA) (reginfo.gov) for all prior years.\n\nUpdated:", current_date)

bar3 <- bar2 +
  labs(caption = caption_text) +
  theme(plot.caption = element_text(hjust = 1, margin = margin(t = 0, l = 6, unit = "pt"))) +
  annotate(
    geom = "segment",
    x = sig$year,
    xend = sig$year,
    y = 0,
    yend = -2,
    color = "grey"
  )

bar3

# save plot as pdf
ggsave("plot1.pdf", plot = bar3, width = 12.5, height = 9, dpi = 300)



