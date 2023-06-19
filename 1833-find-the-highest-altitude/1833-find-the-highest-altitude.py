class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        g=[0]*len(gain)
        g[0] = gain[0]
        for i in range(1,len(gain)):
            g[i] = gain[i]+g[i-1]
        if(max(g)<0):
            return 0
        return max(g)
