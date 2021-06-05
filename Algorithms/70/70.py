from math import factorial
class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        for i in range(n//2+1):
            j = n - 2 * i
            count += factorial(i + j) / factorial(i) / factorial(j)

        return count