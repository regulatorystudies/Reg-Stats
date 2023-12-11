if __name__ == "__main__":
    
    from pathlib import Path
    from .scraper import scraper
    from .process_data import process_data

    # profile time elapsed
    import time
    start = time.process_time()

    p = Path(__file__)
    root_path = p.parents[1]
    data_path = p.parents[1].joinpath("raw_data")
    if not data_path.is_dir():
        data_path.mkdir(parents=True, exist_ok=True)

    while True:
        
        prompt = input("Do you want to retrieve data [r], process data [p], or both [b]? Enter selection [r/p/b]: ").lower()

        retrieve = ("r", "retrieve")
        process = ("p", "process")
        both = ("b", "both")
        valid_inputs = retrieve + process + both
        
        if prompt in retrieve:
            scraper(data_path)
            break
        elif prompt in process:
            process_data(data_path, root_path)
            break
        elif prompt in both:        
            status = scraper(data_path)
            if status == True:
                process_data(data_path, root_path)
            elif status == False:
                print(
                    "Exiting program. Can't process data without retrieving rule-level details.", 
                    "\n", 
                    "Only rule-level webpages contain data on published dates.", 
                    sep=""
                    )
            elif status is None:
                print("Exiting program. To process existing data, run the program again and enter [p/process].")
            break
        else:
            print(f"Invalid input. Must enter one of the following: {', '.join(valid_inputs)}.")

    # calculate time elapsed
    stop = time.process_time()
    print(f"CPU time: {stop - start:0.1f} seconds")
