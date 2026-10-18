class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        zero_count = nums.count(0)
        if zero_count > 1:
            return [0] * len(nums)
        
        res = [0] * len(nums)
        prod = 1

        for i in nums:
            if i != 0 :
                prod = prod * i
        
        if zero_count:
            res[nums.index(0)] = prod
        else:
            for i in range(0,len(nums)):
                res[i] = prod//nums[i]

        return res  

        

        