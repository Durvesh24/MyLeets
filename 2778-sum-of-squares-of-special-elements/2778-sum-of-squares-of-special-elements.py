class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        n = len(nums)
        sm = 0
        for i in range(len(nums)):
            if n%(i+1)==0:
                sm += nums[i]*nums[i]
        return sm