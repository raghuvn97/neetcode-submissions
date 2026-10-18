class Solution {

private:
    void dfs(vector<vector<int>>& grid, int r, int c, int& area) {
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size()
        || grid[r][c] == 0) {
            return;
        }

        area++;
        grid[r][c] = 0;
        for(int i = 0; i < 4; i++) {
            dfs(grid, r + directions[i][0], c + directions[i][1], area);
            maxarea = max(area, maxarea);
        }
        return;
    };

public:
    int directions [4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    int maxarea = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                int area = 0;
                if(grid[i][j] == 1) {
                    dfs(grid, i, j, area);
                }
            }
        }
        return maxarea;
    }
};
