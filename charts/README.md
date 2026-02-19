# Instructions for Updating Charts

## Directory Structure

This directory contains the R code, processed datasets, and style guides for generating RegStats charts. It also stores the output of the resulting data visualizations for posting to the RSC website. The structure of this directory is as follows:

- code/
  - contains the R code for updating RegStats charts
  - each chart has a dedicated .Rmd file with code and accompanying descriptions
  - also includes R code and functions with cross-application to multiple files
- data/
  - contains the processed datasets used for creating data visualizations
  - copied from each datasets subfolder in the `root/data/` directory
- output/
  - contains the data visualization outputs of the R code, generally in .pdf format
- style/
  - contains style guide information for RegStats charts, fonts, and a file of the RSC logo
  - note: the actual style.R template for ggplot2 is contained in the `code/` folder

## Instructions

When updating RegStats charts, you will generally take the following steps:

1. Set up your R environment

   2. Download requirements  

       Steps:
        - [R](https://cran.rstudio.com/) version 4.5.0 or higher (you need this version of R or higher to activate the environment properly).  
        - The [RStudio](https://posit.co/download/rstudio-desktop/) integrated development environment (IDE).  
        - [renv](https://rstudio.github.io/renv/index.html) (currently using `renv@1.1.4`).  
        - You may also need tools for compiling R on your machine to build R packages from source. See details for [Windows](https://cran.rstudio.com/bin/windows/Rtools/rtools40.html) and [macOS](https://cran.r-project.org/bin/macosx/tools/).  

   3. Clone repository  
  
       Clone the repository from GitHub if it isn't present on your local machine. See the [GitHub Docs](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository) for instructions.  

   4. Open project in RStudio  

       There are several ways to do this. One is clicking on the Reg-Stats.Rproj file in the repo. Another is opening a new Rstudio session, go to the project button at the top right corner, and select open project (or open in new session). When you open the project, RStudio should recognize the project was loaded with a specific version of renv.  

   5. Activate the environment using renv  

       Steps:
         - You will need to activate the renv profile associated with the version of R you're running. If using R 4.5.0 or higher, run the command `renv::activate(profile = "R_450")` to open the profile with the lockfile corresponding to R 4.5.0 or higher packages. See the [renv docs](https://rstudio.github.io/renv/articles/profiles.html) for more information.  
         - Run `renv::restore()` to align your environment with the lockfile.  
         - If you continue to have issues restoring the environment, you may be able to skip this step and install required packages using `utils::install.packages()`.  

6. Fetch changes to respository

    Other users may have made changes to the repository since you last used it. To align the files on your local machine with GitHub, fetch changes to the repository. Then pull any changes to your machine.

7. Open Rmarkdown (.Rmd) file

    Open the relevant rmarkdown file for the chart of interest. For example, for the "Economically Significant Final Rules Published by Presidential Year" chart, open econ_significant_rules.Rmd.

8. Update code (optional)

    Make updates to the R code, as needed. Predominantly, this should be minor revisions, such as ensuring the range of years matches the data. At times, this could encompass debugging if you encounter errors.

9. Run code

    Run the R chunks in the .Rmd file in order, paying attention to the output for each chunk. Follow the markdown text in the .Rmd file as a guide.

10. Push changes to repository

    Running the code will make changes to files that are tracked by git, such as the output files. Push changes to the repository after running the code without error and checking the output. If you are uncertain about your changes, bring your changes to a new branch and open a pull request on GitHub.
