class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        m = 1
        s = 0
        for i in nums:
            s += i
            if s<m and s!=0:
                m = s
        if m<0:
            return (m*-1)+1
        return m