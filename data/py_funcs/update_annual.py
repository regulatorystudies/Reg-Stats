#%%
from reginfo import *
from frcount import *
from party import *
from agencies import *

#%% test
#import pprint
agency_dict = parse_reginfo_xml(xml_file_path)
#pprint.pprint(agency_dict)

#%% Function to collect data for years that need to be updated
def update_data(dir_path,col_update,first_year_to_update,last_year_to_update,rule_type,check,acronym=''):
    if first_year_to_update>2020:
        print(f"Collecting data from FR tracking for presidential years {first_year_to_update}-{last_year_to_update}...")
        new_data_dict=count_fr_annual(dir_path,first_year_to_update,last_year_to_update,rule_type,acronym)
    else:    
        print(f"Collecting data from reginfo.gov for presidential years {first_year_to_update}-2020...")
        if acronym=='':
            agency_code = '0000'
        else:
            agency_code=agency_dict[acronym][1]
        new_data_dict=count_reginfo_annual(first_year_to_update,2020,agency_code,rule_type)
        print(f"Collecting data from FR tracking for presidential years 2021-{last_year_to_update}...")
        new_data_dict= new_data_dict | count_fr_annual(dir_path,2021,last_year_to_update,rule_type,acronym)

    # Convert to dataframe
    df_new=pd.DataFrame(new_data_dict.items(),columns=['Presidential Year (February 1 - January 31)',
                                                        col_update])

    # Add presidential party
    df_new['Presidential Party']=df_new['Presidential Year (February 1 - January 31)'].apply(input_party)
        
    # Add agency name and acronym
    if acronym!='':
        df_new['Agency Name']=agency_dict[acronym][0]
        df_new['Agency Acronym']=acronym
    else:
        pass
            
    return df_new

#%% Function to verify previous data
def verify_previous_data(dir_path,df,col_update,earliest_year,last_year_with_data,rule_type,check,acronym=''):
    if check=='y':
        print('Data for previous years will be recollected and verified.')
        # Re-collect data
        if acronym=='':
            agency_code = '0000'
        else:
            agency_code=agency_dict[acronym][1]
            
        if last_year_with_data<2021:
            print(f"Verifying {acronym} data from reginfo.gov for presidential years {earliest_year}-{last_year_with_data}...")
            old_data_updated=count_reginfo_annual(earliest_year,last_year_with_data,agency_code,rule_type)
        else:
            print(f"Verifying {acronym} data from reginfo.gov for presidential years {earliest_year}-2020...")
            old_data_updated=count_reginfo_annual(earliest_year,2020,agency_code,rule_type)
            print(f"Verifying {acronym} data from FR tracking for presidential years 2021-{last_year_with_data}...")
            old_data_updated=old_data_updated | count_fr_annual(dir_path,2021,last_year_with_data,rule_type,acronym)

        # Compare with the original data
        print('Comparing newly collected data with original data. Differences (if any) will be shown here.')
        if acronym =='':
            old_data_original=dict(zip(df['Presidential Year (February 1 - January 31)'],
                                   df[col_update].fillna(-1).astype('int')))
        else:
            old_data_original=dict(zip(df[df['Agency Acronym']==acronym]['Presidential Year (February 1 - January 31)'],
                                   df[df['Agency Acronym']==acronym][col_update].fillna(-1).astype('int')))
        for k in old_data_updated:
            if k in old_data_original:
                if old_data_updated[k]!=old_data_original[k]:
                    print(f'Value for {k} has been updated from {old_data_original[k] if old_data_original[k]>=0 else None} to {old_data_updated[k]}.')
                else:
                    pass
            else:
                print(
                    f'Value for {k} has been updated from None to {old_data_updated[k]}.')
        print('All previous data have been verified.')

        # Convert re-collected data to dataframe and replace the original data
        df=pd.DataFrame(old_data_updated.items(),columns=['Presidential Year (February 1 - January 31)',
                                                          col_update])
        # Add presidential party
        df['Presidential Party'] = df['Presidential Year (February 1 - January 31)'].apply(input_party)
        
        # Add agency name and acronym
        if acronym !='':
            df['Agency Name']=agency_dict[acronym][0]
            df['Agency Acronym']=acronym
        else:
            pass

    else:
        pass

    return df

#%% Main function to update annual (economically) significant rules
def main(dir_path,file_path,earliest_year,rule_type,check=None,acronym=''):
    # acronym='' is the default value if no particular agency is specified (in other words, all agencies)
    
    #%% Define column name to update
    col_update="Economically Significant Rules Published" if rule_type=="es" else "Significant Rules Published"

    # %% Import the current dataset
    if os.path.exists(file_path):
        # Read the dataset if existing
        df = pd.read_csv(file_path)
        # The latest data-year in the current dataset
        last_year_with_data = int(df[df[col_update].notnull()] \
                                        ['Presidential Year (February 1 - January 31)'].iloc[-1])
        # Pre-determine if data for previous years need to be recollected
        if (df[col_update].isnull().any()) or \
                (df['Presidential Year (February 1 - January 31)'].iloc[0] > earliest_year):
            check = 'y'
        else:
            pass
    else:
        # Create a file
        if acronym == '':
            df = pd.DataFrame(columns=['Presidential Year (February 1 - January 31)',
                                   'Presidential Party',
                                   col_update])
            last_year_with_data = earliest_year - 1
        else:
            df = pd.DataFrame(columns=['Agency Name',
                                   'Agency Acronym',
                                   'Presidential Year (February 1 - January 31)',
                                   'Presidential Party',
                                   col_update])
            last_year_with_data = earliest_year - 1
            
    # %% Find years to be updated (if any)
    # Years to be updated
    current_year = date.today().year
    
    if last_year_with_data < current_year - 1:
        first_year_to_update = max(last_year_with_data + 1, earliest_year)
        last_year_to_update = current_year - 1
        print(f'{acronym} data update is needed for presidential year {first_year_to_update}-{last_year_to_update}.')
        # Update data
        df_new = update_data(dir_path,col_update,first_year_to_update,last_year_to_update,rule_type,check,acronym)

        # Verify previous data? PULL OUT AND TURN INTO FUNCTION
        if first_year_to_update > earliest_year:
            # Verify previous data?
            if check!=None:
                df = verify_previous_data(dir_path,df,col_update,earliest_year,last_year_with_data,rule_type,check,acronym)
            else:
                check = input(
                    f'Do you want to verify/update all the previous data (it may take a few minutes)? [Y/N] >>> ')
                check = 'y' if (check.lower() in ['y', 'yes']) else 'n'
                df = verify_previous_data(dir_path,df,col_update,earliest_year,last_year_with_data,rule_type,check,acronym)

            # Append new data
            df_output = pd.concat([df[df[col_update].notnull()],df_new], ignore_index=True)
        else:
            df_output = df_new

    else:
        print(f'The {acronym} dataset is up-to-date. No update is needed.') # change this to data instead of dataset and specify for a particular year
        # add another check-like flag here to stop contradictory print statements? "No update is needed" followed by "updating data"?
        # Verify previous data? PULL OUT AND TURN INTO FUNCTION (same as what was done directly above)
        if check!=None:
            df_output = verify_previous_data(dir_path,df,col_update,earliest_year,last_year_with_data,rule_type,check,acronym)
        else:
            check = input(
                f'Do you want to verify/update all the previous data (it may take a few minutes)? [Y/N] >>> ')
            check = 'y' if (check.lower() in ['y', 'yes']) else 'n'
            df_output = verify_previous_data(dir_path,df,col_update,earliest_year,last_year_with_data,rule_type,check,acronym)

    # %% Reorder columns
    if acronym == '':
        df_output = df_output[['Presidential Year (February 1 - January 31)',
                            'Presidential Party',
                            col_update]]
    else:
        df_output = df_output[['Agency Name',
                                'Agency Acronym',
                                'Presidential Year (February 1 - January 31)',
                                'Presidential Party',
                                col_update]]
        

    return df_output,check