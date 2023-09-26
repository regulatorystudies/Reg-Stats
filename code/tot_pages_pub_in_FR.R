# Total Pages Published in the Federal Register

# clean environment
rm(list = ls())

# load packages
library(ggplot2)
library(dplyr)
library(extrafont)
library(tidyverse)
library(png)
library(grid)
library(ggpattern)
library(scales)

# # load data
tot_pages <- read.csv("/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/tot_pages_pub_in_FR/totalpagesfederalregister_03272023.csv", skip = 4)

#read logo
get_png <- function(filename) {
  grid::rasterGrob(png::readPNG(filename),interpolate = TRUE)
}

l <- get_png("/Users/henryhirsch/Henry/Git/Reg-Stats-Coding-Project/code/RSC_logo.png")

# current date
current_date <- format(Sys.Date(), "%B %d, %Y")

# create caption text
caption_text <- paste("Source: Federal Register Statistics\n\nUpdated:", current_date)

# get rid of bottom 11 rows
tot_pages <- tot_pages[1:(nrow(tot_pages) - 11), ]

# remove blank first row
tot_pages <- tot_pages[-c(1), ]

# remove all columns except for Year and TOTAL
tot_pages <- tot_pages[, c("Year", "TOTAL")]

# change column names
colnames(tot_pages) <- c("year", "total")

# make total an integer variable (remove commas and then convert)
tot_pages$total <- as.integer(gsub(",", "", tot_pages$total))

# generate bar1
bar1 <- ggplot(tot_pages, aes(x = year, y = total)) +
  geom_bar(stat = "identity", fill = "#033C5A") +
  theme_minimal() +
  ggtitle("Total Pages Published in the Federal Register") +
  ylab("Number of Pages") +
  xlab("") +
  scale_y_continuous(breaks = seq(0, max(tot_pages$total) + 10000, by = 10000), expand = c(0, 0),
                     limits = c(-2, max(tot_pages$total) + 10000),
                     labels = function(x) ifelse(x == 0, "0", scales::label_number(suffix = "k", scale = 1e-3)(x))
  ) +
  scale_x_discrete(breaks = seq(min(tot_pages$year), max(tot_pages$year), by = 2)) + 
  labs(caption = caption_text) +
  theme(
    plot.caption = element_text(hjust = 1, margin = margin(t = 0, l = 36, b = 50, unit = "pt")),
    plot.title = element_text(hjust = 0.5, margin = margin(b = 10, unit = "pt")),
    axis.text.x = element_text(angle = 65, hjust = 1, vjust = 1),
    legend.position = "none",
    panel.grid.major.y = element_line(color = "lightgray", linetype = "solid"),
    panel.grid.minor.y = element_blank(),
    panel.grid.major.x = element_blank(),
    panel.grid.minor.x = element_blank()
  )

bar1

# save plot as pdf
ggsave("bar3.pdf", plot = bar1, width = 12.5, height = 9, dpi = 300)






