class Solution:
    def longestPalindrome(self, s: str) -> str:
        def palindrome(i,j):
            while i>=0 and j<=n and s[i] == s[j]:
                i-=1
                j+=1
            return s[i+1: j]
        if len(s)<=1:
            return s
        max_str = s[0]
        n = len(s)-1
        for i in range(n):
            odd = palindrome(i,i)
            even = palindrome(i,i+1)
            if len(odd) > len(max_str):
                max_str = odd
            if len(even) > len(max_str):
                max_str = even
        return max_str