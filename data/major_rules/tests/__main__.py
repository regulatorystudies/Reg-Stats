from .tests import (
    ALL_TESTS, 
    cleanup, 
    scraper_examples, 
    )

if __name__ == "__main__":
    
    for func in ALL_TESTS:
        func()
    
    # deletes test files
    cleanup()
    
    print("Tests complete.")
    
    scraper_examples()
