class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxsum = nums[0]
        sumsofar = nums[0]

        for i in range(1, len(nums)):
            if sumsofar < 0:
                sumsofar = 0
            sumsofar += nums[i]
            if maxsum < sumsofar:
                maxsum = sumsofar

        return maxsum 
        