class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        sm = nums[0]
        
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]+1:
                sm += nums[i]
            else:
                break
        seen = set(nums)
        ans = sm
        while ans in seen:
            ans+=1
        return ans