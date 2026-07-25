class Solution:
    def maxProduct(self, n: int) -> int:
        l = list(str(n))
        l.sort()
        return int(l[-1])*int(l[-2])