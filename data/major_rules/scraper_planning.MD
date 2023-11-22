# Major Rules Scraper

## Planning

https://www.gao.gov/legal/other-legal-work/congressional-review-act?processed=1&type=all&priority=all&page=0

identify population of rules
- requests.get() from page=0
  - grab urls for rules on that page
  - extend json
- requests.get() from page=1
  - grab urls for rules on that page
  - extend json
- ...
- save json

collect rule-level data (first time)
- requests.get() from rule 0
  - grab metadata from page
  - retrieved date
  - extend json
- requests.get() from rule 1
  - grab metadata from page
  - retrieved date
  - extend json
- ...
- save json

collect rule-level data (updates)
- compare population to existing db of rules
- identify newly added rules
- requests.get() from new rule 0
  - grab metadata from page
  - retrieved date
  - extend json
- requests.get() from new rule 1
  - grab metadata from page
  - retrieved date
  - extend json
- ...
- extend existing json with new data
- save json

processing rule-level data
