class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])

        fresh = 0
        new_rotted = False
        q = deque()

        def bfs(r, c):
            nonlocal fresh
            nonlocal new_rotted
            if r < 0 or c < 0 or r >= len(grid) or c >= len(grid[0]) or grid[r][c] != 1:
                return
            grid[r][c] = 2
            q.append((r, c))
            fresh -= 1
            new_rotted = True

        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == 2:
                    q.append((r, c))
                elif grid[r][c] == 1:
                    fresh += 1
        
        mins = 0
        while q:
            for i in range(len(q)):
                r, c = q.popleft()
                bfs(r + 1, c)
                bfs(r - 1, c)
                bfs(r, c + 1)
                bfs(r, c - 1)
            if new_rotted: mins += 1
            new_rotted = False

        return mins if fresh == 0 else -1
