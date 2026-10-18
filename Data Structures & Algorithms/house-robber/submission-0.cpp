class Solution {
    private:
    int dfs(vector<int>& nums, int idx, vector<int>& dp) {
        if(idx >= nums.size()) {
            return 0;
        }

        if(dp[idx] != -1) {
            return dp[idx];
        }

        dp[idx] = max(dfs(nums, idx+1,dp), nums[idx] + dfs(nums, idx +2, dp));
        return dp[idx];
    }
public:
    int rob(vector<int>& nums) {
        vector<int> dp;
        dp.resize(nums.size() + 1, -1);

        return dfs(nums, 0, dp);
    }
};
