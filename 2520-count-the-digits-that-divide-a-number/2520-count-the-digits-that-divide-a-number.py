class Solution:
    def countDigits(self, num: int) -> int:
        n = num
        cnt = 0
        while n > 0:
            l = n%10
            n = n//10
            if num % l== 0:
                cnt+=1
        return cnt