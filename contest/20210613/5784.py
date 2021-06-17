class Solution(object):
    def makeEqual(self, words):
        """
        :type words: List[str]
        :rtype: bool
        """
        dic = {}
        for word in words:
            for char in word:
                dic.setdefault(char,0)
                dic[char] += 1
        for v in dic.values():
            if v % len(words) != 0 :
                return False
        return True
