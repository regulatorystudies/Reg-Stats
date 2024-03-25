# import libraries
library(fs)
library(grid)
library(here)
library(png)
library(dplyr)


filter_partial_year <- function(df, year_column = "presidential_year", cutoff_mmdd = "02-01") {
  # only keep most recent presidential year
  today <- Sys.Date()
  this_year <- year(today)
  presidential_year_cutoff <- paste0(year(Sys.Date()), "-", cutoff_mmdd)
  if (today >= presidential_year_cutoff) {
    df <- df %>% filter(subset(select = year_column) != this_year)
  } else {
    df <- df %>% filter(subset(select = year_column) != (this_year - 1))
  }
  return(df)
}

# function to load png file
get_png <- function(filename) {
  
  grid::rasterGrob(png::readPNG(filename), interpolate = TRUE) # adjust logo size dimensions here
  
}

# function for copying all data recursively within a folder
copy_all_data <- function(path, new_path, file_type = "*.csv", recurse_levels = TRUE, report = TRUE, ignore_pattern = "fr_tracking.*[.]csv"){
  
  file_list <- dir_ls(path, recurse = recurse_levels, type = "file", glob = file_type)
  file_list <- path_filter(file_list, regexp = ignore_pattern, invert = TRUE)
  file_copy(file_list, new_path, overwrite = T)
  
  if (report){
    print(paste("Copied", length(file_list), "files."))
    }
}

# function for copying the specified dataset
copy_dataset <- function(file_name, search_path, new_path){
  
  search_files <- dir_ls(search_path, recurse = T, type = "file", glob = paste0("*.", path_ext(file_name)))
  matches <- grep(file_name, search_files, ignore.case = T)
  matched_files <- search_files[matches]
  if (length(matched_files) >= 1) {
    file_copy(matched_files, new_path, overwrite = T)
    print(paste("Copied file: ", file_name))
  } else {
    print("No file found.")
  }
}

# function to copy agency specific files
copy_agency_data <- function(path, new_path, re = ".+by_agency$", recurse_levels = TRUE, report = FALSE){
  
  dir_list <- dir_ls(path, recurse = recurse_levels, type = "directory", regexp = re)
  for (dir in dir_list){
    copy_all_data(dir, new_path, report = report)
  }
}
