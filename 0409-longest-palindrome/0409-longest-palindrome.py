class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        res = set()
        for i in s:
            if i not in res:
                res.add(i)
            else:
                res.remove(i)       
        if len(res) != 0:
            return len(s) - len(res) + 1
        else:
            return len(s)