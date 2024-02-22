from datetime import date
import json
from datetime import date
from pathlib import Path

#from pandas import DataFrame, to_datetime, concat
#from numpy import array

from fr_toolbelt.preprocessing import process_documents

# set file paths
p = Path(__file__)
MAIN_DIR = p.parents[1]  # main folder for Reg Stats chart; store output data here
API_DIR = p.parents[1].joinpath("_api")  # folder for storing retrieved API data
FINAL_YEAR = date.today().year - 1

FILES = [
    f"documents_endpoint_RULE_1995_{FINAL_YEAR}.json", 
    f"documents_endpoint_PRORULE_1995_{FINAL_YEAR}.json", 
    ]


def read_json(path, file):
    with open(path / file, "r", encoding="utf-8") as f:
        documents = json.load(f)
    try:
        return documents.get("results")
    except AttributeError:
        return documents


def process_rules(documents):
    results = process_documents(documents)
    return results


if __name__ == "__main__":
    pass
