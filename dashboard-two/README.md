# Monthly Significant rules by administration
This dashboard helps the user with keeping the track of monthly significant rules made by administration by giving options to choose the administration and the time period they want using the slider <br>
Also the created custom plot can be downloaded using the given data download button in two formats (PNG and PDF)<br>
Data download button is also provided in the dashboard 

## Make sure to create the virtual env in your root directory 
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

## Install dependancies 
```aiignore
pip install requirements.txt
```
## TO run the app
```aiignore
streamlit run app.py
```