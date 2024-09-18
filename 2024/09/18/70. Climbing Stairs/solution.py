class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if not n:
            return 0
        if n ==1 or n==2:
            return n
        else:
            s1,s2=1,2
            for _ in range(n-2):
                s1,s2=s2,s1+s2
            return s2