class Solution {
    private:
    int dfs(int step, int n, vector<int> &dp) {
        if (step >= n) return step == n;

        if (dp[step] != -1) return dp[step];

        dp[step] = dfs(step + 1, n, dp) + dfs(step + 2, n , dp);

        return dp[step];
    }
public:
    int climbStairs(int n) {
        vector<int> dp;
        dp.resize(n, -1);
        return dfs(0, n, dp);
    }
};
