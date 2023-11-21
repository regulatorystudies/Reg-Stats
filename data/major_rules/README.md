# Major Rules Data

## Last Updated

README: 2023-11021

Data: 2022-11-03

## Update Instructions

1. Update data in the spreadsheet `major_rules_by_presidential_year.csv`:

    - Go to GAO’s Congressional Review Act (CRA) [page](https://www.gao.gov/legal/other-legal-work/congressional-review-act).  
    - Scroll down to “Search Database of Rules” and fill in the following fields to get the number of major rules for the specified year:  
      - Rule Type: select “Major”
      - Rule Priority: select “All” for updating “Total Major Rules” or “Significant/Substantive” for updating “Total Major Rules, excluding non-significant”
      - Input “Date Received by GAO” by presidential year, so for example, “02/01/2021” to “01/31/2022” for Presidential Year 2021.
    - Click SEARCH and get the total number of results from “Displaying 1 - 20 of X”.  
    - Add/update the new data into the spreadsheet.  
    - The sum and avg statistics should be automatically updated based on the pre-written formulas, but double check if the data range in the formulas include the new data you just added.  
    - Update the “Date retrieved” at the end of the spreadsheet.  

    Note: the GAO may update the underlying data from the CRA database, so always check whether the data for previous years in the spreadsheet still match the current version of the GAO database and update the data if necessary.

2. Update the graph in the spreadsheet:

    - Change the data range for the graph to include any newly added data  
    - Change the color of bars according to the president’s party:  
        - Democratic: pattern fill, pattern = the 4th pattern on the 2nd row, foreground = GW blue, background = white
        - Republican: solid fill, color = GW red
    - Refer to the latest Reg Stats Style Guide for other style instructions.  

3. Save the CSV (Comma delimited) file.
