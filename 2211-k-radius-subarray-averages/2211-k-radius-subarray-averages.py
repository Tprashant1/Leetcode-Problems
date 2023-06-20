class Solution(object):
    def getAverages(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        n=len(nums)
        l = [-1]*n
        s = 2*k+1
        if s>n:
            return l
        t_s = sum(nums[:s])
        l[k] = t_s/s
        r=0
        for i in range(s,n):
            t_s = t_s - nums[r] + nums[i]
            r+=1
            l[i-k] = t_s/s
        return l
        
