class Solution {
private:
    void dfs(int i, vector<vector<int>> &res, vector<int> &comb, int target, vector<int> &nums) {
        if(target == 0) {
            res.push_back(comb);
            return;
        }

        if(target < 0 || i == nums.size()) {
            return;
        }

        comb.push_back(nums[i]);
        dfs(i, res, comb, target - nums[i], nums);

        comb.pop_back();
        dfs(i+1, res, comb, target, nums);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> comb;

        dfs(0, res, comb, target, nums);
        return res;
    }
};
