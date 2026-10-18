class Solution {
public:
unordered_map <int, int> twosum;
vector<int> res;
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (twosum.find(nums[i]) != twosum.end()) {
                res.push_back(twosum[nums[i]]);
                res.push_back(i);
                return res;
            }
            twosum[target - nums[i]] = i;
        }
    }
};
