import json
import time
from pathlib import Path
from pandas import DataFrame, to_datetime, concat
from fr_toolbelt.api_requests import get_documents_by_date
from filter_documents import filter_corrections

p = Path(__file__)
MAIN_DIR = p.parents[1]                 
API_DIR = p.parents[1].joinpath("_api") 
API_DIR.mkdir(parents=True, exist_ok=True)

# Presidential year Y = Feb 1, Y → Jan 31, Y+1
PRESIDENTIAL_YEARS = [str(y) for y in range(1995, 2026)]

FIELDS = [
    "action", "agencies", "agency_names", "citation", "correction_of", "corrections",
    "document_number", "json_url", "president", "publication_date", "title", "type",
]

SAVE_NAME_CSV = "federal_register_rules_by_presidential_year.csv"
SAVE_CORRECTIONS_CSV = "federal_register_corrections.csv"

def retrieve_documents_pres_years(
    presidential_years: list[str],
    doctype: str,
    fields: list,
    save_path: Path,
    replace_existing: bool = True,
) -> list[dict]:
    type_list = [doctype.upper()]
    all_documents: list[dict] = []

    for idx, y_str in enumerate(presidential_years):
        y = int(y_str)
        start_date = f"{y}-02-01"
        end_date = f"{y + 1}-01-31"

        file_name = save_path / f"documents_endpoint_{doctype}_presyear_{y}.json"
        if file_name.is_file() and not replace_existing:
            with open(file_name, "r", encoding="utf-8") as f:
                documents = json.load(f)
            all_documents.extend(documents)
            continue
        # pause between two api calls
        # set to two seconds here
        if idx > 0:
            time.sleep(2.0)
        print(
            f"Retrieving {doctype} | presidential_year={y} "
            f"({start_date} → {end_date})"
        )
        documents, _ = get_documents_by_date(
            start_date,
            end_date,
            document_types=type_list,
            fields=fields,
            handle_duplicates="flag",
        )
        # Save yearly cache in _API
        with open(file_name, "w", encoding="utf-8") as f:
            json.dump(documents, f, indent=4)

        all_documents.extend(documents)

    print(f"Retrieved {len(all_documents)} total documents for {doctype}")
    return all_documents

def merge_presidential_year_jsons(
    presidential_years: list[str],
    doctype: str,
    raw_path: Path,
    delete_individual_files: bool = True,
) -> Path:
    merged_docs: list[dict] = []

    for y in presidential_years:
        file_name = raw_path / f"documents_endpoint_{doctype}_presyear_{y}.json"
        if not file_name.exists():
            continue

        with open(file_name, "r", encoding="utf-8") as f:
            merged_docs.extend(json.load(f))

        if delete_individual_files:
            file_name.unlink()

    merged_file = raw_path / f"documents_endpoint_{doctype}_all_presyears.json"
    with open(merged_file, "w", encoding="utf-8") as f:
        json.dump(merged_docs, f, indent=4)

    print(f"Merged JSON written: {merged_file.name}")
    return merged_file


def format_documents(documents: list[dict]) -> DataFrame:
    if not documents:
        return DataFrame()

    df = DataFrame(documents)

    df["publication_dt"] = to_datetime(df["publication_date"], errors="coerce")
    df = df.loc[df["publication_dt"].notna()].copy()

    df["pub_year"] = df["publication_dt"].dt.year
    df["pub_month"] = df["publication_dt"].dt.month
    df["presidential_year"] = df["pub_year"]
    df.loc[df["pub_month"] == 1, "presidential_year"] = df["pub_year"] - 1

    return df

def group_documents(
    df: DataFrame,
    group_column: str = "presidential_year",
    value_column: str = "document_number",
    return_column: str | None = None,
) -> DataFrame:
    if df.empty:
        out = DataFrame(columns=[return_column or value_column])
        out.index.name = group_column
        return out

    grouped = (
        df.loc[:, [group_column, value_column]]
        .groupby(group_column)
        .agg("count")
    )

    if return_column:
        grouped = grouped.rename(columns={value_column: return_column})

    return grouped

def main(
    presidential_years: list[str],
    fields: list,
    raw_path: Path,
    processed_path: Path,
    processed_file_name: str,
    replace_existing: bool = True,
):
    print(f"API cache directory: {raw_path}")
    print(f"Output directory:   {processed_path}")

    df_list = []
    corrections_list = []

    doctypes = {
        "RULE": "final_rules",
        "PRORULE": "proposed_rules",
    }

    for doctype, outcol in doctypes.items():
        documents = retrieve_documents_pres_years(
            presidential_years,
            doctype,
            fields,
            raw_path,
            replace_existing,
        )

        merge_presidential_year_jsons(
            presidential_years,
            doctype,
            raw_path,
            delete_individual_files=True,
        )

        df = format_documents(documents)
        df, corrections = filter_corrections(df)

        if not corrections.empty:
            corrections = corrections.copy()
            corrections["type"] = doctype
        corrections_list.append(corrections)

        df_grouped = group_documents(df, return_column=outcol)
        df_list.append(df_grouped)

    dfPrez = df_list[0].join(df_list[1], how="outer").fillna(0)
    dfPrez = dfPrez.reset_index()

    dfPrez = dfPrez.query(
        "presidential_year >= 1995 and presidential_year <= 2025"
    ).copy()

    dfPrez["final_rules"] = dfPrez["final_rules"].astype(int)
    dfPrez["proposed_rules"] = dfPrez["proposed_rules"].astype(int)

    out_csv = processed_path / processed_file_name
    dfPrez.to_csv(out_csv, index=False, lineterminator="\n")

    dfCorrections = concat(
        [c for c in corrections_list if not c.empty],
        ignore_index=True,
    ) if any(not c.empty for c in corrections_list) else DataFrame()

    corr_csv = processed_path / SAVE_CORRECTIONS_CSV
    dfCorrections.to_csv(corr_csv, index=False, lineterminator="\n")

    print("\nFinished successfully.")
    print(f"Counts CSV: {out_csv}")
    print(f"Corrections CSV: {corr_csv}")
    print("Merged API JSONs:")
    print(f" - documents_endpoint_RULE_all_presyears.json")
    print(f" - documents_endpoint_PRORULE_all_presyears.json")

if __name__ == "__main__":
    main(
        presidential_years=PRESIDENTIAL_YEARS,
        fields=FIELDS,
        raw_path=API_DIR,
        processed_path=MAIN_DIR,
        processed_file_name=SAVE_NAME_CSV,
        replace_existing=True,
    )
