import pandas as pd

def sales_person(sales_person: pd.DataFrame, company: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    df = pd.merge(
        sales_person, orders,
        on = 'sales_id',
        how = 'left'
    )
    df = pd.merge(
        company, df,
        on = 'com_id',
        how = 'left'
    )
    redSales = df[df['name_x']=='RED']['sales_id']
    return sales_person[~sales_person['sales_id'].isin(redSales)][['name']]