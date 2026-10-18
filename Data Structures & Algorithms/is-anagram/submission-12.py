class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s) != len(t):
            return False 

        s_count = {}
        t_count = {}

        for i in s:
            s_count[i] = s_count.get(i, 0) + 1
        
        for i in t:
            t_count[i] = t_count.get(i, 0) + 1  
        
        for key, value in s_count.items():
            if key not in t_count or value != t_count[key]:
                return False
        
        return True