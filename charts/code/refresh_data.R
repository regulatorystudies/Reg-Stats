library(here)
library(fs)

i_am("charts/code/refresh_data.R")

copy_data <- function(path, new_path){
  
  file_list <- dir_ls(path, recurse = T, type = "file", glob = "*.csv")
  file_copy(file_list, new_path, overwrite = T)
  return(paste("Copied", length(file_list), "files"))
  
}

path_chartdata <- path(here("charts", "data"))

if (!dir_exists(path_chartdata)) {
  
  dir_create(path_chartdata)
  
}

path_data <- path(here("data"))

if (dir_exists(path_data)) {
  
  copy_data(path_data, path_chartdata)
  
} else {
  
  print("Data directory was specified incorrectly.")
  
}
