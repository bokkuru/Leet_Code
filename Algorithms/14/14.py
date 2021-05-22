class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        
        ans = ""
        i = 0
        while True:
            if len(strs[0])-1 < i:
                return ans
            tmp = strs[0][i]
            for s in strs[1:]:
                if len(s)-1 < i or tmp != s[i]:
                    return ans
            ans += tmp
            i += 1
        return ans
            