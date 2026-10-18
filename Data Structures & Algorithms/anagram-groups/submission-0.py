class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = {}

        for s in strs:
            count = [0] * 26

            for c in s:
                count[ord(c) - ord('a')] = count[ord(c) - ord('a')] + 1
            
            if tuple(count) not in res:
                grp = list()
                grp.append(s)
                res[tuple(count)] = grp
            else:
                res.get(tuple(count)).append(s)

        return res.values()
        