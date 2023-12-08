if __name__ == "__main__":
    
    from pathlib import Path
    from .scraper import main

    # profile time elapsed
    import time
    start = time.process_time()

    p = Path(__file__)
    data_path = p.parents[1].joinpath("raw_data")
    if not data_path.is_dir():
        data_path.mkdir(parents=True, exist_ok=True)

    main(data_path)

    # calculate time elapsed
    stop = time.process_time()
    print(f"CPU time: {stop - start:0.1f} seconds")
