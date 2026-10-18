class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s = strs[0]
        res = ""

        for idx, c in enumerate(s):
            for st in strs[1:]:
                if idx >= len(st) or c != st[idx]:
                    return res
            res += c
        return res

