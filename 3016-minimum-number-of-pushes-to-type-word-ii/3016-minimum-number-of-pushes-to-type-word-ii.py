class Solution:
    def minimumPushes(self, word: str) -> int:
        cnt =[0]*26
        for ch in word:
            cnt[ord(ch)-ord('a')]+=1
        cnt.sort(reverse=True)
        m = 0
        for i in range(26):
            m += cnt[i] * (i // 8 + 1)
        return m