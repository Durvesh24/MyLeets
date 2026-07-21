from math import sqrt
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        s = sqrt(num)
        return int(s) == s