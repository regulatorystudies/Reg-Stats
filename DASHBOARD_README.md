# R Shiny Dashboard: Cumulative Economically Significant Final Rules by Administration

This R Shiny dashboard provides an interactive visualization of cumulative economically significant final rules published by presidential administrations over time.

## Features

- **Interactive Plot**: Line chart showing cumulative rules by month for each administration
- **President Selection**: Checkbox controls to show/hide specific presidents
- **Visual Controls**: Toggle first term line (48 months) and zero line
- **Download Functionality**: Download the current plot as PNG
- **Logo Integration**: RSC logo included in the plot
- **Responsive Design**: Clean layout with controls on the left and plot on the right

## How to Run

### Option 1: Using the run script (Recommended)
```r
source("run_dashboard.R")
```

### Option 2: Direct execution
```r
source("app.R")
```

### Option 3: Using RStudio
1. Open `app.R` in RStudio
2. Click the "Run App" button in the top-right corner of the script editor

## Dashboard Controls

### Left Sidebar Controls:
- **Select Presidents to Display**: Check/uncheck presidents to show/hide their data
- **Show First Term Line**: Toggle the vertical dashed line at 48 months
- **Show Zero Line**: Toggle the horizontal line at zero
- **Download Plot**: Download the current visualization as PNG

### Data Information:
- Displays data sources and last update date
- Shows explanatory note about month 0 data

## Data Sources

- **Biden administration and subsequent**: Office of the Federal Register (federalregister.gov)
- **Prior administrations**: Office of Information and Regulatory Affairs (reginfo.gov)

## Technical Requirements

### Required R Packages:
- shiny
- ggplot2
- dplyr
- tidyr
- here
- cowplot
- magick
- ggrepel
- showtext
- fs
- grid
- png

### File Structure:
The dashboard expects the following file structure:
```
Reg-Stats/
├── app.R
├── run_dashboard.R
├── charts/
│   ├── code/
│   │   ├── local_utils.R
│   │   └── style.R
│   ├── data/
│   │   └── cumulative_econ_significant_rules_by_presidential_month.csv
│   └── style/
│       ├── gw_ci_rsc_2cs_pos.png (logo)
│       └── a-avenir-next-lt-pro.otf (font)
└── data/
    └── [data folders with source CSV files]
```

## Troubleshooting

### Common Issues:

1. **Missing packages**: Run `source("run_dashboard.R")` to automatically install missing packages

2. **Font issues**: Make sure the Avenir font file is in `charts/style/`

3. **Logo not displaying**: Ensure the logo file `gw_ci_rsc_2cs_pos.png` is in `charts/style/`

4. **Data not loading**: Check that the CSV file exists in the data directory

### Error Messages:
- If you see "Please select at least one president to display", select at least one president from the checkboxes
- If the plot appears empty, check that the data file is properly loaded

## Customization

The dashboard can be customized by modifying:
- Colors in `style.R`
- Data processing logic in `app.R`
- UI layout and controls in the `ui` section
- Plot aesthetics in the `server` section

## Notes

- The dashboard automatically updates the "Updated" date to the current date
- All presidents are selected by default when the dashboard loads
- The plot maintains the same styling and appearance as the original R Markdown version
- Download functionality preserves the logo and all visual elements
