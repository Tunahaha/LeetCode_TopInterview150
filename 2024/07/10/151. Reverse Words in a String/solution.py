class Solution:
    def reverseWords(self, s: str) -> str:
        new_s = s.split()[::-1]
        return " ".join([i for i in new_s])
        