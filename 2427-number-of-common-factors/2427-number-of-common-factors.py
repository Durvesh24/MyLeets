class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        m = min(a,b)
        c=0
        if max(a,b) % m==0:
            c+=1
        for i in range(1, (m//2)+1):
            if a%i==b%i==0:
                c+=1
        return c