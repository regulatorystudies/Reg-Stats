from datetime import date
import json
from pathlib import Path

from pandas import DataFrame
import requests


# source: https://www.law.cornell.edu/uscode/text/44/3502
INDEPENDENT_REG_AGENCIES: tuple[str] = (
    'federal-reserve-system',
    'commodity-futures-trading-commission',
    'consumer-product-safety-commission',
    'federal-communications-commission',
    'federal-deposit-insurance-corporation',
    'federal-energy-regulatory-commission',
    'federal-housing-finance-agency',
    'federal-maritime-commission',
    'federal-trade-commission',
    'interstate-commerce-commission',    
    'federal-mine-safety-and-health-review-commission',
    'national-labor-relations-board',
    'nuclear-regulatory-commission',
    'occupational-safety-and-health-review-commission',
    'postal-regulatory-commission',
    'securities-and-exchange-commission',
    'consumer-financial-protection-bureau',
    'financial-research-office',
    'comptroller-of-the-currency',
    )


class AgencyMetadata:
    """Class for storing and transforming agency metadata from Federal Register API.
    
    Args:
        data (dict, optional): Accepts a JSON object of structure iterable[dict]. Defaults to None.
    """
    def __init__(self, data: list[dict] = None):
        self.data = data
        self.transformed_data = {}
        self.schema = []
    
    def get_metadata(self, endpoint_url: str = r"https://www.federalregister.gov/api/v1/agencies.json"):
        """Queries the GET agencies endpoint of the Federal Register API.
        Retrieve agencies metadata. After defining endpoint url, no parameters are needed.

        Args:
            endpoint_url (str, optional): Endpoint for retrieving agencies metadata. Defaults to r"https://www.federalregister.gov/api/v1/agencies.json".

        Raises:
            HTTPError: via requests package
        """
        # request documents; raise error if it fails
        agencies_response = requests.get(endpoint_url)
        if agencies_response.status_code != 200:
            print(agencies_response.reason)
            agencies_response.raise_for_status()
        # return response as json
        self.data = agencies_response.json()
    
    def get_schema(self, metadata: dict[dict] = None):
        """Get Agency schema of agencies available from API.

        Args:
            metadata (dict[dict], optional): Agency metadata from API. Defaults to None.
        """        
        if metadata is not None:
            schema = [f"{slug}" for slug in metadata.get("results", {}).keys()]
        else:
            schema = [f"{agency.get('slug')}" for agency in self.data if agency.get("slug", "") != ""]
        self.schema = schema
    
    def transform(self):
        """Transform self.data from original format of iterable[dict] to dict[dict].
        """        
        if self.transformed_data != {}:
            print("Metadata already transformed! Access it with self.transformed_data.")
        else:
            agency_dict = {}
            for i in self.data:
                if isinstance(i, dict):  # check if type is dict
                    slug = f'{i.get("slug", "none")}'
                    agency_dict.update({slug: i})                    
                else:  # cannot use this method on non-dict structures
                    continue
            while "none" in agency_dict:
                agency_dict.pop("none")
            # return transformed data as a dictionary
            self.transformed_data = agency_dict
    
    def to_json(self, obj, path: Path, file_name: str):
        """Save object to JSON, creating path and parents if needed.

        Args:
            obj: JSON-compatible object.
            path (Path): Path for saving data.
            file_name (str): File name to use when saving.
        """        
        if not path.exists():
            path.mkdir(parents=True, exist_ok=True)
        
        with open(path / file_name, "w", encoding="utf-8") as f:
            json.dump(obj, f, indent=4)
    
    def save_metadata(
            self, 
            path: Path, 
            file_name: str = "agencies_endpoint_metadata.json"
        ):
        """Save agencies metadata from Federal Register API.

        Args:
            path (Path): Path for saving data.
            file_name (str, optional): File name to use when saving. Defaults to r"agencies_endpoint_metadata.json".
        """
        # create dictionary of data with retrieval date
        dict_metadata = {
            "source": "Federal Register API, https://www.federalregister.gov/reader-aids/developer-resources/rest-api",
            "endpoint": r"https://www.federalregister.gov/api/v1/agencies.json",
            "date_retrieved": f"{date.today()}",
            "count": len(self.transformed_data), 
            "results": self.transformed_data
            }
        # export to json
        self.to_json(dict_metadata, path, file_name)
    
    def save_schema(self, path: Path, file_name: str = "agency_schema.json"):
        """Save schema of agencies available from API.

        Args:
            path (Path): Path for saving data.
            file_name (str, optional): File name to use when saving. Defaults to "agency_schema.json".
        """        
        if (len(self.schema) == 0) and (self.data is not None):
            self.get_schema()
        self.to_json(self.schema, path, file_name)


class AgencyData:
    """Class for processing agency data from Federal Register API.
    
    Args:
        input_data (DataFrame): Input data with agency information.
        metadata (dict[dict]): Transformed agency metadata.
        schema (list[str]): List of agency slugs representing population of agencies. Defaults to Agency schema from API.
        columns (list[str]): Columns containing agency information. Defaults to ["agencies", "agency_names"].
    """
    def __init__(
            self, 
            input_data: DataFrame, 
            metadata: dict[dict], 
            schema: list[str], 
            columns: list[str] = ["agencies", "agency_names"]
        ) -> None:
        self.data = input_data
        metadata_results = metadata.get("results", None)
        if metadata_results is not None:
            self.metadata = metadata_results
        else:
            self.metadata = metadata
        self.schema = schema
        self.agency_columns = columns
    
    def extract_values(self):
        """Extract values from agency columns, saving them as a `dict` to an instance attribute.
        The format of the resulting key: value pairs will be "agency_column": list(values).
        """        
        values_dict = {}
        for col in self.agency_columns:
            values_dict.update({
                col: list(self.data.loc[:, col].to_numpy())
            })
        self.agency_column_values = values_dict
    
    def get_slugs(self, alt_columns: list = None):
        """Extract values of agency slugs that are de-duplicated and validated by Agency schema.
        Assign list of values to column "agency_slugs" and instance attribute `self.agency_slug_values`.
        
        Args:
            alt_columns (list, optional): List of alternate columns containing slug values. Defaults to None.
        
        Raises:
            ValueError: If given, parameter "alt_columns" must have length of 2.
        """
        if (alt_columns is not None) and (len(alt_columns) == 2):
            columns = alt_columns
        elif alt_columns is None:
            columns = self.agency_columns
        else:
            raise ValueError("Parameter alt_columns must have length of 2.")
            
        # loop over documents and extract agencies data
        slug_list = []  # empty lists for results
        for row, backup in zip(self.agency_column_values.get(columns[0]), self.agency_column_values.get(columns[1])):
            slug_list.append(r.get("slug", r.get("name", f"{b}").lower().replace(" ","-")) for r, b in zip(row, backup))

        # clean slug list to only include agencies in the schema
        # there are some bad metadata -- e.g., 'interim-rule', 'formal-comments-that-were-received-in-response-to-the-nprm-regarding'
        # also ensure no duplicate agencies in each document's list by using set()
        slug_list_clean = [list(set(i for i in slug if i in self.schema)) for slug in slug_list]
        
        self.data.loc[:, "agency_slugs"] = slug_list_clean
        self.agency_slug_values = slug_list_clean
    
    def get_parents(self) -> list[str]:
        """Get top-level parent agency slugs from Agency metadata.
        Only includes agencies that have no parent themselves.

        Returns:
            list[str]: List of agency slugs for top-level parent agencies.
        """
        return [k for k, v in self.metadata.items() if (v.get("parent_id") is None)]
    
    def get_subagencies(self) -> list[str]:
        """Get subagency slugs from Agency metadata.
        Includes agencies that have a parent agency, even if they are a parent themselves.

        Returns:
            list[str]: List of agency slugs for subagencies.
        """        
        return [k for k, v in self.metadata.items() if (v.get("parent_id") is not None)]
    
    def get_agency_info(self, agency_slug: str, key: str) -> str | int | list | None:
        """Retrieve value of "key" from metadata `dict` associated with "agency_slug".

        Args:
            agency_slug (str): Agency slug identifier.
            key (str): Agency attributes associated with agency metadata (e.g., "name", "slug", "id", etc.).

        Returns:
            str | int | list | None: Value associated with "key" for given agency, else None.
        """
        return self.metadata.get(agency_slug, {}).get(key, None)
    
    def return_column_as_str(self, input_values: list | tuple | set | int | float, sep: str = "; "):
        """Return values of column as a string (e.g., ["a", "b", "c"] -> "a; b; c", 1.23 -> "1.23").
        Converts `list`, `tuple`, `set`, `int`, or `float` to `str`; otherwise returns value unaltered.

        Args:
            input_values (list | tuple | set | int | float): Values to convert to `str`.
            sep (str, optional): Separator for joining values. Defaults to "; ".

        Returns:
            list[str]: List of converted values for assigning to DataFrame series.
        """
        return [
            sep.join(document) 
                if isinstance(document, (list, tuple, set)) else 
                    (f"{document}" if isinstance(document, (int, float)) else document) 
                        for document in input_values
            ]
    
    def process_agency_columns(
            self, 
            parent_slugs: list[str], 
            subagency_slugs: list[str], 
            return_format: str = "slug", 
            return_columns_as_str: bool = True
        ):
        """Extract parent and subagency information from agency data and return in requested format based on API metadata.
        Supported return formats include "child_ids", "child_slugs", "description", "id", "name", "parent_id", "short_name", "slug", "url".

        Args:
            parent_slugs (list[str]): List of slugs identifying parent agencies.
            subagency_slugs (list[str]): List of slugs identifying subagencies.
            return_format (str, optional): Format of returned data (e.g., slug, numeric id, short name/acronym, name). Defaults to "slug".
            return_columns_as_str (bool, optional): Return column values as a string. Defaults to True.
        """
        parents, subagencies = [], []
        for document in self.agency_slug_values:
            #parent_slug_uq = [slug for slug in document if slug in parent_slugs]
            parents.append([self.get_agency_info(slug, return_format) for slug in document if slug in parent_slugs])
            subagencies.append([self.get_agency_info(slug, return_format) for slug in document if slug in subagency_slugs])
        if return_columns_as_str:
            self.data.loc[:, f"parent_{return_format}"] = self.return_column_as_str(parents)
            self.data.loc[:, f"subagency_{return_format}"] = self.return_column_as_str(subagencies)
        else:
            self.data.loc[:, f"parent_{return_format}"] = parents
            self.data.loc[:, f"subagency_{return_format}"] = subagencies
    
    def get_independent_reg_agencies(
            self, 
            agency_column: str = "agency_slugs", 
            new_column: str = "independent_reg_agency", 
            independent_agencies: list | tuple = INDEPENDENT_REG_AGENCIES
        ):
        """Identifies whether agency slugs include an independent regulatory agency, based on the definition in [44 U.S.C. 3502(5)](https://www.law.cornell.edu/uscode/text/44/3502).        
        Creates a binary column in the instance attribute `self.data`.
        
        Args:
            agency_column (str, optional): Column containing agency slug. Defaults to "agency_slugs".
            new_column (str, optional): Name of new column containing indicator for independent regulatory agencies. Defaults to "independent_reg_agency".
            independent_agencies (list | tuple, optional): Schema identifying independent regulatory agencies. Defaults to INDEPENDENT_REG_AGENCIES (constant).
        """
        agencies = self.data.loc[:, agency_column].to_numpy()
        ira_list = [any(1 if agency in independent_agencies else 0 for agency in agency_list) for agency_list in agencies]
        self.data.loc[:, new_column] = [1 if ira else 0 for ira in ira_list]
    
    def preprocess_agencies(self, return_format: str = "slug"):
        """Preprocess agency metadata for analysis.
        Calls methods `extract_values`, `get_slugs`, `process_agency_columns`, and `get_independent_reg_agencies`.

        Args:
            return_format (str, optional): Format of returned data (e.g., slug, numeric id, short name/acronym, name). Defaults to "slug".
        """        
        self.extract_values()
        self.get_slugs()
        self.process_agency_columns(self.get_parents(), self.get_subagencies(), return_format=return_format)
        self.get_independent_reg_agencies()


def reorder_new_columns(df: DataFrame, new_columns: list, after_column: str, original_columns: list | None = None):
    """Reorder and insert new columns to existing DataFrame.

    Args:
        df (DataFrame): Input data.
        new_columns (list): New (empty) columns to add to df.
        after_column (str): Insert new columns after this column.
        original_columns (list | None, optional): List of original columns. If None, method will use list of columns from "df" parameter. Defaults to None.

    Returns:
        DataFrame: Data with new columns.
    """
    if original_columns is None:
        original_columns = df.columns.to_list()
    
    index_loc = original_columns.index(after_column) + 1  # locate element after a specified column
    new_col_list = original_columns[:index_loc] + new_columns + original_columns[index_loc:]  # create new column list
    # insert new columns in specified location and return
    return df.reindex(columns = new_col_list)


# only query agencies endpoint when run as script; save that output 
if __name__ == "__main__":
    
    # set path
    data_dir = Path(__file__).parents[1].joinpath("data")
    
    # retrieve metadata
    agencies_metadata = AgencyMetadata()
    agencies_metadata.get_metadata()
    agencies_metadata.transform()
    agencies_metadata.save_metadata(data_dir)
    
    # generate agency schema from metadata
    agencies_metadata.get_schema()
    agencies_metadata.save_schema(data_dir)
