import pandas as pd

def find_employees(employee: pd.DataFrame) -> pd.DataFrame:
    managers = employee[['id', 'salary']].rename(
        columns={'id': 'managerId', 'salary': 'manager_salary'}
    )

    merger = employee.merge(managers, on='managerId', how='inner')
    return merger[merger['salary']>merger['manager_salary']][['name']].rename(columns={'name': 'Employee'})
