class Solution {
private:
    int dfs(int r, int c, vector<vector<int>> &grid, int& area) {
        if (r < 0 || c < 0 || r >= grid.size() ||
        c >= grid[0].size() || grid[r][c] == 0) return area;

        grid[r][c] = 0;
        area = area + 1;

        for (int k = 0; k < 4; k++) {
            dfs(r + directions[k][0], c + directions[k][1], grid, area);
        }
        
        return area;
    }
public:
    int directions [4][2] = {{1, 0}, {-1, 0}, {0 , 1}, {0, -1}};
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int maxarea = 0;

        for(int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int area = 0;
                if (grid[i][j] == 1) {
                    maxarea = max(maxarea, dfs(i , j, grid, area));
                }
            }
        }
        return maxarea;
    }
};
