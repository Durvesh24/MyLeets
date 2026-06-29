from collections import Counter
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        cnt = Counter(nums)
        for i, n in cnt.items():
            if n == 1:
                return i
        