class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        res = []

        for idx,i in enumerate(numbers):
            if target - i in numbers:
                if idx != numbers.index(target-i):
                    res.append(idx+1)
                    res.append(numbers.index(target-i)+1)
                    break
                else:
                    continue
                
        return res
