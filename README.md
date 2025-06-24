# Reg-Stats

This repository hosts the code to collect data and generate charts for [Reg Stats](https://regulatorystudies.columbian.gwu.edu/reg-stats).

## Repository Structure

The project root contains several files, including an RStudio project (.Rproj), an .Rprofile configuration file, and a renv.lock file (the lockfile establishes the R environment packages used).

In addition to these files, there are several directories:

- charts/
  - contains the R code for updating Reg Stats charts, chart style information, and data visualization output
  - see this sub-directory's README for more details
- data/
  - contains sub-directories for each Reg Stats chart and dataset
  - each sub-directory contains instructions for updating each Reg Stats dataset (either automatically or manually), the Python code for collecting the data (when automated), and the data for each dataset
  - see the README within each sub-directory for more details
- renv/
  - contains the profiles associated with the project lockfiles; this is where package binaries will be installed on your local machine

The structure of the repository is depicted below:

![Map of Reg Stats Repository](charts/style/repo_map.png) 

## Instructions for Updating Data and Charts

For updating the data or charts, follow the instructions in each subdirectory. The following list provides a summary of
files and output corresponding to each data series in Reg Stats.

After setting up the required Python or R environment (see instructions in each subdirectory), run the Python or R code
in the "File" column, and an output dataset or chart in the "Output" column will be generated.

<details>
  <summary><strong>Economically Significant Final Rules Published by Presidential Year</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
    <tr>
      <td rowspan="2">Annually:<br/>1st week of Feb</td>
      <td>Data</td>
      <td><code>data/es_rules/</code></td>
      <td><code>update_es_rules.py</code></td>
      <td><code>econ_significant_rules_by_presidential_year.csv</code></td>
    </tr>
    <tr>
      <td>Chart</td>
      <td><code>charts/</code></td>
      <td><code>code/econ_significant_rules.Rmd</code></td>
      <td>
        <code>output/econ_significant_rules_published_by_presidential_year.pdf</code><br/>
        <code>output/econ_significant_rules_published_by_presidential_year.png</code>
      </td>
    </tr>
  </table>
</details>


<details>
  <summary><strong>Economically Significant Final Rules by Agency</strong></summary>
  <br/>
  <table>
    <tr>
	  <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Annually:<br/>1st week of Feb</td>
          <td>Data</td>
          <td>`data/es_rules/`</td>
          <td>`by_agency/update_agency_es_rules.py`</td>
          <td>`agency_econ_significant_rules_by_presidential_year.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/agency_econ_significant_rules_by_presidential_year.Rmd`</td>
          <td>`output/by_agency/[agency]_econ_significant_rules_by_presidential_year.pdf`<br/>`output/by_agency/[agency]_econ_significant_rules_by_presidential_year.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Monthly Significant Final Rules under the Biden Administration</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Monthly:<br/>1st week of month</td>
          <td>Data</td>
          <td>`data/monthly_es_rules/`</td>
          <td>`update_monthly_sig_rules_by_admin.py`</td>
          <td>`monthly_significant_rules_by_admin.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/monthly_sig_rules_by_admin.Rmd`</td>
          <td>`output/monthly_significant_rules_biden.pdf`<br/>`output/monthly_significant_rules_biden.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Cumulative Economically Significant Final Rules by Administration</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Monthly:<br/>1st week of month</td>
          <td>Data</td>
          <td>`data/cumulative_es_rules/`</td>
          <td>`update_cumulative_es_rules.py`</td>
          <td>`cumulative_econ_significant_rules_by_presidential_month.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/cumulative_econ_significant_rules_by_admin.Rmd`</td>
          <td>`output/cumulative_econ_significant_rules_by_presidential_month.pdf`<br/>`output/cumulative_econ_significant_rules_by_presidential_month.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Cumulative Economically Significant Final Rules Published by Administration in First Year</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Monthly:<br/>1st week of month</td>
          <td>Data</td>
          <td>`data/cumulative_es_rules/`</td>
          <td>`update_cumulative_es_rules.py`</td>
          <td>`cumulative_econ_significant_rules_by_presidential_month.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/cumulative_econ_significant_rules_first_year.Rmd`</td>
          <td>`output/cumulative_econ_significant_rules_by_first_year.pdf`<br/>`output/cumulative_econ_significant_rules_by_first_year.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Significant Final Rules Published by Presidential Year</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Annually:<br/>1st week of Feb</td>
          <td>Data</td>
          <td>`data/sig_rules/`</td>
          <td>`update_sig_rules.py`</td>
          <td>`significant_rules_by_presidential_year.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/significant_rules.Rmd`</td>
          <td>`output/significant_rules_by_presidential_year.pdf`<br/>`output/significant_rules_by_presidential_year.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Major Final Rules Published by Presidential Year</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Annually:<br/>1st week of Feb</td>
          <td>Data</td>
          <td>`data/major_rules/`</td>
          <td>`cradb/scraper.py`<br/>`cradb/process_data.py`</td>
          <td>`major_rules_by_presidential_year.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/major_rules.Rmd`</td>
          <td>`output/major_rules_by_presidential_year.pdf`<br/>`output/major_rules_by_presidential_year.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Rules Published in the Federal Register by Presidential Year</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Annually:<br/>1st week of Feb</td>
          <td>Data</td>
          <td>`data/fr_rules/`</td>
          <td>`code/fr_rules_by_presidential_year.py`</td>
          <td>`federal_register_rules_by_presidential_year.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/federal_register_rules.Rmd`</td>
          <td>`output/federal_register_rules_by_presidential_year.pdf`<br/>`output/federal_register_rules_by_presidential_year.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Rules Published in the Federal Register by Agency</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Annually:<br/>1st week of Feb</td>
          <td>Data</td>
          <td>`data/fr_rules/`</td>
          <td>`code/agency_fr_rules_by_presidential_year.py`</td>
          <td>`agency_federal_register_rules_by_presidential_year.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/agency_federal_register_rules.Rmd`</td>
          <td>`output/by_agency/[agency]_federal_register_rules_by_presidential_year.pdf`<br/>`output/by_agency/[agency]_federal_register_rules_by_presidential_year.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Total Pages Published in the Code of Federal Regulations</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Annually:<br/>first few months of calendar year</td>
          <td>Data</td>
          <td>`data/cfr_pages/`</td>
          <td>`update_cfr_pages.py`</td>
          <td>`cfr_pages_by_calendar_year.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/cfr_pages.Rmd`</td>
          <td>`output/cfr_pages_by_calendar_year.pdf`<br/>`output/cfr_pages_by_calendar_year.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Total Pages Published in the Federal Register</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Annually:<br/>beginning of calendar year</td>
          <td>Data</td>
          <td>`data/fr_pages/`</td>
          <td>`update_fr_pages.py`</td>
          <td>`federal_register_pages_by_calendar_year.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/federal_register_pages.Rmd`</td>
          <td>`output/federal_register_pages_by_calendar_year.pdf`<br/>`output/federal_register_pages_by_calendar_year.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Active Actions Published in the Unified Agenda</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Biannually:<br/>spring (May/Jun) and fall (Nov/Dec)</td>
          <td>Data</td>
          <td>`data/ua_actions/`</td>
          <td>`update_ua_actions.py`</td>
          <td>`active_actions_by_unified_agenda.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/unified_agenda_active_actions.Rmd`</td>
          <td>`output/active_actions_by_unified_agenda.pdf`<br/>`output/active_actions_by_unified_agenda.png`</td>
        </tr>
      </table>
</details>


<details>
  <summary><strong>Word Count of Public Laws by Congress</strong></summary>
  <br/>
  <table>
    <tr>
      <th>Update</th>
      <th>Task</th>
      <th>Location</th>
      <th>File</th>
      <th>Output</th>
    </tr>
        <tr>
      	  <td rowspan="2">Biennially:<br/>2nd week of Jan of odd years</td>
          <td>Data</td>
          <td>`data/public_laws/`</td>
          <td>`collect_public_law_data.py`</td>
          <td>`public_law_word_count_by_congress.csv`</td>
        </tr>
        <tr>
          <td>Chart</td>
          <td>`charts/`</td>
          <td>`code/public_law_word_count_by_congress.Rmd`</td>
          <td>`output/public_law_word_count_by_congress.pdf`<br/>`output/public_law_word_count_by_congress.png`</td>
        </tr>
      </table>
</details>
