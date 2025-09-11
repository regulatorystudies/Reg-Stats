# Install required packages for the dashboard
# Run this script first if you encounter package installation issues

# List of required packages
required_packages <- c(
  "shiny",
  "ggplot2",
  "dplyr",
  "tidyr",
  "here",
  "cowplot",
  "magick",
  "ggrepel",
  "showtext",
  "fs",
  "grid",
  "png"
)

# Function to install packages if not already installed
install_if_missing <- function(packages) {
  for (pkg in packages) {
    if (!require(pkg, character.only = TRUE, quietly = TRUE)) {
      cat("Installing package:", pkg, "\n")
      install.packages(pkg, repos = "https://cran.r-project.org")
    } else {
      cat("Package", pkg, "is already installed\n")
    }
  }
}

# Install missing packages
cat("Checking and installing required packages...\n")
install_if_missing(required_packages)

cat("\nAll required packages are now installed!\n")
cat("You can now run the dashboard using: source('app.R')\n")
