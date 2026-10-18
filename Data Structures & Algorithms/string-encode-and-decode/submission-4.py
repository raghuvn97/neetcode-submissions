class Solution:

    def encode(self, strs: List[str]) -> str:
        strval = ''
        for i in strs:
            strval += str(len(i)) + '#' + i
        return strval
    

    def decode(self, s: str) -> List[str]:
        strs = []
        i = 0
        while i < len(s):
            j = i
            while s[j] != '#':
                j = j + 1
            length = int(s[i:j])
            strs.append(s[j+1:j+1+length])
            i = j+1+length
        return strs
