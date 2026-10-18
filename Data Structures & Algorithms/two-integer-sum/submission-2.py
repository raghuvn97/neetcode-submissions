class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        c = {}
        res = []
        for idx,i in enumerate(nums):
            if i not in c:
                c[target - i] = idx
            else:
                res.append(c.get(i))
                res.append(idx)
                break
        return res      