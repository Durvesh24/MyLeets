class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        c = 0
        for i, n in enumerate(nums):
            if n == val:
                nums[i] = 50
                c+=1
        nums.sort()
        return len(nums)-c