# no imports; all native python


def extract_docket_info(document: dict, 
                        key: str = "regulations_dot_gov_info"):
    
    docket_info = document.get(key, {})
    
    values = []
    if len(docket_info) == 0:
        values = None
    elif isinstance(docket_info, list):
        for docket in docket_info:
            values.append(docket.get('docket_id'))
    elif isinstance(docket_info, dict):
        values.append(docket_info.get('docket_id'))

    if values is not None:
        values = "; ".join(v for v in values if v is not None)
    
    return values


def create_docket_keys(document: dict, 
                       values: tuple = None):
    
    document_copy = document.copy()
        
    document_copy.update({
        "docket_id": values, 
        })
    
    return document_copy
