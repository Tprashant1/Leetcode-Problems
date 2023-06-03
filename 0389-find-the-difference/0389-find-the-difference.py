class Solution(object):
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        c_s= Counter(s)
        c_t= Counter(t)
        d = c_t-c_s
        for key,val in d.items():
            if val==1:
                return key