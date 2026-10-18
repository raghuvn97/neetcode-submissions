class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        bucket = [[] for i in range(len(nums) + 1)]

        count = {}

        for i in nums:
            count[i] = count.get(i, 0) + 1
        
        for key, value in count.items():
            bucket[value].append(key)

        print(bucket)

        res = []

        for i in range(len(bucket) - 1, -1, -1):
            for j in range(len(bucket[i]) - 1, -1, -1):
                if k == 0:
                    return res
                res.append(bucket[i][j])
                k -= 1
        
        return res

