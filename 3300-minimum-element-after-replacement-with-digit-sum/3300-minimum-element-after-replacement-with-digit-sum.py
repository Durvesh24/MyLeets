class Solution:
    def minElement(self, nums: List[int]) -> int:
        arr = []
        for num in nums:
            s = 0
            for i in str(num):
                s += int(i)
            arr.append(s)
        return min(arr)