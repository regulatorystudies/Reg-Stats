# Test script to verify the dashboard components work
cat("Testing dashboard components...\n")

# Test 1: Load libraries
cat("1. Testing library loading...\n")
tryCatch({
  library(shiny)
  library(ggplot2)
  library(dplyr)
  library(tidyr)
  library(here)
  library(cowplot)
  library(magick)
  library(ggrepel)
  library(showtext)
  library(fs)
  library(grid)
  library(png)
  cat("   ✓ All libraries loaded successfully\n")
}, error = function(e) {
  cat("   ✗ Error loading libraries:", e$message, "\n")
})

# Test 2: Source local files
cat("2. Testing local file sourcing...\n")
tryCatch({
  source(here("charts", "code", "local_utils.R"))
  source(here("charts", "code", "style.R"))
  cat("   ✓ Local files sourced successfully\n")
}, error = function(e) {
  cat("   ✗ Error sourcing local files:", e$message, "\n")
})

# Test 3: Load data
cat("3. Testing data loading...\n")
tryCatch({
  data_file <- "cumulative_econ_significant_rules_by_presidential_month.csv"
  copy_dataset(data_file, here("data"), here("charts", "data"))
  cum_sig <- read.csv(here("charts", "data", data_file))
  cat("   ✓ Data loaded successfully\n")
  cat("   ✓ Data dimensions:", dim(cum_sig), "\n")
}, error = function(e) {
  cat("   ✗ Error loading data:", e$message, "\n")
})

# Test 4: Check logo file
cat("4. Testing logo file...\n")
logo_path <- here("charts", "style", "gw_ci_rsc_2cs_pos.png")
if (file.exists(logo_path)) {
  cat("   ✓ Logo file found\n")
} else {
  cat("   ✗ Logo file not found at:", logo_path, "\n")
}

# Test 5: Check font file
cat("5. Testing font file...\n")
font_path <- here("charts", "style", "a-avenir-next-lt-pro.otf")
if (file.exists(font_path)) {
  cat("   ✓ Font file found\n")
} else {
  cat("   ✗ Font file not found at:", font_path, "\n")
}

cat("\nTest completed!\n")
cat("If all tests passed, you can run the dashboard with: source('app.R')\n")
