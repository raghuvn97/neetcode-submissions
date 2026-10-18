import collections
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(t) != len(s):
            return False
        
        tmap = defaultdict(int)
        smap = defaultdict(int)

        for i in s:
            smap[i] = smap[i] + 1

        for i in t:
            tmap[i] = tmap[i] + 1

        for key, value in smap.items():
            if tmap[key] != value:
                return False
        
        return True
