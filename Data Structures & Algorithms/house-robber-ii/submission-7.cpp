class Solution {
    private:
    int dfs(vector<int>& nums, int step, int last, vector<int>& dp) {
        if (step > last) return 0;

        if (dp[step] != -1) return dp[step];

        dp[step] = max(dfs(nums, step+1, last, dp), 
                nums[step] + dfs(nums, step + 2, last, dp));
        
        return dp[step];
    }
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> dp1;
        dp1.resize(nums.size(), -1);
        vector<int> dp2;
        dp2.resize(nums.size(), -1);
        return max(dfs(nums, 0, nums.size()-2, dp1),
                dfs(nums, 1, nums.size()-1, dp2));
    }
};
