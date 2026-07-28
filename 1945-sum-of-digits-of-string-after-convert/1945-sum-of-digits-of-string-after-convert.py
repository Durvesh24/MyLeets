class Solution:
    def getLucky(self, s: str, k: int) -> int:
        t = ''
        for i in s:
            t += str(ord(i)-96)
        num = int(t)
        for z in range(k):
            sm = 0
            for i in str(num):
                sm += int(i)
            num = sm
        return num