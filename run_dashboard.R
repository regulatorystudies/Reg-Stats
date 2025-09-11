# Script to run the R Shiny dashboard
# Make sure you have all required packages installed

# Check if required packages are installed
required_packages <- c("shiny", "ggplot2", "dplyr", "tidyr", "here", "cowplot",
                      "magick", "ggrepel", "showtext", "fs", "grid", "png")

missing_packages <- required_packages[!required_packages %in% installed.packages()[,"Package"]]

if(length(missing_packages) > 0) {
  cat("Installing missing packages:", paste(missing_packages, collapse = ", "), "\n")
  install.packages(missing_packages)
}

# Run the dashboard
cat("Starting the dashboard...\n")
cat("The dashboard will open in your default web browser.\n")
cat("To stop the dashboard, press Ctrl+C in the console.\n\n")

# Source and run the app
source("app.R")
