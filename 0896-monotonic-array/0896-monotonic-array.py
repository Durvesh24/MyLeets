class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        inc = True
        dcr = True
        for i in range(1, len(nums)):
            if nums[i]<nums[i-1]:
                inc = False
            elif nums[i]>nums[i-1]:
                dcr = False
            if not inc and not dcr:
                break
        return inc or dcr 