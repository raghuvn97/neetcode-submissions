from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = collections.defaultdict(list)

        for s in strs:
            bucket = [0] * 26
            for i in s:
                bucket[ord(i) - ord('a')] += 1
            res[tuple(bucket)].append(s)

        solution = []
        
        #for key, value in res.items():
            #solution.append(value)
        
        return list(res.values())

