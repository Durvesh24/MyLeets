import pandas as pd

def biggest_single_number(my_numbers: pd.DataFrame) -> pd.DataFrame:
    res = my_numbers.drop_duplicates(keep=False).max()
    return res.to_frame(name='num')