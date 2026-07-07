class Solution:
    def sumAndMultiply(self, n: int) -> int:
        sum = 0
        x = 0
        for i in str(n):
            if i != '0':
                d = int(i)
                x = x*10 + d
                sum += d
        return x*sum