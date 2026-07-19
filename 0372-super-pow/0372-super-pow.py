class Solution:
    def superPow(self, a: int, b: List[int]) -> int:
        s="".join(list(map(str,b)))
        return pow(a, int(s),1337)
        