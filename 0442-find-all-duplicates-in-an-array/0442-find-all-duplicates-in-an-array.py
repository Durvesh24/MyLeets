from collections import Counter
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        c = Counter(nums)
        res = []
        for i, n in c.items():
            if n>1:
                res.append(i)
        return res