class Solution:
    def repeatedCharacter(self, s: str) -> str:
        cnt = []
        for i in s:
            if i in cnt:
                return i
            cnt.append(i)        