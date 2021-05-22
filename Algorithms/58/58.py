class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = s.split(" ")
        print(s)
        if not s:
            return 0
        for i in s[::-1]:
            if len(i) > 0:
                return len(i)
        return 0