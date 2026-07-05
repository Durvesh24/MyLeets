class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        c = 0
        n = 101
        for i in range(1, len(nums)):
            if nums[i-1] == nums[i] or nums[i]==n:
                n = nums[i]
                nums[i] = 101
                c+=1
        nums.sort()
        return len(nums)-c
        