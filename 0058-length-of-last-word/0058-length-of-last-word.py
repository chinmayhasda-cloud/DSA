class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l=s.split()[-1]
        n=len(l)
        return n
        