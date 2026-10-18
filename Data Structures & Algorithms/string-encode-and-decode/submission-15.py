class Solution:

    def encode(self, strs: List[str]) -> str:
        encode = ""
        for s in strs:
            encode += str(len(s)) + '#' + s
        print(encode)
        return encode 
    
    def decode(self, s: str) -> List[str]:
        res = []
        l = 0
        for r, i in enumerate(s):
            if i == '#' and s[r-1].isnumeric():
                len_s = int(s[l:r])
                res.append(s[r + 1:r + len_s + 1])
                l = r + len_s + 1
        return res
