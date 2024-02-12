# import libraries
library(fs)
library(here)

# import local functions
source(here("charts", "code", "local_utils.R"))

# set file location relative to root
i_am("charts/code/refresh_data.R")

# establish location for storing charts data
path_chartdata <- path(here("charts", "data"))
if (!dir_exists(path_chartdata)) {
  # create dir if it doesn't exist
  dir_create(path_chartdata)
  
}

# establish location for data subfolder
path_data <- path(here("data"))
if (dir_exists(path_data)) {
  # copy data files within dir up to 1 level
  copy_all_data(path_data, path_chartdata, recurse_levels=1, report = FALSE)
  
  # copy agency-specific data
  copy_agency_data(path_data, path_chartdata)
  
  print("Copied files.")
  
} else {
  
  print("Data directory was specified incorrectly.")
  
}
