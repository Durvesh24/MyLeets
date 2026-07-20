class Solution:
    def canReach(self, start: list[int], target: list[int]) -> bool:
        def check(arr):
            if arr[0]%2!=0:
                if arr[1]%2!=0:
                    return 0
            else:
                if arr[1]%2==0:
                    return 0
            return 1
        
        return check(start)==check(target)