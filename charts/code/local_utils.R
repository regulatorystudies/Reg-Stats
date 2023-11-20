# import libraries
library(fs)
library(grid)
library(here)
library(png)

# function to load png file
get_png <- function(filename) {
  
  grid::rasterGrob(png::readPNG(filename), interpolate = TRUE) # adjust logo size dimensions here
  
}

# function for copying all data recursively within a folder
copy_all_data <- function(path, new_path, file_type = "*.csv"){
  
  file_list <- dir_ls(path, recurse = T, type = "file", glob = file_type)
  file_copy(file_list, new_path, overwrite = T)
  print(paste("Copied", length(file_list), "files"))
  
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
