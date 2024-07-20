class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        de_set=set()
        while n is not 1:
            n = sum(int(i)**2 for i in str(n))
            if n in de_set:
                return False
            de_set.add(n)
        return True