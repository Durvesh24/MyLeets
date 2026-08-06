class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        def prod(a):
            p = 1
            while a!=0:
                p*=a%10
                a=a//10
            return p
        p = prod(n)
        while(True):
            if p%t==0:
                return n
            else:
                n+=1
                p=prod(n)