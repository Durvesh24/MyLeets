class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        l = []
        cnt = 0
        for i in nums:
            if i == 0:
                l.append(cnt)
                cnt = 0
            else:
                cnt += 1
            l.append(cnt)
        return max(l)