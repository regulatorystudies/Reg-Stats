# Instructions for Updating Charts

## Directory Structure

This directory contains the R code, processed datasets, and style guides for generating Reg Stats charts. It also stores the output of the resulting data visualizations for posting to the RSC website. The structure of this directory is as follows:

- code/
  - contains the R code for updating Reg Stats charts
  - each chart has a dedicated .Rmd file with code and accompanying descriptions
  - also includes R code and functions with cross-application to multiple files
- data/
  - contains the processed datasets used for creating data visualizations
  - copied from each datasets subfolder in the `root/data/` directory
- output/
  - contains the data visualization outputs of the R code, generally in .pdf format
- style/
  - contains style guide information for Reg Stats charts, fonts, and a file of the RSC logo
  - note: the actual style.R template for ggplot2 is contained in the `code/` folder

## Instructions

When updating Reg Stats charts, you will enerally take the following steps:

1. Set up your environment

    See the instructions within the README in the root of this repository.

1. Open Rmarkdown (.Rmd) file

    Open the relevant rmarkdown file for the chart of interest. For example, for the "Economically Significant Final Rules Published by Presidential Year" chart, open econ_significant_rules.Rmd.

1. Update code (optional)

    Make updates to the R code, as needed. Predominantly, this should be minor revisions, such as ensuring the range of years matches the data. At times, this could encompass debugging if you encounter errors.

1. Run code

    Run the R chunks in the .Rmd file in order, paying attention to the output for each chunk. Follow the markdown text in the .Rmd file as a guide.

1. Push changes to repository

    Running the code will make changes to files that are tracked by git, such as the output files. Push changes to the repository after running the code without error and checking the output. If you are uncertain about your changes, bring your changes to a new branch and open a pull request on GitHub.
