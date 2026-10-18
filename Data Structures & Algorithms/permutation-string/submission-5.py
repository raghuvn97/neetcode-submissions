class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        if len(s1) > len(s2):
            return False

        bucket1 = [0] * 26

        for a in s1:
            bucket1[ord(a) - ord('a')] += 1
        
        i = 0
        j = 0

        bucket2 = [0] * 26

        while j < len(s2):
            bucket2[ord(s2[j]) - ord('a')] += 1

            if tuple(bucket1) == tuple(bucket2):
                return True
            

            if (j-i + 1) == len(s1):
                bucket2[ord(s2[i]) - ord('a')] -= 1
                i += 1
            
            j += 1
        
        return False



        
