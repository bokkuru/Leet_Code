class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        now = 0
        ans = 0
        dic  = {"I":(0,1),"V":(1,5),"X":(2,10),"L":(3,50),"C":(4,100),"D":(5,500),"M": (6,1000)}
        for i in s[::-1]:
            index, num = dic[i]
            if index < now:
                ans -= num
            else :
                ans += num
                now = index
        return ans