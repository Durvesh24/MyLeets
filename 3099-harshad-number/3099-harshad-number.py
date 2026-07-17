class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        s = 0
        n = x
        while n!=0:
            l = n%10
            s+=l
            n=n//10
        if x%s == 0:
            return s
        else:
            return -1