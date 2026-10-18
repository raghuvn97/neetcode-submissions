class Solution {
    private:
     void backtrack(int n , int openN, int closeN, vector<string>& solution, string stack) {
        if(openN == closeN && closeN == n) {
            solution.push_back(stack);
            return;
        }

        if (openN < n) {
            stack += '(';
            backtrack(n, openN + 1, closeN, solution, stack);
            stack.pop_back();
        }

        if (closeN < openN) {
            stack += ')';
            backtrack(n, openN, closeN + 1, solution, stack);
            stack.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string stack;
        vector<string> res;
        backtrack(n, 0, 0, res, stack);
        return res;
    }
};
