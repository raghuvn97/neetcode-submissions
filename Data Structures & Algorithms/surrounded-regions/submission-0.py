class Solution:
    def solve(self, board: List[List[str]]) -> None:
        rows = len(board)
        cols = len(board[0])

        directions = [[0, 1], [1, 0], [0, -1], [-1, 0]]

        def dfs(r, c):
            if r < 0 or r >= rows or c < 0 or c >= cols or board[r][c] != 'O':
                return
            
            board[r][c] = 'T'
            for d in directions:
                dfs(r + d[0], c + d[1])
            
        # 1. Kick off DFS from the borders
        for r in range(rows):
            for c in range(cols):
                if r in [0, rows - 1] or c in [0, cols - 1] and board[r][c] == 'O':
                    dfs(r, c)
        
        # 2. Capture surrounded regions ('O' -> 'X')
        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 'O':
                    board[r][c] = 'X'

        # 3. Unmark safe regions ('T' -> 'O')
        for r in range(rows):
            for c in range(cols):
                if board[r][c] == 'T':
                    board[r][c] = 'O'