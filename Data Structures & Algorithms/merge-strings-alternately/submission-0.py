class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        p1 = 0
        p2 = 0
        word3 = ""

        while p1 < len(word1) and p2 < len(word2):
            word3 += word1[p1] + word2[p2]
            p1 += 1
            p2 += 1

        if p1 < len(word1):
            word3 += word1[p1:len(word1)]
        
        if p2 < len(word2):
            word3 += word2[p2:len(word2)] 

        return word3
