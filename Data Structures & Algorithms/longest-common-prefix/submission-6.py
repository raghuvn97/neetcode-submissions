class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s = strs[0]
        res = ""

        for idx, i in enumerate(s):
            for st in strs[1::]:
                if idx >= len(st):
                    return res
                if i != st[idx]:
                    return res
            res += i
        
        return res
                
