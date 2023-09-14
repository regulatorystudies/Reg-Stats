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
sig_fin_rules <- read.csv("/Users/henryhirsch/Henry/Work/2023/Regulatory Studies Center/projects/project 2 (regstats graphs)/sig_fin_rules_pub_by_pres_year/sig_rules_published_presidential_year_(with_party)_032023.csv")

#read logo
get_png <- function(filename) {
  grid::rasterGrob(png::readPNG(filename),interpolate = TRUE)
}

l <- get_png("/Users/henryhirsch/Henry/Git/Reg-Stats-Coding-Project/code/RSC_logo.png")

# rename columns
colnames(sig_fin_rules) <- c("year", "party", "rules", "withdrawn")

# get rid of withdrawn column
sig_fin_rules <- sig_fin_rules[ , c("year", "party", "rules")]

# get rid of bottom three NA rows
sig_fin_rules <- sig_fin_rules[1:(nrow(sig_fin_rules) - 3), ]

