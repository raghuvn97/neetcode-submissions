class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<string, unordered_set<char>> square;

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                string key = to_string(i/3) + ' ' + to_string(j/3);
                if (cols[i].find(board[i][j]) != cols[i].end() 
                || rows[j].find(board[i][j]) != rows[j].end()
                || square[key].find(board[i][j]) != square[key].end()) return false;

                cols[i].insert(board[i][j]);
                rows[j].insert(board[i][j]);
                square[key].insert(board[i][j]);
            }
        }
        return true;
    }
};
