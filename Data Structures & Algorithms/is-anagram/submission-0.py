class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s) != len(t):
            return False
        
        smap = {}
        tmap = {}

        for i in s:
            if i not in smap:
                smap[i] = 1
            else:
                smap[i] = smap[i] + 1
        
        for j in t:
            if j not in tmap:
                tmap[j] = 1
            else:
                tmap[j] = tmap[j] + 1
        
        # print(smap)
        # print(tmap)
        
        for (key, value) in smap.items():
            if key not in tmap:
                return False
            else:
                if value != tmap.get(key):
                    return False
        
        return True

        # Time Complexity - O(n) space complexity O(n + m) ~ O(n)

        # Much Optimised solution (Uses sorting algorithm and time complexity can be O(nlogn))
        # if len(s) != len(t):
        #     return False
        # return sorted(s) == sorted(t)       
        
        