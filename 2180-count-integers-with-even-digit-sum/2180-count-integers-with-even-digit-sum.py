class Solution:
    def countEven(self, num: int) -> int:
        cnt=0
        for i in range(1, num+1):
            sm=0
            while i>0:
                l=i%10
                i=i//10
                sm+=l
            
            if sm%2==0:
                cnt+=1
        return cnt