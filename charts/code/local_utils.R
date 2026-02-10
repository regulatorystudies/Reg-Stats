# import libraries
library(fs)
library(grid)
library(here)
library(png)
library(dplyr)
library(ggrepel)

# function to load png file
get_png <- function(filename) {
  
  grid::rasterGrob(png::readPNG(filename), interpolate = TRUE) # adjust logo size dimensions here
  
}

# function for copying all data recursively within a folder
def get_png(filename):
    img = Image.open(filename)
    return offsetbox.OffsetBox(img, zoom=0.1)

def copy_all_data(path, new_path, file_type = "*.csv", ignore_patter=f"fr_tracking", report=True):
    file_list = glob.glob(os.path.join(path, "**", file_tyoe), recursive=True)

    regex = re.compile

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

# function for dynamic breaks on x-axis
xbreaks <- function(dataset, column_num, denom){
  round(seq(min(dataset[column_num]), max(dataset[column_num]),
            by = (max(dataset[column_num])-min(dataset[column_num]))/denom),0)
}

# function for dynamic y-axis
ydynam <- function(dataset, interval, col_number){
  upper <- case_when(
    interval == 1 ~ max(dataset[col_number]) + interval,
    interval != 1 ~ ceiling(max(dataset[col_number])/interval)*interval)
  return(upper)
}

# custom RSC wrapper function for geom_label_repel(), (sets default font to avenir_lt_pro)
geom_label_repel_RSC <- function(...) {
  geom_label_repel(..., family = "avenir_lt_pro")
}

# custom RSC wrapper function for annotate(), (sets default font to avenir_lt_pro)
annotate_RSC <- function(...) {
  annotate(..., family = "avenir_lt_pro")
}
