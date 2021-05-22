class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        s = []
        ans = 0
        if x < 0 :
            negative = True
            x = x * (-1)
        else:
            negative = False
        
        while x > 0 :
            s.append(x % 10)
            x = x // 10
        tens = 1
        while s:
            ans += s.pop() * tens
            tens *= 10
        if negative:
            ans = ans* (-1)
        if ans > (1 << 31) -1 or ans < (-1) * (1 << 31):
            ans = 0
        return ans