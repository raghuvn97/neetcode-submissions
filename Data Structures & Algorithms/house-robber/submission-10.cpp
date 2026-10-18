class Solution {
    private:
    int dfs(int i, vector<int>& nums, vector<int>& dp) {
        if (i >= nums.size()) return 0;

        if (dp[i] != -1) return dp[i];

        dp[i] = max(dfs(i+1, nums, dp), nums[i] + dfs(i+2, nums, dp));

        return dp[i];
    }
public:
    int rob(vector<int>& nums) {
        vector<int> dp;
        dp.resize(nums.size(), -1);
        return dfs(0, nums, dp);
    }
};
