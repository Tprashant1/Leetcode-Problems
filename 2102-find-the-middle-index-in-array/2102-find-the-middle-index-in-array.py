class Solution(object):
    def findMiddleIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l=0
        r=sum(nums)
        for i in range(len(nums)):
            if(nums[i] == r-2*l):
                return i
            l += nums[i]
        return -1