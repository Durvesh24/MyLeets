class Solution:
    def isHappy(self, n: int) -> bool:
        for j in range(9):
            s = 0
            for i in str(n):
                s += int(i)*int(i)
            n = s
        return n==1