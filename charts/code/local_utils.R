# import libraries
library(here)
library(fs)
library(grid)
library(png)

# function to load png file
get_png <- function(filename) {
  
  grid::rasterGrob(png::readPNG(filename), interpolate = TRUE) # adjust logo size dimensions here
  
}

# function for copying all data recursively within a folder
copy_all_data <- function(path, new_path, file_type = "*.csv"){
  
  file_list <- dir_ls(path, recurse = T, type = "file", glob = file_type)
  file_copy(file_list, new_path, overwrite = T)
  return(paste("Copied", length(file_list), "files"))
  
}

# function for copying the specified dataset
copy_dataset <- function(file_name, search_path, new_path){
  
  search_file <- dir_ls(search_path, recurse = T, type = "file", glob = path_ext(file_name))
  if (length(search_file) == 1) {
    file_copy(search_file, new_path, overwrite = T)
    return(paste("Copied file: ", path_file(path)))
  } else {
    print("No file found.")
  }
}
