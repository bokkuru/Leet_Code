class Solution(object):
    def maximumRemovals(self, s, p, removable):
        """
        :type s: str
        :type p: str
        :type removable: List[int]
        :rtype: int
        """
        dic = {}
        ans = 0
        for index,i in enumerate(s):
            if i in p:
                dic.setdefault(i,[])
                dic[i].append(index)
        for index,i in enumerate(removable):
            if s[i] in dic.keys():
                dic[s[i]].remove(i)
                if len(dic[s[i]]) == 0:
                    break
                head = -1
                for ch in p:
                    frag = False
                    for j in dic[ch]:
                        if head < j:
                            head = j
                            frag = True
                            break
                    if not frag:
                        return ans
            ans = index + 1
        return ans