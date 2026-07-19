class Solution:
    def isWinner(self, player1: List[int], player2: List[int]) -> int:
        s1 = player1[0]
        s2 = player2[0]
        for i in range(1, len(player1)):
            s1 += player1[i]
            s2 += player2[i]
            if player1[i-1]==10 or (i>1 and player1[i-2]==10) :
                s1 += player1[i]
            if player2[i-1]==10 or (i>1 and player2[i-2]==10) :
                s2 += player2[i]
            
        if s1>s2 : return 1
        elif s1<s2 : return 2
        else: return 0
