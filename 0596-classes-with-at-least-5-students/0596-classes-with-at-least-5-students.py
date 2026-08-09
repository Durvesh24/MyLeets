import pandas as pd

def find_classes(courses: pd.DataFrame) -> pd.DataFrame:
    stat = courses.groupby('class').count().reset_index()
    return stat[stat['student']>=5][['class']]