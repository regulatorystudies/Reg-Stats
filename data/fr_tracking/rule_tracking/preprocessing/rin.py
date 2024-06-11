# no imports; all native python


def extract_rin_info(document: dict, 
                     key: str = "regulation_id_number_info"):
    
    rin_info = document.get(key, {})
    
    tuple_list = []
    if len(rin_info)==0:
        tuple_list.append(None)
    else:
        for k, v in rin_info.items():
            if v:
                n_tuple = (k, v.get('priority_category'), v.get('issue'))
            else:
                n_tuple = (k, '', '')
                
        tuple_list.append(n_tuple)
        try:
            tuple_list.sort(reverse=True, key=lambda x: x[2])
        except IndexError:
            pass
    
    # only return RIN info from most recent Unified Agenda issue
    return tuple_list[0]


def create_rin_keys(document: dict, 
                    values: tuple = None):
    """_summary_

    Args:
        document (dict): _description_
        values (_type_, optional): _description_. Defaults to None.
    """    
    document_copy = document.copy()
    
    # source: rin_info tuples (RIN, Priority, UA issue)
    if not values:
        document_copy.update({
            "rin": None, 
            "rin_priority": None
            })
    else:
        document_copy.update({
            "rin": values[0], 
            "rin_priority": values[1]
            })
    
    return document_copy
