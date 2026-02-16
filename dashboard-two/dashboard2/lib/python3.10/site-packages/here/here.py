import inspect
from pathlib import Path
from IPython import get_ipython


def get_calling_script_file_path(print_debug_info=False):
    """
    Get the file path of the script that called this function.
    Handles cases where the function is called from an installed package or in a Jupyter notebook.

    Args:
        print_debug_info (bool): If True, prints debug information about the call stack.

    Returns:
        str: The file path of the calling script, or the current working directory as a fallback.
    """
    # Check if running in a Jupyter notebook
    if "get_ipython" in globals() and hasattr(get_ipython(), "config"):
        if print_debug_info:
            print("Debug Info: Running in a Jupyter notebook. Returning current working directory.")
        return str(Path.cwd())

    stack = inspect.stack()

    # Debugging: Print the stack for inspection
    if print_debug_info:
        print("Debug Info: Full stack trace:")
        for frame in stack:
            print(f"  Frame: {frame.function}, File: {frame.filename}")

    # Find the first frame that is not part of the Python system or site-packages
    for frame in stack:
        if "site-packages" not in frame.filename and "python" not in frame.filename:
            if print_debug_info:
                print(f"Debug Info: Found calling script: {frame.filename}")
            return str(Path(frame.filename).resolve().parent)

    # Fallback: Return the current working directory
    if print_debug_info:
        print(
            "Debug Info: No valid calling script found. Falling back to current working directory."
        )
    return str(Path.cwd())


def here(path="", print_debug_info=False):
    """
    Resolves a given path relative to the root directory.

    Args:
        path (str): A string representing the relative path to resolve.
        print_debug_info (bool): If True, prints debug information.

    Returns:
        str: The resolved full path.
    """
    root_directory = Path(get_calling_script_file_path(print_debug_info))
    resolved_path = root_directory.joinpath(*path.split("/")).resolve()
    if print_debug_info:
        print(f"Debug Info: Resolving path '{path}' relative to root directory '{root_directory}'.")
        print(f"Debug Info: Resolved path is '{resolved_path}'.")
    return str(resolved_path)


if __name__ == "__main__":
    # Example usage
    print("File Working Directory:", get_calling_script_file_path(print_debug_info=True))
    print()
    print("Resolved Path of subfolders data/output:", here("data/output", print_debug_info=True))
    print()
    print(
        "Resolved Path with config folder parallel to Parent:",
        here("../config", print_debug_info=True),
    )
