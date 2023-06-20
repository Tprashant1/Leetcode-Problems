class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        l=[]
        while(n>0):
            s=0
            while(n>0):
                d=n%10
                s=s+d*d
                n=n/10
            if s in l:
                return False
            else:
                l.append(s)
            if s==1:
                return True
            n=s
        return False
            