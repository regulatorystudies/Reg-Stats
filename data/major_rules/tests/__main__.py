from .tests import ALL_TESTS

if __name__ == "__main__":
    
    for func in ALL_TESTS:
        func()
    
    print("Tests complete.")
