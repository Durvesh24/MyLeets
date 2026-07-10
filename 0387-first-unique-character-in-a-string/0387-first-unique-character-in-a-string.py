from collections import Counter
class Solution:
    def firstUniqChar(self, s: str) -> int:
        c = Counter(s)
        for i,n in c.items():
            if n==1:
                return s.find(i)
        return -1