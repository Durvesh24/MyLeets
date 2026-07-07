from collections import Counter
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        l = Counter(nums)
        for i, n in l.items():
            if n>=2:
                return i