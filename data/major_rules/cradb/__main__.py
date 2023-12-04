from pathlib import Path
from .scraper import main

# profile time elapsed
import time
start = time.process_time()

p = Path(__file__)
data_path = p.parents[1].joinpath("raw_data")
if not data_path.is_dir():
    data_path.mkdir(parents=True, exist_ok=True)

while True:
    
    # print prompts to console
    major_prompt = input("Retrieve only major rules? [yes/no]: ").lower()
    new_prompt = input("Retrieve only new rules (i.e., those received by GAO since last retrieval date)? [yes/no]: ").lower()
    detail_prompt = input("Retrieve rule-level details? [yes/no]: ").lower()
    
    # check user inputs
    y_inputs = ["y", "yes", "true"]
    n_inputs = ["n", "no", "false"]
    valid_inputs = y_inputs + n_inputs
    if ((major_prompt in valid_inputs) 
        and (new_prompt in valid_inputs) 
        and (detail_prompt in valid_inputs)):
        
        # set major_only param
        if major_prompt.lower() in y_inputs:
            major_only = True
            file_name = "population_major"
        elif major_prompt.lower() in n_inputs:
            major_only = False
            file_name = "population_all"
        
        # set new_only param
        if new_prompt.lower() in y_inputs:
            new_only = True
            #file_name = input("Enter file name of existing dataset (i.e., 'population_major'): ")
        elif new_prompt.lower() in n_inputs:
            new_only = False
            #file_name = "population_"

        if detail_prompt.lower() in y_inputs:
            rule_detail = True
        elif detail_prompt.lower() in n_inputs:
            rule_detail = False
        
        # call scraper pipeline
        main(data_path, major_only=major_only, new_only=new_only, path=data_path, rule_detail=rule_detail, file_name=file_name)
        break

    else:
        print(f"Invalid input. Must enter one of the following: {', '.join(valid_inputs)}.")

# calculate time elapsed
stop = time.process_time()
print(f"CPU time: {stop - start:0.1f} seconds")
