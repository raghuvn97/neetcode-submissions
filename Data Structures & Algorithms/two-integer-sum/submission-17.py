class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        comp = {}
        res = []

        for idx, i in enumerate(nums):
            if i in comp:
                res.append(comp[i])
                res.append(idx)
            comp[target - i] = idx
        
        return res