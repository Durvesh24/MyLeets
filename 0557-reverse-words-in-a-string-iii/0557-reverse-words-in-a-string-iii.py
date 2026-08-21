class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ""
        l=s.split(" ")
        for word in l:
            ans+=word[::-1]+" "
        return ans[:-1]