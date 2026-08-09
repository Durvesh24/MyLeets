import pandas as pd

def largest_orders(orders: pd.DataFrame) -> pd.DataFrame:
    df = orders.mode().dropna()
    return df[['customer_number']]