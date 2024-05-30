import asyncio
from datetime import date

from shiny import reactive
from shiny.express import input, render, ui

from retrieve_rules import retrieve_rules


ui.page_opts(title="Retrieve Rules for FR Tracking", fillable=True)

ui.input_date_range("input_dates", "Date range:") #, start=date.today(), end=date.today()) #, width="100%")

#with ui.accordion(open=False):
    
    #with ui.accordion_panel("Download Data"):
@render.download(label="Download Data as CSV", filename=f"fr_tracking_results_retrieved_{date.today()}.csv")
async def download():
    await asyncio.sleep(0.25)
    yield get_data().to_csv(index=False)


ui.input_action_button("view", "Browse Data", )


@render.data_frame
@reactive.event(input.view)
def table_of_rules():
    df = get_data()
    #df.loc[]
    show_columns = ["publication_date", "department", "agency", "title", "action", "citation", "document_number"]    
    return render.DataGrid(df.loc[:, [c for c in show_columns if c in df.columns]], width="100%")


@reactive.calc
def get_data():
    return retrieve_rules(*input.input_dates())


@reactive.calc
def get_filename():
    pass
    #return f"fr_tracking_{'_'.join(*input.input_dates())}"

