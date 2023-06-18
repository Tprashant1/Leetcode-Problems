class Solution(object):
    def findValueOfPartition(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums=sorted(nums)
        min1=-1
        for i in range(len(nums)-1):
            dff = nums[i+1] - nums[i]
            if(min1==-1):
                min1=dff
            else:
                if(dff<min1):
                    min1=dff
        return min1
        