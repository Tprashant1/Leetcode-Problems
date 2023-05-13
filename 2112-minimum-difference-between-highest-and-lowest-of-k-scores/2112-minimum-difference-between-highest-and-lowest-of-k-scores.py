class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        n=len(nums)
        nums=sorted(nums)
        if n<=1:
            return 0
        result=nums[k-1]-nums[0]
        for i in range(k,n):
            result = min(result,nums[i]-nums[i-k+1])
        return result 


