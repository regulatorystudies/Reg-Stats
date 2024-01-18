from pathlib import Path
import subprocess

try:
    import oyaml as yaml
except ModuleNotFoundError:
    import yaml

# base call to create env yml
base_call = ["conda", "env", "export"]

# no builds flag removes build information from yml
no_builds = ["--no-builds"]
process_1 = subprocess.run(base_call + no_builds, shell=True, capture_output=True, text=True)

# from history flag only documents packages explicitly imported
from_history = ["--from-history"]
process_2 = subprocess.run(base_call + from_history, shell=True, capture_output=True, text=True)

envs = []
for process in (process_1, process_2):
    env_yml = yaml.safe_load(process.stdout)
    envs.append(env_yml)

all_with_versions = envs[0].get("dependencies")
history_no_versions = envs[1].get("dependencies")

conda_list = [dep for dep in all_with_versions if (isinstance(dep, str)) and ((dep.split("=")[0] in history_no_versions) or (dep.startswith("pip")))]
pip_list = [dep for dep in all_with_versions if (isinstance(dep, dict))]
env_list = conda_list + pip_list

new_yml = envs[0].copy()
new_yml.update({"dependencies": env_list})

p = Path(__file__).parent
new_file = p / "environment.yml"
with open(new_file, "w") as f:
    yaml.dump(new_yml, stream=f)
