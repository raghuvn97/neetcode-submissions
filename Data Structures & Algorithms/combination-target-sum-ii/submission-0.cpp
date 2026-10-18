class Solution {
private:
    void dfs(vector<vector<int>> &res, vector<int> &comb, 
             vector<int> &nums, int target, int start) {
        if (target == 0) {
            res.push_back(comb);
            return;
        }

        for (int i = start; i < (int)nums.size(); ++i) {
            // skip duplicates at the same recursion level
            if (i > start && nums[i] == nums[i - 1]) continue;

            // pruning because nums is sorted
            if (nums[i] > target) break;

            comb.push_back(nums[i]);
            // i+1: each number can be used at most once
            dfs(res, comb, nums, target - nums[i], i + 1);
            comb.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> comb;
        dfs(res, comb, candidates, target, 0);
        return res;
    }
};