class Solution:
    def isPalindrome(self, s: str) -> bool:
        s1 = ""
        for i in s:
            if i.isalnum():
                s1 = s1 + i.lower()
        #print(s1)
        return s1 == s1[::-1]