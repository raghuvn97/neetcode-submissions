class Solution:
    def countSubstrings(self, s: str) -> int:
        count = 0

        for idx, i in enumerate(s):
            l = idx
            r = idx

            while l >=0 and r < len(s) and s[l] == s[r]:
                count += 1
                l -= 1
                r += 1
            
            l = idx
            r = idx + 1

            while l >=0 and r < len(s) and s[l] == s[r]:
                count += 1
                l -= 1
                r += 1
        
        return count
