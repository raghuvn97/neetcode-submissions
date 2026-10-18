class Solution {
private:
    void dfs(int r, int c, vector<vector<char>> & grid) {
        if (r < 0 || c < 0 || r >= grid.size() ||
        c >= grid[0].size() || grid[r][c] == '0') return;

        grid[r][c] = '0';

        for(int k = 0; k < 4; k++) {
            dfs(r + directions[k][0], c + directions[k][1], grid);
        }
    }
public:
    int directions [4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int numisland = 0;

        for(int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '1') {
                    dfs(i, j, grid);
                    numisland++;
                }
            }
        }

        return numisland;
    }
};
