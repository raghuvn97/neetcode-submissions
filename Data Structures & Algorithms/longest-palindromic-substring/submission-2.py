class Solution:
    def longestPalindrome(self, s: str) -> str:
        longest = 0
        start = 0
        end = 0

        for idx,i in enumerate(s):
            l = idx
            r = idx
            
            while l >= 0 and r < len(s) and s[l] == s[r]:
                if r - l + 1 > longest:
                    longest = r-l + 1
                    start = l
                    end = r
                l -= 1
                r += 1

            l = idx
            r = idx + 1

            while l >= 0 and r < len(s) and s[l] == s[r]:
                if r - l + 1 > longest:
                    longest = r-l + 1
                    start = l
                    end = r
                l -= 1
                r += 1
        
        return s[start:end + 1]
            

            