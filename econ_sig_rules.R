# Economically Significant Final Rules Published by Presidential Year

# clean environment
rm(list =ls())

# load packages
library(ggplot2)
library(dplyr)

# import data from github
# Load dataset from GitHub
url_file <- "https://raw.githubusercontent.com/yqz5514/Reg-Stats-Coding-Project/main/es_rules_published_presidential_year_2023-03-28.csv"
sig <- read.csv(url(url_file))

# import data from computer (this pathname must be manually updated, right click on file, hold option, and click copy "" as pathname, paste into read.csv("") below this text)
# sig <- read.csv("/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/econ_sig_rules/es_rules_published_presidential_year_2023-03-28.csv")

# structure of data frame 
str(sig)

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

# generate bar graph
bar <- ggplot(sig, aes(x = year, y = econ, fill = party)) + 
  geom_bar(stat = "identity", width= 0.5, color = "black") +
  scale_fill_manual(values = c("blue", "red")) +
  ggtitle("Economically Significant Final Rules Published by Presidential Year") +
  ylab("Number of Rules") +
  xlab("") +
  theme(axis.text.x = element_text(angle = 45, hjust = 1, vjust = 1),
        legend.position = "none")
bar

