class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        map = {}
        freq = [[] for i in range(len(nums) + 1)]

        for i in nums:
            map[i] = map.get(i, 0) + 1
        
        for key, value in map.items():
            freq[value].append(key)
        
        res = []

        for i in range(len(freq) -1, 0, -1):
            for j in freq[i]:
                if len(res) < k:
                    res.append(j)
                else:
                    break
                
        return res