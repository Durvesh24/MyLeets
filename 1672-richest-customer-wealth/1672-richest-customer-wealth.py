class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max = 0
        for cus in accounts:
            if sum(cus)>max:
                max = sum(cus)
        return max