class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        num = set(nums)
        i = 1
        while True:
            if i not in num:
                return i
                break
            i += 1