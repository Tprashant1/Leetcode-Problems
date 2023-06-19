class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d={}
        for i in nums:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1
        for key,val in d.items():
            if val==1:
                return key