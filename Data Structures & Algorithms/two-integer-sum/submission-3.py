class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        twosum = {}
        for i in range(0, len(nums)):
            if nums[i] in twosum:
                return [twosum[nums[i]],i]
            twosum[target - nums[i]] = i