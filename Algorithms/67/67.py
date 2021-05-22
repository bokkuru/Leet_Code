class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        at = int(a,base = 2)
        bt = int(b, base = 2)
        return bin(at + bt)[2:]