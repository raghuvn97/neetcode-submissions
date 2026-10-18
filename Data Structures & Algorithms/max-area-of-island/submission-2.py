class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]

        rows = len(grid)
        cols = len(grid[0])

        maxarea = 0
        area = 0

        def dfs(r: int, c: int, area: int) -> int:
            if r < 0 or c < 0 or r >= len(grid) or c >= len(grid[0]) or grid[r][c] == 0:
                return area
            
            grid[r][c] = 0
            area += 1

            for li in directions:
                area = dfs(r + li[0], c + li[1], area)

            return area

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1:
                    area = 0
                    maxarea = max(maxarea, dfs(i, j, area))
        
        return maxarea