class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l=s.split()[-1]
        return len(l)
        
        