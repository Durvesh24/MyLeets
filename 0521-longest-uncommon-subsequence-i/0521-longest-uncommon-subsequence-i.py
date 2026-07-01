class Solution:
    def findLUSlength(self, a: str, b: str) -> int:
        if a in b and len(a)==len(b):
            return -1
        return max(len(a),len(b))