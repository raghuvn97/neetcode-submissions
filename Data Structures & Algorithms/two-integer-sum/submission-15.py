class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        comp = {}

        for idx,n in enumerate(nums):
            if n in comp:
                return [comp[n], idx]
            comp[target - n] = idx
        
        return []