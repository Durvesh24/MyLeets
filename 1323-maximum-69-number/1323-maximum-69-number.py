class Solution:
    def maximum69Number (self, num: int) -> int:
        n = str(num)
        l = list(n)
        for i in range(len(l)):
            if l[i] == '6':
                l.remove(l[i])
                l.insert(i,'9')
                s1 = ''.join(l)
                return int(s1)
        return num
            
        
            