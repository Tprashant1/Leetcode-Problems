class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        l=0
        maxi=nums[0]
        for i in nums:
            if l<0:
                l=0
            l+=i
            maxi=max(maxi,l)
        return maxi
