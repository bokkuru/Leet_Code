class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        st = []
        for i in s:
            if i == ")":
                if not(st and st.pop() == "("):
                    return False
            elif i == "}":
                if not(st and st.pop() == "{"):
                    return False
            elif i == "]":
                if not(st and st.pop() == "["):
                    return False
            else: 
                st.append(i)
        if st :
            return False
        return True
        