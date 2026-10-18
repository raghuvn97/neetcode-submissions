class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        op = '{(['
        close = '})]'
        if s[0] in close:
            return False
        if s[len(s) -1] in op:
            return False

        for i in s:
            if i in op:
                stack.append(i)
            else:
                if op.index(stack.pop()) != close.index(i):
                    return False
        
        if len(stack):
            return False
        else:
            return True
        
        