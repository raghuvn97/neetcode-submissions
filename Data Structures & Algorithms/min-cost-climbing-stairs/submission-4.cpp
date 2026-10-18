class Solution {
    private:
    int dfs(int step, int n, vector<int>& cost, vector<int>& dp) {
        if (step >= n) return 0;

        if (dp[step] != -1) return dp[step];

        dp[step] = cost[step] + min(dfs(step + 1, n, cost, dp),
                    dfs(step + 2, n, cost, dp));
        
        return dp[step];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp;
        dp.resize(cost.size(), -1);
        return min(dfs(0, cost.size(), cost, dp),
                    dfs(1, cost.size(), cost, dp));
    }
};
