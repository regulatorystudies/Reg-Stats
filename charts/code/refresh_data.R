# import libraries
library(here)
library(fs)

source(here("charts", "code", "local_utils.R"))

# set file location relative to root
i_am("charts/code/refresh_data.R")

# establish location for storing charts data
path_chartdata <- path(here("charts", "data"))
if (!dir_exists(path_chartdata)) {
  
  dir_create(path_chartdata)
  
}

# establish location for data subfolder
path_data <- path(here("data"))
if (dir_exists(path_data)) {
  
  copy_all_data(path_data, path_chartdata)
  
} else {
  
  print("Data directory was specified incorrectly.")
  
}
