from scraper import NewRuleScraper
from pprint import pprint


if __name__ == "__main__":

    from pathlib import Path
    path = Path(__file__).parents[1].joinpath("raw_data")

    ns = NewRuleScraper(path=path, file_name="population_major", major_only=True)
    pop, detail = ns.scrape_new_rules(path=path, file_name="rule_detail_major")

    pprint(pop.keys())
    pprint(detail.keys())
