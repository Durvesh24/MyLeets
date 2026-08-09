import pandas as pd

def game_analysis(activity: pd.DataFrame) -> pd.DataFrame:
    grp = activity.groupby('player_id').agg(first_login = ('event_date', 'min')).reset_index()
    return grp[['player_id', 'first_login']]