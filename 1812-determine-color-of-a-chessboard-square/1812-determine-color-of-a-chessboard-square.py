class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        odds = ['a', 'c', 'e', 'g']
        n = int(coordinates[1])
        if coordinates[0] in odds:
            if n%2 != 0:
                return False
        else:
            if n%2 == 0:
                return False 
        return True