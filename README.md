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
          <td><code>data/es_rules/</code></td>
          <td><code>by_agency/update_agency_es_rules.py</code></td>
          <td><code>agency_econ_significant_rules_by_presidential_year.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/agency_econ_significant_rules_by_presidential_year.Rmd</code></td>
          <td><code>output/by_agency/[agency]_econ_significant_rules_by_presidential_year.pdf</code><br/>`output/by_agency/[agency]_econ_significant_rules_by_presidential_year.png`</td>
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
          <td><code>data/monthly_es_rules/</code></td>
          <td><code>update_monthly_sig_rules_by_admin.py</code></td>
          <td><code>monthly_significant_rules_by_admin.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/monthly_sig_rules_by_admin.Rmd</code></td>
          <td><code>output/monthly_significant_rules_biden.pdf</code><br/>`output/monthly_significant_rules_biden.png`</td>
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
          <td><code>data/cumulative_es_rules/</code></td>
          <td><code>update_cumulative_es_rules.py</code></td>
          <td><code>cumulative_econ_significant_rules_by_presidential_month.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/cumulative_econ_significant_rules_by_admin.Rmd</code></td>
          <td><code>output/cumulative_econ_significant_rules_by_presidential_month.pdf</code><br/>`output/cumulative_econ_significant_rules_by_presidential_month.png`</td>
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
          <td><code>data/cumulative_es_rules/</code></td>
          <td><code>update_cumulative_es_rules.py</code></td>
          <td><code>cumulative_econ_significant_rules_by_presidential_month.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/cumulative_econ_significant_rules_first_year.Rmd</code></td>
          <td><code>output/cumulative_econ_significant_rules_by_first_year.pdf</code><br/>`output/cumulative_econ_significant_rules_by_first_year.png`</td>
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
          <td><code>data/sig_rules/</code></td>
          <td><code>update_sig_rules.py</code></td>
          <td><code>significant_rules_by_presidential_year.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/significant_rules.Rmd</code></td>
          <td><code>output/significant_rules_by_presidential_year.pdf</code><br/>`output/significant_rules_by_presidential_year.png`</td>
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
          <td><code>data/major_rules/</code></td>
          <td><code>cradb/scraper.py</code><br/>`cradb/process_data.py`</td>
          <td><code>major_rules_by_presidential_year.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/major_rules.Rmd</code></td>
          <td><code>output/major_rules_by_presidential_year.pdf</code><br/>`output/major_rules_by_presidential_year.png`</td>
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
          <td><code>data/fr_rules/</code></td>
          <td><code>code/fr_rules_by_presidential_year.py</code></td>
          <td><code>federal_register_rules_by_presidential_year.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/federal_register_rules.Rmd</code></td>
          <td><code>output/federal_register_rules_by_presidential_year.pdf</code><br/>`output/federal_register_rules_by_presidential_year.png`</td>
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
          <td><code>data/fr_rules/</code></td>
          <td><code>code/agency_fr_rules_by_presidential_year.py</code></td>
          <td><code>agency_federal_register_rules_by_presidential_year.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/agency_federal_register_rules.Rmd</code></td>
          <td><code>output/by_agency/[agency]_federal_register_rules_by_presidential_year.pdf</code><br/>`output/by_agency/[agency]_federal_register_rules_by_presidential_year.png`</td>
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
      	  <td rowspan="2">Annually:<br/>during first months of calendar year</td>
          <td>Data</td>
          <td><code>data/cfr_pages/</code></td>
          <td><code>update_cfr_pages.py</code></td>
          <td><code>cfr_pages_by_calendar_year.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/cfr_pages.Rmd</code></td>
          <td><code>output/cfr_pages_by_calendar_year.pdf</code><br/>`output/cfr_pages_by_calendar_year.png`</td>
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
          <td><code>data/fr_pages/</code></td>
          <td><code>update_fr_pages.py</code></td>
          <td><code>federal_register_pages_by_calendar_year.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/federal_register_pages.Rmd</code></td>
          <td><code>output/federal_register_pages_by_calendar_year.pdf</code><br/>`output/federal_register_pages_by_calendar_year.png`</td>
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
          <td><code>data/ua_actions/</code></td>
          <td><code>update_ua_actions.py</code></td>
          <td><code>active_actions_by_unified_agenda.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/unified_agenda_active_actions.Rmd</code></td>
          <td><code>output/active_actions_by_unified_agenda.pdf</code><br/>`output/active_actions_by_unified_agenda.png`</td>
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
          <td><code>data/public_laws/</code></td>
          <td><code>collect_public_law_data.py</code></td>
          <td><code>public_law_word_count_by_congress.csv</code></td>
        </tr>
        <tr>
          <td>Chart</td>
          <td><code>charts/</code></td>
          <td><code>code/public_law_word_count_by_congress.Rmd</code></td>
          <td><code>output/public_law_word_count_by_congress.pdf</code><br/>`output/public_law_word_count_by_congress.png`</td>
        </tr>
      </table>
</details>
