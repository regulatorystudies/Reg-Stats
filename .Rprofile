# source("renv/activate.R")
options(repos = c(CRAN = 'https://cloud.r-project.org'))
options(download.file.method = "libcurl")
Sys.setenv(RENV_DOWNLOAD_METHOD = getOption("download.file.method"))

# prints warning if system version of R differs from renv project
# reference: https://stackoverflow.com/questions/46771608/rstudio-project-using-different-version-of-r
r_version <- renv::lockfile_read()$R$Version
if (paste0(version$major, ".", version$minor) != (r_version)) {
  warning(paste0("R version ", version$major, ".", version$minor, " is in use. R version ", r_version, " is required."))
}
