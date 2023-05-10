class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        s=set(nums)
        if max(nums)<0:
            return 1
        for i in range(1,max(nums)+1):
            if i not in s:
                return i
        return max(nums)+1