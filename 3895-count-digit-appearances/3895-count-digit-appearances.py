class Solution:
    def countDigitOccurrences(self, nums: list[int], digit: int) -> int:
        cnt = 0
        for num in nums:
            while num>0:
                l = num%10
                num = num//10
                if l == digit:
                    cnt += 1
        return cnt