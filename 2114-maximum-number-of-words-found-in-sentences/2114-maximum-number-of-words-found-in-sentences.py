class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        cnts = []
        for s in sentences:
            t = s.split(' ')
            cnts.append(len(t))
        return max(cnts)