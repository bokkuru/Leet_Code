class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n < 4:
            return n
        
        one_prev = 3
        two_prev = 2

        for i in range(3, n):
            now = one_prev + two_prev
            two_prev = one_prev
            one_prev = now
        return now