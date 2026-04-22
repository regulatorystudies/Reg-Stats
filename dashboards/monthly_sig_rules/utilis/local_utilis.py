import os
import shutil
import glob
import re
import math
import pandas as pd
import numpy as np
from PIL import Image
import matplotlib.offsetbox as offsetbox
from adjustText import adjust_text


def get_png(filename):
    img = Image.open(filename)
    return offsetbox.OffsetImage(img, zoom=0.1)

def copy_all_data(path, new_path, file_type="*.csv", ignore_pattern=r"fr_tracking.*\.csv", report=True):
    # fr_tracking is kept as ignore so that all the fr_tracking files are not added here
    # fr_tracking files are used to make other csv so we do ignore them
    file_list = glob.glob(os.path.join(path, "**", file_type), recursive=True)
    regex = re.compile(ignore_pattern)
    filtered_list = [f for f in file_list if not regex.search(os.path.basename(f))]
    for f in filtered_list:
        shutil.copy2(f, new_path)
    if report:
        print(f"Copied {len(filtered_list)} files.")

def copy_dataset(file_name, search_path,new_path):
    ext = os.path.splitext(file_name)[1]
    search_pattern = os.path.join(search_path, "**", f"*{ext}")
    search_files = glob.glob(search_path, recursive=True)

    matches = [f for f in search_files if file_name.lower() in f.lower()]
    if matches:
        for f in matches:
            shutil.copy2(f, new_path)
            print(f"Copied file: {file_name}")
        else:
            print("No file found")

def xbreaks(dataset, denom, col_name):
    col_min = dataset[col_name].min()
    col_max = dataset[col_name].max()
    step = (col_max - col_min)/ denom
    return [round(x) for x in list(pd.np.arange(col_min, col_max + step))]

def ydynam(dataset, interval, col_name):
    col_max = dataset[col_name].max()
    if interval == 1:
        return col_max + interval
    else:
        return math.ceil(col_max / interval) * interval
def geom_label_repel_RSC(**kwargs):
    from plotnine import geom_label
    kwargs.setdefault('family', 'avenir_lt_pro')
    return geom_label(**kwargs)



