from datetime import date
import json
from pathlib import Path

from pandas import DataFrame
import requests


# set default agency schema via Federal Register API
# source: https://www.federalregister.gov/developers/documentation/api/v1
DEFAULT_AGENCY_SCHEMA = [
    'action',
    'administration-office-executive-office-of-the-president',
    'administrative-conference-of-the-united-states',
    'administrative-office-of-united-states-courts',
    'advisory-council-on-historic-preservation',
    'advocacy-and-outreach-office',
    'agency-for-healthcare-research-and-quality',
    'agency-for-international-development',
    'agency-for-toxic-substances-and-disease-registry',
    'aging-administration',
    'agricultural-marketing-service',
    'agricultural-research-service',
    'agriculture-department',
    'air-force-department',
    'air-quality-national-commission',
    'air-transportation-stabilization-board',
    'alaska-power-administration',
    'alcohol-and-tobacco-tax-and-trade-bureau',
    'alcohol-tobacco-firearms-and-explosives-bureau',
    'american-battle-monuments-commission',
    'amtrak-reform-council',
    'animal-and-plant-health-inspection-service',
    'antitrust-division',
    'antitrust-modernization-commission',
    'appalachian-regional-commission',
    'appalachian-states-low-level-radioactive-waste-commission',
    'architect-of-the-capitol',
    'architectural-and-transportation-barriers-compliance-board',
    'arctic-research-commission',
    'armed-forces-retirement-home',
    'arms-control-and-disarmament-agency',
    'army-department',
    'assassination-records-review-board',
    'barry-m-goldwater-scholarship-and-excellence-in-education-foundation',
    'benefits-review-board',
    'bipartisan-commission-on-entitlement-and-tax-reform',
    'board-of-directors-of-the-hope-for-homeowners-program',
    'bonneville-power-administration',
    'broadcasting-board-of-governors',
    'bureau-of-the-fiscal-service',
    'census-bureau',
    'census-monitoring-board',
    'centers-for-disease-control-and-prevention',
    'centers-for-medicare-medicaid-services',
    'central-intelligence-agency',
    'chemical-safety-and-hazard-investigation-board',
    'child-support-enforcement-office',
    'children-and-families-administration',
    'christopher-columbus-quincentenary-jubilee-commission',
    'civil-rights-commission',
    'coast-guard',
    'commerce-department',
    'commercial-space-transportation-office',
    'commission-of-fine-arts',
    'commission-on-immigration-reform',
    'commission-on-protecting-and-reducing-government-secrecy',
    'commission-on-review-of-overseas-military-facility-structure-of-the-united-states',
    'commission-on-structural-alternatives-for-the-federal-courts-of-appeals',
    'commission-on-the-advancement-of-federal-law-enforcement',
    'commission-on-the-bicentennial-of-the-united-states-constitution',
    'commission-on-the-future-of-the-united-states-aerospace-industry',
    'commission-on-the-social-security-notch-issue',
    'committee-for-purchase-from-people-who-are-blind-or-severely-disabled',
    'committee-for-the-implementation-of-textile-agreements',
    'commodity-credit-corporation',
    'commodity-futures-trading-commission',
    'community-development-financial-institutions-fund',
    'community-living-administration',
    'competitiveness-policy-council',
    'comptroller-of-the-currency',
    'congressional-budget-office',
    'consumer-financial-protection-bureau',
    'consumer-product-safety-commission',
    'cooperative-state-research-education-and-extension-service',
    'coordinating-council-on-juvenile-justice-and-delinquency-prevention',
    'copyright-office-library-of-congress',
    'copyright-royalty-board',
    'copyright-royalty-judges',
    'corporation-for-national-and-community-service',
    'council-of-the-inspectors-general-on-integrity-and-efficiency',
    'council-on-environmental-quality',
    'counsel-to-the-president',
    'court-services-and-offender-supervision-agency-for-the-district-of-columbia',
    'crime-and-security-in-u-s-seaports-interagency-commission',
    'customs-service',
    'defense-acquisition-regulations-system',
    'defense-base-closure-and-realignment-commission',
    'defense-contract-audit-agency',
    'defense-criminal-investigative-service',
    'defense-department',
    'defense-information-systems-agency',
    'defense-intelligence-agency',
    'defense-investigative-service',
    'defense-logistics-agency',
    'defense-mapping-agency',
    'defense-nuclear-facilities-safety-board',
    'defense-special-weapons-agency',
    'delaware-river-basin-commission',
    'denali-commission',
    'disability-employment-policy-office',
    'drug-enforcement-administration',
    'economic-analysis-bureau',
    'economic-analysis-staff',
    'economic-development-administration',
    'economic-research-service',
    'economics-and-statistics-administration',
    'education-department',
    'election-assistance-commission',
    'electronic-commerce-advisory-commission',
    'emergency-oil-and-gas-guaranteed-loan-board',
    'emergency-steel-guarantee-loan-board',
    'employee-benefits-security-administration',
    'employees-compensation-appeals-board',
    'employment-and-training-administration',
    'employment-standards-administration',
    'energy-department',
    'energy-efficiency-and-renewable-energy-office',
    'energy-information-administration',
    'energy-policy-and-new-uses-office',
    'energy-research-office',
    'engineers-corps',
    'engraving-and-printing-bureau',
    'environment-office-energy-department',
    'environmental-protection-agency',
    'equal-employment-opportunity-commission',
    'executive-council-on-integrity-and-efficiency',
    'executive-office-for-immigration-review',
    'executive-office-of-the-president',
    'export-administration-bureau',
    'export-import-bank',
    'family-assistance-office',
    'farm-credit-administration',
    'farm-credit-system-insurance-corporation',
    'farm-service-agency',
    'federal-accounting-standards-advisory-board',
    'federal-acquisition-regulation-system',
    'federal-aviation-administration',
    'federal-bureau-of-investigation',
    'federal-communications-commission',
    'federal-contract-compliance-programs-office',
    'federal-council-on-the-arts-and-the-humanities',
    'federal-crop-insurance-corporation',
    'federal-deposit-insurance-corporation',
    'federal-election-commission',
    'federal-emergency-management-agency',
    'federal-energy-regulatory-commission',
    'federal-financial-institutions-examination-council',
    'federal-highway-administration',
    'federal-housing-enterprise-oversight-office',
    'federal-housing-finance-agency',
    'federal-housing-finance-board',
    'federal-labor-relations-authority',
    'federal-law-enforcement-training-center',
    'federal-maritime-commission',
    'federal-mediation-and-conciliation-service',
    'federal-mine-safety-and-health-review-commission',
    'federal-motor-carrier-safety-administration',
    'federal-pay-advisory-committee',
    'federal-permitting-improvement-steering-council',
    'federal-prison-industries',
    'federal-procurement-policy-office',
    'federal-railroad-administration',
    'federal-register-office',
    'federal-register-administrative-committee',
    'federal-reserve-system',
    'federal-retirement-thrift-investment-board',
    'federal-service-impasses-panel',
    'federal-trade-commission',
    'federal-transit-administration',
    'financial-crimes-enforcement-network',
    'financial-crisis-inquiry-commission',
    'financial-research-office',
    'financial-stability-oversight-council',
    'first-responder-network-authority',
    'fiscal-service',
    'fish-and-wildlife-service',
    'food-and-consumer-service',
    'food-and-drug-administration',
    'food-and-nutrition-service',
    'food-safety-and-inspection-service',
    'foreign-agricultural-service',
    'foreign-assets-control-office',
    'foreign-claims-settlement-commission',
    'foreign-service-grievance-board',
    'foreign-service-impasse-disputes-panel',
    'foreign-service-labor-relations-board',
    'foreign-trade-zones-board',
    'forest-service',
    'general-services-administration',
    'geographic-names-board',
    'geological-survey',
    'government-accountability-office',
    'government-ethics-office',
    'government-national-mortgage-association',
    'government-publishing-office',
    'grain-inspection-packers-and-stockyards-administration',
    'great-lakes-st-lawrence-seaway-development-corporation',
    'gulf-coast-ecosystem-restoration-council',
    'harry-s-truman-scholarship-foundation',
    'health-and-human-services-department',
    'health-care-finance-administration',
    'health-resources-and-services-administration',
    'hearings-and-appeals-office-energy-department',
    'hearings-and-appeals-office-interior-department',
    'homeland-security-department',
    'housing-and-urban-development-department',
    'immigration-and-naturalization-service',
    'indian-affairs-bureau',
    'indian-arts-and-crafts-board',
    'indian-health-service',
    'indian-trust-transition-office',
    'industry-and-security-bureau',
    'information-security-oversight-office',
    'inspector-general-office-agriculture-department',
    'inspector-general-office-health-and-human-services-department',
    'institute-of-american-indian-and-alaska-native-culture-and-arts-development',
    'institute-of-museum-and-library-services',
    'inter-american-foundation',
    'interagency-floodplain-management-review-committee',
    'intergovernmental-relations-advisory-commission',
    'interior-department',
    'internal-revenue-service',
    'international-boundary-and-water-commission-united-states-and-mexico',
    'international-broadcasting-board',
    'international-development-cooperation-agency',
    'u-s-international-development-finance-corporation',
    'international-investment-office',
    'international-joint-commission-united-states-and-canada',
    'international-organizations-employees-loyalty-board',
    'international-trade-administration',
    'international-trade-commission',
    'interstate-commerce-commission',
    'investment-security-office',
    'james-madison-memorial-fellowship-foundation',
    'japan-united-states-friendship-commission',
    'joint-board-for-enrollment-of-actuaries',
    'judicial-conference-of-the-united-states',
    'judicial-review-commission-on-foreign-asset-control',
    'justice-department',
    'justice-programs-office',
    'juvenile-justice-and-delinquency-prevention-office',
    'labor-department',
    'labor-statistics-bureau',
    'labor-management-standards-office',
    'land-management-bureau',
    'legal-services-corporation',
    'library-of-congress',
    'local-television-loan-guarantee-board',
    'management-and-budget-office',
    'marine-mammal-commission',
    'maritime-administration',
    'medicare-payment-advisory-commission',
    'merit-systems-protection-board',
    'military-compensation-and-retirement-modernization-commission',
    'millennium-challenge-corporation',
    'mine-safety-and-health-administration',
    'minerals-management-service',
    'mines-bureau',
    'minority-business-development-agency',
    'minority-economic-impact-office',
    'mississippi-river-commission',
    'monetary-offices',
    'morris-k-udall-and-stewart-l-udall-foundation',
    'national-aeronautics-and-space-administration',
    'national-agricultural-library',
    'national-agricultural-statistics-service',
    'national-archives-and-records-administration',
    'national-assessment-governing-board',
    'national-bankruptcy-review-commission',
    'national-biological-service',
    'national-bipartisan-commission-on-future-of-medicare',
    'national-capital-planning-commission',
    'national-civilian-community-corps',
    'national-commission-on-fiscal-responsibility-and-reform',
    'national-commission-on-intermodal-transportation',
    'national-commission-on-libraries-and-information-science',
    'national-commission-on-manufactured-housing',
    'national-commission-on-military-national-and-public-service',
    'national-commission-on-terrorist-attacks-upon-the-united-states',
    'national-commission-on-the-cost-of-higher-education',
    'national-communications-system',
    'national-consumer-cooperative-bank',
    'national-council-on-disability',
    'national-counterintelligence-center',
    'national-credit-union-administration',
    'national-crime-prevention-and-privacy-compact-council',
    'national-economic-council',
    'national-education-goals-panel',
    'national-endowment-for-the-arts',
    'national-endowment-for-the-humanities',
    'national-foundation-on-the-arts-and-the-humanities',
    'national-gambling-impact-study-commission',
    'national-geospatial-intelligence-agency',
    'national-highway-traffic-safety-administration',
    'national-historical-publications-and-records-commission',
    'national-indian-gaming-commission',
    'national-institute-for-literacy',
    'national-institute-of-corrections',
    'national-institute-of-food-and-agriculture',
    'national-institute-of-justice',
    'national-institute-of-standards-and-technology',
    'national-institutes-of-health',
    'national-intelligence-office-of-the-national-director',
    'national-labor-relations-board',
    'national-library-of-medicine',
    'national-mediation-board',
    'national-nanotechnology-coordination-office',
    'national-nuclear-security-administration',
    'national-oceanic-and-atmospheric-administration',
    'national-park-service',
    'national-partnership-for-reinventing-government',
    'national-prison-rape-elimination-commission',
    'national-railroad-passenger-corporation',
    'national-science-foundation',
    'national-security-agency-central-security-service',
    'national-security-commission-on-artificial-intelligence',
    'national-security-council',
    'national-shipping-authority',
    'national-skill-standards-board',
    'national-technical-information-service',
    'national-telecommunications-and-information-administration',
    'national-transportation-safety-board',
    'national-women-s-business-council',
    'natural-resources-conservation-service',
    'natural-resources-revenue-office',
    'navajo-and-hopi-indian-relocation-office',
    'navy-department',
    'neighborhood-reinvestment-corporation',
    'northeast-dairy-compact-commission',
    'northeast-interstate-low-level-radioactive-waste-commission',
    'nuclear-energy-office',
    'nuclear-regulatory-commission',
    'nuclear-waste-technical-review-board',
    'occupational-safety-and-health-administration',
    'occupational-safety-and-health-review-commission',
    'ocean-energy-management-bureau',
    'ocean-energy-management-regulation-and-enforcement-bureau',
    'ocean-policy-commission',
    'office-of-government-information-services',
    'office-of-motor-carrier-safety',
    'office-of-national-drug-control-policy',
    'office-of-policy-development',
    'office-of-the-chief-financial-officer-agriculture-department',
    'oklahoma-city-national-memorial-trust',
    'operations-office',
    'ounce-of-prevention-council',
    'overseas-private-investment-corporation',
    'pacific-northwest-electric-power-and-conservation-planning-council',
    'panama-canal-commission',
    'parole-commission',
    'partnerships-and-public-engagement-office',
    'patent-and-trademark-office',
    'peace-corps',
    'pension-and-welfare-benefits-administration',
    'pension-benefit-guaranty-corporation',
    'personnel-management-office',
    'physician-payment-review-commission',
    'pipeline-and-hazardous-materials-safety-administration',
    'postal-rate-commission',
    'postal-regulatory-commission',
    'postal-service',
    'president-s-council-on-integrity-and-efficiency',
    'president-s-council-on-sustainable-development',
    'president-s-critical-infrastructure-protection-board',
    'president-s-economic-policy-advisory-board',
    'presidential-advisory-committee-on-gulf-war-veterans-illnesses',
    'presidential-commission-on-assignment-of-women-in-the-armed-forces',
    'presidential-documents',
    'presidio-trust',
    'prisons-bureau',
    'privacy-and-civil-liberties-oversight-board',
    'procurement-and-property-management-office-of',
    'program-support-center',
    'prospective-payment-assessment-commission',
    'public-buildings-reform-board',
    'public-debt-bureau',
    'public-health-service',
    'railroad-retirement-board',
    'reagan-udall-foundation-for-the-food-and-drug-administration',
    'reclamation-bureau',
    'recovery-accountability-and-transparency-board',
    'refugee-resettlement-office',
    'regulatory-information-service-center',
    'research-and-innovative-technology-administration',
    'research-and-special-programs-administration',
    'resolution-trust-corporation',
    'risk-management-agency',
    'rural-business-cooperative-service',
    'rural-housing-and-community-development-service',
    'rural-housing-service',
    'rural-telephone-bank',
    'rural-utilities-service',
    'safety-and-environmental-enforcement-bureau',
    'saint-lawrence-seaway-development-corporation',
    'science-and-technology-policy-office',
    'secret-service',
    'securities-and-exchange-commission',
    'selective-service-system',
    'small-business-administration',
    'smithsonian-institution',
    'social-security-administration',
    'southeastern-power-administration',
    'southwestern-power-administration',
    'special-counsel-office',
    'special-inspector-general-for-afghanistan-reconstruction',
    'special-inspector-general-for-iraq-reconstruction',
    'special-trustee-for-american-indians-office',
    'state-department',
    'state-justice-institute',
    'substance-abuse-and-mental-health-services-administration',
    'surface-mining-reclamation-and-enforcement-office',
    'surface-transportation-board',
    'susquehanna-river-basin-commission',
    'technology-administration',
    'tennessee-valley-authority',
    'the-white-house-office',
    'thrift-depositor-protection-oversight-board',
    'thrift-supervision-office',
    'trade-and-development-agency',
    'trade-representative-office-of-united-states',
    'transportation-department',
    'transportation-office',
    'transportation-security-administration',
    'transportation-statistics-bureau',
    'travel-and-tourism-administration',
    'treasury-department',
    'twenty-first-century-workforce-commission',
    'u-s-citizenship-and-immigration-services',
    'us-codex-office',
    'u-s-customs-and-border-protection',
    'u-s-house-of-representatives',
    'u-s-immigration-and-customs-enforcement',
    'u-s-trade-deficit-review-commission',
    'u-s-china-economic-and-security-review-commission',
    'under-secretary-for-economic-affairs',
    'unified-carrier-registration-plan',
    'uniformed-services-university-of-the-health-sciences',
    'african-development-foundation',
    'united-states-agency-for-global-media',
    'united-states-enrichment-corporation',
    'united-states-information-agency',
    'united-states-institute-of-peace',
    'united-states-marshals-service',
    'united-states-mint',
    'united-states-olympic-and-paralympic-committee',
    'united-states-sentencing-commission',
    'utah-reclamation-mitigation-and-conservation-commission',
    'valles-caldera-trust',
    'veterans-affairs-department',
    'veterans-employment-and-training-service',
    'victims-of-crime-office',
    'wage-and-hour-division',
    'western-area-power-administration',
    'women-s-business-enterprise-interagency-committee',
    'women-s-progress-commemoration-commission',
    'women-s-suffrage-centennial-commission',
    'workers-compensation-programs-office'
    ]


# source: https://www.law.cornell.edu/uscode/text/44/3502
INDEPENDENT_REG_AGENCIES = (
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


class PreprocessingError(Exception):
    pass


class AgencyMetadata:
    """Class for storing and transforming agency metadata from Federal Register API.
    
    Accepts a JSON object of structure iterable[dict].
    
    Methods:
        transform: Transform metadata from Federal Register API.
        save_json: Save transformed metadata.
    """    
    def __init__(self, data: dict = None):
        self.data = data
        self.transformed_data = {}
    
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
    
    def save_json(self, 
                  path: Path, 
                  file_name: str = "agencies_endpoint_metadata.json"):
        """Save metadata on agencies from Federal Register API.

        Args:
            data_dir (Path, optional): Path for saving JSON. Defaults to Path(__file__).parents[1].joinpath("data", "raw").
            file_name (str, optional): File name to use when saving. Defaults to r"agencies_endpoint_metadata.json".
        """
        # create dictionary of data with retrieval date
        dict_metadata = {"source": "Federal Register API, https://www.federalregister.gov/reader-aids/developer-resources/rest-api",
                         "endpoint": r"https://www.federalregister.gov/api/v1/agencies.json",
                         "date_retrieved": f"{date.today()}",
                         "count": len(self.transformed_data), 
                         "results": self.transformed_data
                        }
        
        if not path.exists():
            path.mkdir(parents=True, exist_ok=True)
        
        # export json file
        file_path = path / file_name
        with open(file_path, "w", encoding="utf-8") as f:
            json.dump(dict_metadata, f, indent=4)


def reorder_new_columns(df: DataFrame, original_columns: list, new_columns: list, after_column: str):
    index_loc = original_columns.index(after_column) + 1  # locate element after a specified column
    new_col_list = original_columns[:index_loc] + new_columns + original_columns[index_loc:]  # create new column list
    # insert new columns in specified location and return
    return df.reindex(columns = new_col_list)
    

class AgencyData:
    def __init__(
            self, 
            input_data: DataFrame, 
            metadata: dict, 
            schema: list = DEFAULT_AGENCY_SCHEMA, 
            columns: list[str] = ["agencies", "agency_names"]
        ) -> None:
        self.data = input_data
        self.metadata = metadata
        self.schema = schema
        self.agency_columns = columns
    
    def extract_values(self):
        values_dict = {}
        for col in self.agency_columns:
            values_dict.update({
                col: list(self.data.loc[:, col].to_numpy())
            })
        self.agency_column_values = values_dict
    
    def get_slugs(self):
        # loop over documents and extract agencies data
        slug_list = []  # empty lists for results
        for row, backup in zip(self.agency_column_values.get("agencies"), self.agency_column_values.get("agency_names")):
            slug_list.append(r.get("slug", r.get("name", f"{b}").lower().replace(" ","-")) for r, b in zip(row, backup))

        # clean slug list to only include agencies in the schema
        # there are some bad metadata -- e.g., 'interim-rule', 'formal-comments-that-were-received-in-response-to-the-nprm-regarding'
        # also ensure no duplicate agencies in each document's list by using set()
        slug_list_clean = [list(set(i for i in slug if i in self.schema)) for slug in slug_list]
        
        self.data.loc[:, "agency_slugs"] = slug_list_clean
        self.agency_slug_values = slug_list_clean
    
    def get_parents(self):
        parent_slugs = [k for k, v in self.metadata.items() if (v.get("parent_id") is None)]
        return parent_slugs
    
    def get_subagencies(self):
        subagency_slugs = [k for k, v in self.metadata.items() if (v.get("parent_id") is not None)]
        return subagency_slugs
    
    def get_agency_info(self, agency_slug: str, key: str):
        return self.metadata.get(agency_slug).get(key)
    
    def return_column_as_str(self, input_list):
        return ["; ".join(document) if document is not None else None for document in input_list]
    
    def process_agency_columns(
            self, 
            parent_slugs: list, 
            subagency_slugs: list, 
            return_format: str = "slug", 
            return_columns_as_str: bool = True
            ):
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
    
    def clean_agency_columns(self):
        # 2) generate two columns with unique top-level agency metadata:
        # a. list of unique top-level ids (i.e., parent_id for sub-agencies and agency_id for agencies without a parent)
        # b. list of slugs and list of acronyms that correspond to the top-level ids
        
        # create empty lists for results
        unique_parent_ids, unique_parent_slugs, unique_parent_acronyms, unique_parent_names = [], [], [], []
        
        # iterate over list of clean agency slugs
        for document in self.agency_slug_values:
            # a) create new column: list of unique top-level ids
            # iterate over parent_ids for each document
            # return parent_id for sub-agencies and agency_id for agencies with no parent
            # currently returns intermediate parent for parent agencies with parents
            ids = []
            for slug in document:
                parent_id = self.metadata[slug].get("parent_id")
                if parent_id is not None:
                    ids.append(parent_id)
                else:
                    ids.append(self.metadata[slug].get("id"))
                    
            ids = list(set(ids))  # use set() to keep only unique ids
            unique_parent_ids.append(ids)  # append to results list (a)
            
            # b) create 2 new columns: list of unique top-level slugs; list of unique acronyms
            # iterate over each document's unique_parent_ids
            # return slug for corresponding id from FR API's agencies endpoint
            slugs, acronyms, names = [], [], []
            for i in ids:
                # locate slug for each input id from agencies endpoint metadata
                slugs.extend(k for k, v in self.metadata.items() if v.get("id") == i)
                
                # locate acronym
                acronyms.extend(v.get("short_name") for v in self.metadata.values() if v.get("id") == i)
                
                # locate name
                names.extend(v.get("name") for v in self.metadata.values() if v.get("id") == i)
                
            # append to results list (b)
            unique_parent_slugs.append(slugs)
            unique_parent_acronyms.append(acronyms)
            unique_parent_names.append(names)
        
        self.data.loc[:, "parent_id_uq"] = unique_parent_ids
        self.data.loc[:, "parent_slug_uq"] = unique_parent_slugs
        self.data.loc[:, "parent_acronym_uq"] = unique_parent_acronyms
        self.data.loc[:, "parent_name_uq"] = unique_parent_names

    def get_independent_reg_agencies(
            self, 
            agency_column: str = "agency_slugs", 
            new_column: str = "independent_reg_agency", 
            independent_agencies: list | tuple = INDEPENDENT_REG_AGENCIES
        ):
        """Based on the definition of independent regulatory agencies defined in [44 U.S.C. 3502(5)](https://www.law.cornell.edu/uscode/text/44/3502)."""
        agencies = self.data.loc[:, agency_column].to_numpy()
        ira_list = [any(1 if agency in independent_agencies else 0 for agency in agency_list) for agency_list in agencies]
        self.data.loc[:, new_column] = [1 if ira else 0 for ira in ira_list]
    
    def preprocess_agencies(self, return_format: str = "slug"):
        self.extract_values()
        self.get_slugs()
        self.process_agency_columns(self.get_parents(), self.get_subagencies(), return_format=return_format)
        self.get_independent_reg_agencies()


# only query agencies endpoint when run as script; save that output 
if __name__ == "__main__":
    
    data_dir = Path(__file__).parents[1].joinpath("metadata")
    agencies_metadata = AgencyMetadata()
    agencies_metadata.get_metadata()
    agencies_metadata.transform()
    agencies_metadata.save_json(data_dir)
    
    #import requests
    #from pandas import read_csv
    
    #url = "https://www.federalregister.gov/api/v1/documents.json?fields[]=agencies&fields[]=agency_names&fields[]=document_number&fields[]=publication_date&per_page=20&order=oldest&conditions[publication_date][year]=2024&conditions[type][]=RULE"
    
    #response = requests.get(url)
    #results = response.json()["results"]
    
    #df = DataFrame(results)
    
    #agency_data = AgencyData(df, agencies_metadata.transformed_data)
    #agency_data.preprocess_agencies(return_format="name")
    #print(agency_data.data.head())
