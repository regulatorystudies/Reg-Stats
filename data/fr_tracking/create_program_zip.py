from pathlib import Path
import shutil
import sys

from rule_tracking.version import __release__


class MissingPathError(Exception):
    pass


def get_sys_platform(sys_platform: str = sys.platform):
    
    if sys_platform.startswith("win"):
        acronym = "win"
    elif sys_platform.startswith("darwin"):
        acronym = "macos"
    elif sys_platform.startswith("linux"):
        acronym = "linux"
    else:
        acronym = sys_platform
    return acronym


def move_dist(program_name: str):
    
    p = Path(__file__)
    dist_path = p.parent.joinpath(f"{program_name}.dist")
    new_dist_path = p.parent.joinpath(program_name, f"{program_name}.dist")
    program_path = p.parent.joinpath(program_name)
    
    if not program_path.exists():
        program_path.mkdir()
    
    if dist_path.exists():
        dir_res = shutil.copytree(dist_path, new_dist_path, dirs_exist_ok=True)
        print(f"Copied {Path(dir_res).name} to new directory and deleted old directory.")
        return {
            "dist_path": dist_path, 
            "new_dist_path": new_dist_path, 
            "program_path": program_path
            }
    else:
        print("No program to copy.")


def clean_folders(program_path: Path, folders: list | tuple = ("", )):
    for folder in folders:
        dir_list = []
        for obj in program_path.joinpath(folder).rglob("*.csv"):
            if obj.is_file():
                obj.unlink()
            elif obj.is_dir():
                dir_list.append(obj)
        for dir in dir_list:
            dir.rmdir()


def create_zip(
        program_name: str, 
        path_dict: dict = None, 
        supply_path: bool = False, 
        **kwargs
    ):
    
    if supply_path:
        program_path = kwargs.get("program_path")
    elif (not supply_path) and (path_dict is not None):
        program_path = path_dict.get("program_path")
    else:
        raise MissingPathError("No program path supplied.")
    
    clean_folders(program_path)
    zip_res = shutil.make_archive(f"{program_name}_{get_sys_platform()}", "zip", program_path)
    if Path(zip_res).exists():
        print(f"Created zip file at {zip_res}.")
        return True
    else:
        return False


def create_release(release_info: dict | str, file_path: Path, system = sys.platform):
    
    system_list = [f"system: {system}"]
    if isinstance(release_info, str):
        release_list = [f"version: {release_info}"]
    elif isinstance(release_info, dict):
        release_list = [f"{k}: {v}" for k, v in release_info.items()]           
    else:
        raise TypeError("Parameter 'release_info' only accepts type `dict` or `str`.")
        
    with open(file_path / "RELEASE.txt", "w", encoding="utf-8") as f:
        f.write("\n".join(release_list + system_list) + "\n")


def main(
        program_name: str, 
        zip_only_ok: bool = True, 
        default_path = Path(__file__).parent
    ):
    
    create_release(__release__, file_path=default_path.joinpath(program_name))
    path_dict = move_dist(program_name)
    if path_dict is not None:
        zipped = create_zip(program_name, path_dict=path_dict)
        dist_path = path_dict.get("dist_path")
        shutil.rmtree(dist_path)
    elif (path_dict is None) and zip_only_ok:
        program_path = default_path.joinpath(program_name)
        zipped = create_zip(program_name, supply_path=True, program_path=program_path)
    else:
        zipped = False
        print("Failed to create zip file.")
    return zipped


if __name__ == "__main__":
    
    #program_path = Path(__file__).parent.joinpath("test_program")
    #clean_folders(program_path)
    main("retrieve_rules_program")
