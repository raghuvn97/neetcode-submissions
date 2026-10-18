class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:

        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]

        def dfs(r: int, c: int, grid: List[List[str]]):
            if (r < 0 or c < 0 or r >= len(grid) or c >= len(grid[0]) or grid[r][c] == '0'):
                return
            
            grid[r][c] = '0'

            for li in directions:
                dfs(r + li[0], c + li[1], grid)

        rows = len(grid)
        cols = len(grid[0])

        numisland = 0

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == '1':
                    numisland += 1
                    dfs(i, j, grid)

        return numisland

        