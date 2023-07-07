# Economically Significant Final Rules Published by Presidential Year

# clean environment
rm(list =ls())

# load packages
library(ggplot2)
library(dplyr)
library(extrafont)
library(grid)
library(ggnewscale)
library(stringr)

# get custom font
# font_import(path='/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/GW Logos and Fonts/GW Fonts')

# load data set from GitHub
url_file <- "https://raw.githubusercontent.com/yqz5514/Reg-Stats-Coding-Project/main/data/es_rules_published_presidential_year_2023-03-28.csv"
sig <- read.csv(url(url_file))

# import data from computer (this pathname must be manually updated, right click on file, hold option, and click copy "" as pathname, paste into read.csv("") below this text)
# sig <- read.csv("/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/econ_sig_rules/es_rules_published_presidential_year_2023-03-28.csv")

# modify column names
colnames(sig) <- c("year", "econ", "excluding.withdrawn")

# delete excluding.withdrawn column
sig$excluding.withdrawn <- NULL

# remove rows with NA values
sig <- sig[complete.cases(sig), ]

# create party column ("demyears" must be manually updated with years of Democrat Presidents)
demyears <- c(1993:2000, 2009:2016, 2021:2024)
sig$party <- ifelse(sig$year %in% demyears, "dem", "rep")

# make party factor variable
sig$party <- as.factor(sig$party)

# generate bar1
bar1 <- ggplot(sig, aes(x = year, y = econ, fill = party)) +
  geom_bar(stat = "identity", width = 0.5) +
  scale_fill_manual(values = c("blue", "red")) +
  theme_minimal() +
  ggtitle("Economically Significant Final Rules Published \nby Presidential Year") +
  ylab("Number of Rules") +
  xlab("") +
  scale_y_continuous(expand = c(0, 0)) +
  theme(
    plot.title = element_text(hjust = 0.5, margin = margin(b = 10, unit = "pt")),
    axis.text.x = element_text(angle = 45, hjust = 1, vjust = 1),
    legend.position = "none",
    panel.grid.major.x = element_blank(),
    panel.grid.major.y = element_line(color = "gray", linetype = "solid"),
    panel.grid.minor = element_blank()
  )

bar1

num_lines <- 4
increment <- 150 / (num_lines + 1)
additional_lines <- seq(increment, max(sig$econ), by = increment)

bar2 <- bar1 +
  scale_y_continuous(breaks = seq(0, max(sig$econ) + 25, by = 25), expand = c(0, 0.05), limits = c(0, max(sig$econ) + 25)) +
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
  theme(plot.caption = element_text(hjust = 1, margin = margin(t = 0, l = 6, unit = "pt")))

bar3

# add tick marks
 bar3 +
   annotate(
     geom = "segment",
     x = seq(0.5, length(sig$year) + 0.5, by = 1),
     xend = seq(0.5, length(sig$year) + 0.5, by = 1),
     y = 0,
     yend = -2,
     color = "grey"
  )
 