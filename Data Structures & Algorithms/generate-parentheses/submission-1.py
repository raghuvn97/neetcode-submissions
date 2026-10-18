class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        openn = 0
        close = 0
        st = []

        def dfs(op, cl):
            if op == cl == n:
                res.append("".join(st))
                return
            
            if op < n:
                st.append('(')
                dfs(op + 1, cl)
                st.pop()
            
            if cl < op:
                st.append(')')
                dfs(op, cl + 1)
                st.pop()

        dfs(0, 0)
        return res
        