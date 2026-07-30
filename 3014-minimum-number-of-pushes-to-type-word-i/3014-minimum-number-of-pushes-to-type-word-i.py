class Solution:
    def minimumPushes(self, word: str) -> int:
        n =len(word)
        cnt = 0
        if n<9:
            return n
        elif n<17:
            cnt = 8+(n-8)*2
        elif n<25:
            cnt = 8 + 8*2 + (n-16)*3
        else:
            cnt = 8 + 8*2 + 8*3 + (n-24)*4
        return cnt
        
