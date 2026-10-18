class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        count = {}
        for word in strs:
            bucket = [0 for i in range(26)]
            for c in word:
                index = ord(c) - ord('a')
                bucket[index] = bucket[index] + 1
            group = count.get(tuple(bucket),[])
            group.append(word)
            count[tuple(bucket)] = group
        
        res = []
        for key, value in count.items():
            res.append(value)

        return res