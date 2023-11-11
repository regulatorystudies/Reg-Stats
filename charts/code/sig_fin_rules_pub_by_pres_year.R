# Significant Final Rules Published by Presidential Year

# clean environment
rm(list =ls())

# load packages
library(ggplot2)
library(dplyr)
library(extrafont)
library(tidyverse)
library(png)
library(grid)
library(ggpattern)

# load data
sig_fin_rules <- read.csv("/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/2. Reg Stats Graphs/sig_fin_rules_pub_by_pres_year/sig_rules_published_presidential_year_(with_party)_032023.csv")

#read logo
get_png <- function(filename) {
  grid::rasterGrob(png::readPNG(filename),interpolate = TRUE)
}

l <- get_png("/Users/henryhirsch/Henry/Git/Reg-Stats-Coding-Project/code/RSC_logo.png")

# current date
current_date <- format(Sys.Date(), "%B %d, %Y")

# create caption text
caption_text <- paste("Sources: Office of the Federal Register (federalregister.gov) for
the years starting 2021;\n Office of Information and Regulatory
Affairs (OIRA) (reginfo.gov) for all the prior years.\n\nUpdated:", current_date)

# format wrapping setting for caption text
wrapped_caption <- paste(strwrap(caption_text, width = 95), collapse = "\n")

# rename columns
colnames(sig_fin_rules) <- c("year", "party", "rules", "withdrawn")

# get rid of withdrawn column
sig_fin_rules <- sig_fin_rules[ , c("year", "party", "rules")]

# get rid of bottom three NA rows
sig_fin_rules <- sig_fin_rules[1:(nrow(sig_fin_rules) - 3), ]

# make party factor variable
sig_fin_rules$party <- as.factor(sig_fin_rules$party)

# generate bar1
bar1 <- ggplot(sig_fin_rules, aes(x = year, y = rules, pattern = party)) +
  geom_bar_pattern(stat = "identity", width = 0.5,
                   position = position_dodge(preserve = "single"),
                   pattern_fill = "black", pattern_angle = 45,
                   pattern_density = 0.1, pattern_spacing = 0.025,
                   pattern_key_scale_factor = 0.6, color = "black") +
  scale_fill_manual(values = c("blue", "red")) +
  scale_pattern_manual(values = c(Democratic = "stripe", Republican = "none")) +
  theme_minimal() +
  ggtitle("Significant Final Rules Published by Presidential Year") +
  ylab("Number of Significant Rules") +
  xlab("") +
  scale_y_continuous(breaks = seq(0, max(sig_fin_rules$rules) + 50, by = 50), expand = c(0, 0.05), limits = c(-2, max(sig_fin_rules$rules) + 50)) +
  labs(caption = wrapped_caption) +
  theme(plot.caption = element_text(hjust = 1, margin = margin(t = 0, l = 36, b = 50, unit = "pt"))) +
  annotate(
    geom = "segment",
    x = sig_fin_rules$year,
    xend = sig_fin_rules$year,
    y = 0,
    yend = -2,
    color = "grey"
  ) +
  theme(panel.grid.minor = element_blank()) +
  annotation_custom(l, xmin = -9, xmax = 15, ymin = -70, ymax = -30) + # for logo
  coord_cartesian(clip = "off") +
  theme(
    plot.title = element_text(hjust = 0.5, margin = margin(b = 10, unit = "pt")),
    axis.text.x = element_text(angle = 65, hjust = 1, vjust = 1),
    legend.position = "none",
    panel.grid.major.x = element_blank(),
    panel.grid.major.y = element_line(color = "gray", linetype = "solid"),
    panel.grid.minor = element_blank()
  )

bar1

# save plot as pdf
ggsave("bar2.pdf", plot = bar1, width = 12.5, height = 9, dpi = 300)
