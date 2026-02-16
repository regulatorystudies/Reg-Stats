# Dashboard two steps 

## make sure to create the virtual env
```aiignore
# Create the environment
python -m venv dashboard2

# Activate it
# On macOS/Linux:
source dashboard2/bin/activate

# On Windows:
# dashboard2\Scripts\activate
```
## Install dependencies 
```aiignore
pip install -r requirements.txt
```
## Connect the virtual env to the Jupyter Notebook
```aiignore
python -m ipykernel install --user --name=dashboard2 --display-name "dashboard2"
```



