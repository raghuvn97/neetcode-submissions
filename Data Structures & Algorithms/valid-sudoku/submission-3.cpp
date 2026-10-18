class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string, unordered_set<char>> square;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> rows;

        for (int i = 0; i < 9; i++) {
            unordered_set<char> set;
            cols[i] = set;
            rows[i] = set;
        }

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                unordered_set<char> set;
                string key = to_string(i/3) + ',' + to_string(j/3);
                square[key] = set;
            }
        }

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') {
                    continue;
                }
                string key = to_string(i/3) + ',' + to_string(j/3);
                if(rows[i].find(board[i][j]) != rows[i].end() ||
                cols[j].find(board[i][j]) != cols[j].end() ||
                square[key].find(board[i][j]) != square[key].end()) {
                    return false;
                }

                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                square[key].insert(board[i][j]);
            }
        }

        return true;
    }
};
