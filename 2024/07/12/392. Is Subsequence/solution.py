class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if s == '':
            return True

        index = 0
        for i in t:
            if i == s[index]:
                index += 1
                if index == len(s):
                    return True

        return False
            