# Economically Significant Final Rules Published by Presidential Year

# clean environment
rm(list =ls())

# load packages
library(ggplot2)
library(dplyr)
library(extrafont)

# get custom font
# font_import(path='/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/GW Logos and Fonts/GW Fonts')

# load data set from GitHub
url_file <- "https://raw.githubusercontent.com/yqz5514/Reg-Stats-Coding-Project/main/es_rules_published_presidential_year_2023-03-28.csv"
sig <- read.csv(url(url_file))

# import data from computer (this pathname must be manually updated, right click on file, hold option, and click copy "" as pathname, paste into read.csv("") below this text)
# sig <- read.csv("/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/econ_sig_rules/es_rules_published_presidential_year_2023-03-28.csv")

# modify column names
colnames(sig) <- c("year", "econ", "excluding.withdrawn")

# delete excluding.withdrawn column
sig$excluding.withdrawn <- NULL

# remove rows with NA values
sig <- sig[complete.cases(sig), ]

# create party column (this must be manually updated with years of Democrat Presidents)
sig$party <- ifelse(sig$year %in% c(1993:2000, 2009:2016, 2021:2024), "dem", "rep")

# make party factor variable
sig$party <- as.factor(sig$party)

# generate bar1 graph
bar1 <- ggplot(sig, aes(x = year, y = econ, fill = party)) +
  geom_bar(stat = "identity", width = 0.5, color = "black") +
  scale_fill_manual(values = c("blue", "red")) +
  theme_minimal() +
  ggtitle("Economically Significant Final Rules Published by Presidential Year") +
  ylab("Number of Rules") +
  xlab("") +
  theme(
    axis.text.x = element_text(angle = 45, hjust = 1, vjust = 1),
    legend.position = "none",
    panel.grid.major.x = element_blank(),
    panel.grid.major.y = element_line(color = "gray", linetype = "solid"),
    panel.grid.minor = element_blank()
  )
bar1

y_lines <- c(0, 25, 50, 75, 100, 125, 150)

num_lines <- 4
increment <- max(sig$econ) / (num_lines + 1)
additional_lines <- seq(increment, max(sig$econ), by = increment)

bar2 <- bar1 + scale_y_continuous(breaks = c(y_lines))
bar2

current_date <- format(Sys.Date(), "%B %d, %Y")

caption <- paste("Sources: Office of the Federal Register (federalregister.gov) for the years starting 2021;\nOffice of Information and Regulatory Affairs (OIRA) (reginfo.gov) for all prior years.\n\nUpdated:", current_date)

bar3 <- bar2 + labs(caption = caption) +
  theme(plot.caption = element_text(hjust = 1, margin = margin(t = 0, unit = "pt")))

bar3


# test





