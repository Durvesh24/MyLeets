class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        m = min(a,b)
        cf = []
        if max(a,b) % m==0:
            cf.append(max(a,b))
        for i in range(1, (m//2)+1):
            if a%i==b%i==0:
                cf.append(i)
        return len(cf)