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