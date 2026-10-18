class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        res = []

        for idx,i in enumerate(numbers):
            if target - i in numbers:
                res.append(idx+1)
                res.append(numbers.index(target-i)+1)
                return res
