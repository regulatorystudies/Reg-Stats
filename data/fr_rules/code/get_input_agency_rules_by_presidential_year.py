from fr_toolbelt.preprocessing import AgencyMetadata

from agency_fr_rules_by_presidential_year import (
    main, 
    MAIN_DIR, 
    FINAL_YEAR,
    )


class InputError(Exception):
    """No valid inputs received."""
    pass


def get_agency_schema():
    _, schema = AgencyMetadata().get_agency_metadata()
    return schema


def check_input_against_agency_schema(input_slugs: list, schema: list):
    
    invalid = [slug for slug in input_slugs if slug not in schema]
    if len(invalid) > 0:
        print(f"Excluding the following invalid inputs:\n{'\n'.join(invalid)}")
    
    return [slug for slug in input_slugs if slug in schema]


if __name__ == "__main__":
    
    save_path = MAIN_DIR.joinpath("_select_agencies")
    if not save_path.exists():
        save_path.mkdir(parents=True, exist_ok=True)
    SCHEMA = get_agency_schema()    
    keep_agencies = []
    while True:
        prompt_inputs = input(
            "Retrieve data on which agencies?\nEnter agencies in slug format, separated by commas (e.g., transportation-department, small-business-administration): \n"
            )
        input_list = [p.strip() for p in prompt_inputs.lower().split(",")]
        
        # check if in schema
        valid_inputs = check_input_against_agency_schema(input_list, SCHEMA)
        
        # add to list
        keep_agencies.extend(valid_inputs)
                
        prompt_continue = input("Done with inputs? [yes/no]:  ")
        if prompt_continue in ("yes", "y"):
            break
    
    print(f"Retrieving data for the following agencies:\n{'\n'.join(keep_agencies)}")
    df = main(MAIN_DIR, FINAL_YEAR, agency_column="agency_slugs", keep_agencies=keep_agencies)
    agency = "select_agency"
    if len(keep_agencies) == 1:
        agency = df["acronym"].to_list()[0]
    elif len(keep_agencies) == 0:
        raise InputError("No valid inputs received.")
    cols = [c for c in df.columns if c != "parent_agency"]
    df.loc[:, cols].to_csv(save_path / f"{agency}_federal_register_rules_by_presidential_year.csv", index=False)
