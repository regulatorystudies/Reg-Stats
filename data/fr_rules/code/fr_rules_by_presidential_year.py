# federal_register_rules_by_presidential_year.py

import json
from pathlib import Path

from pandas import DataFrame, to_datetime, concat
from fr_toolbelt.api_requests import get_documents_by_date

from filter_documents import filter_corrections


# ------------------
# Paths

p = Path(__file__)
MAIN_DIR = p.parents[1]  # main folder for Reg Stats chart; store output data here
API_DIR = p.parents[1].joinpath("_api")  # folder for storing retrieved API data
API_DIR.mkdir(parents=True, exist_ok=True)


# ------------------
# Constants

# Output presidential years: 1995..2025 inclusive
PRESIDENTIAL_YEARS = [str(yr) for yr in range(1995, 2026)]

FIELDS = [
    "action", "agencies", "agency_names", "citation", "correction_of", "corrections",
    "document_number", "json_url", "president", "publication_date", "title", "type",
]

SAVE_NAME_CSV = "federal_register_rules_by_presidential_year.csv"
SAVE_CORRECTIONS_CSV = "federal_register_corrections.csv"


# ------------------
# Functions

def retrieve_documents_pres_years(
    presidential_years: list[str],
    doctype: str,
    fields: list,
    save_path: Path,
    replace_existing: bool = True,
) -> list[dict]:
    """
    Retrieve documents in presidential-year windows:
      presidential year Y = Y-02-01 to (Y+1)-01-31 (inclusive)

    Retrieves year-by-year to avoid API pagination/limit truncation.
    Caches each presidential year as a separate JSON file.
    """
    type_list = [doctype.upper()]  # API expects uppercase document type
    all_documents: list[dict] = []

    for y_str in presidential_years:
        y = int(y_str)
        start_date = f"{y}-02-01"
        end_date = f"{y + 1}-01-31"

        file_name = save_path / f"documents_endpoint_{doctype}_presyear_{y}.json"

        # Load from cache if present and we are not replacing
        if file_name.is_file() and not replace_existing:
            with open(file_name, "r", encoding="utf-8") as f:
                documents = json.load(f)
            all_documents.extend(documents)
            continue

        print(f"Retrieving type={doctype} for presidential_year={y} ({start_date} to {end_date})...")

        documents, _ = get_documents_by_date(
            start_date,
            end_date,
            document_types=type_list,
            fields=fields,
            handle_duplicates="flag",
        )

        dups = sum(1 for r in documents if r.get("duplicate", False) is True)
        if dups > 0:
            print(f"Flagged {dups} duplicate documents for {doctype} presyear {y}.")

        with open(file_name, "w", encoding="utf-8") as f:
            json.dump(documents, f, indent=4)

        all_documents.extend(documents)

    print(f"Done. Retrieved total {len(all_documents)} docs for {doctype}.")
    return all_documents

#%%
def merge_presidential_year_jsons(
    presidential_years: list[str],
    doctype: str,
    raw_path: Path,
    delete_individual_files: bool = True,
) -> Path:
    """
    Merge all per-presidential-year JSON files for a doctype into one file.
    Optionally delete the individual year files after merging.

    Returns:
        Path: path to the merged JSON file
    """
    merged_documents: list[dict] = []

    for y_str in presidential_years:
        file_name = raw_path / f"documents_endpoint_{doctype}_presyear_{y_str}.json"
        if not file_name.is_file():
            continue

        with open(file_name, "r", encoding="utf-8") as f:
            docs = json.load(f)
        merged_documents.extend(docs)

        if delete_individual_files:
            file_name.unlink()

    merged_file = raw_path / f"documents_endpoint_{doctype}_all_presyears.json"
    with open(merged_file, "w", encoding="utf-8") as f:
        json.dump(merged_documents, f, indent=4)

    print(f"Merged {len(merged_documents)} documents into {merged_file.name}")
    return merged_file
#%%

def format_documents(documents: list[dict]) -> DataFrame:
    """Format docs and compute presidential_year = Feb 1 .. Jan 31."""
    if not documents:
        return DataFrame()

    df = DataFrame(documents)

    if "publication_date" not in df.columns:
        return DataFrame()

    df["publication_dt"] = to_datetime(df["publication_date"], errors="coerce")
    df = df.loc[df["publication_dt"].notna()].copy()

    df["pub_year"] = df["publication_dt"].dt.year
    df["pub_month"] = df["publication_dt"].dt.month

    # Presidential year boundary is Feb 1; January belongs to previous year.
    df["presidential_year"] = df["pub_year"]
    df.loc[df["pub_month"] == 1, "presidential_year"] = df["pub_year"] - 1

    return df


def group_documents(
    df: DataFrame,
    group_column: str = "presidential_year",
    value_column: str = "document_number",
    return_column: str = None,
) -> DataFrame:
    """Group Federal Register documents by presidential year (Feb 1 to Jan 31)."""
    if df.empty:
        out = DataFrame(columns=[return_column or value_column])
        out.index.name = group_column
        return out

    grouped_df = (
        df.loc[:, [group_column, value_column]]
          .groupby(group_column)
          .agg("count")
    )

    if return_column is not None:
        grouped_df = grouped_df.rename(columns={value_column: return_column})

    return grouped_df


def main(
    presidential_years: list[str],
    fields: list,
    raw_path: Path,
    processed_path: Path,
    processed_file_name: str,
    replace_existing: bool = True,
):
    """Runs pipeline to retrieve and process documents by presidential year."""
    print(f"Main folder for processed data: {processed_path}")
    print(f"Folder for API data: {raw_path}")

    df_list, corrections_list = [], []
    doctypes = {"RULE": "final_rules", "PRORULE": "proposed_rules"}

    for doctype, fieldname in doctypes.items():
        # Retrieve (year-by-year cache files)
        documents = retrieve_documents_pres_years(
            presidential_years=presidential_years,
            doctype=doctype,
            fields=fields,
            save_path=raw_path,
            replace_existing=replace_existing,
        )

        # Merge the yearly JSONs into ONE per category and delete the individual files
        merge_presidential_year_jsons(
            presidential_years=presidential_years,
            doctype=doctype,
            raw_path=raw_path,
            delete_individual_files=True,
        )

        # Process
        df = format_documents(documents)
        df, corrections = filter_corrections(df)

        if not corrections.empty:
            corrections = corrections.copy()
            corrections.loc[:, "type"] = doctype
        corrections_list.append(corrections)

        df_grouped = group_documents(df, return_column=fieldname)
        df_list.append(df_grouped)

    # Join non-correction counts
    dfPrez = df_list[0].join(df_list[1], how="outer").fillna(0)
    dfPrez = dfPrez.reset_index()

    # Keep exactly 1995..2025
    dfPrez = dfPrez.query("presidential_year >= 1995 and presidential_year <= 2025").copy()

    # Cast counts to int
    for col in ["final_rules", "proposed_rules"]:
        if col in dfPrez.columns:
            dfPrez[col] = dfPrez[col].astype(int)

    print(dfPrez.tail())

    # Save counts CSV
    file_name = processed_path / processed_file_name
    with open(file_name, "w", encoding="utf-8") as f:
        dfPrez.to_csv(f, index=False, lineterminator="\n")

    # Save corrections CSV
    dfCorrections = concat(
        [c for c in corrections_list if not c.empty],
        axis=0,
        ignore_index=True,
    ) if any((not c.empty) for c in corrections_list) else DataFrame()

    corr_file = processed_path / SAVE_CORRECTIONS_CSV
    with open(corr_file, "w", encoding="utf-8") as f:
        dfCorrections.to_csv(f, index=False, lineterminator="\n")

    print(f"\nWrote:\n- {file_name}\n- {corr_file}")
    print(f"API merged JSONs:\n- {raw_path / 'documents_endpoint_RULE_all_presyears.json'}"
          f"\n- {raw_path / 'documents_endpoint_PRORULE_all_presyears.json'}")


if __name__ == "__main__":
    main(
        presidential_years=PRESIDENTIAL_YEARS,
        fields=FIELDS,
        raw_path=API_DIR,
        processed_path=MAIN_DIR,
        processed_file_name=SAVE_NAME_CSV,
        replace_existing=True,  # set False to reuse cached year files (if you keep them)
    )
