class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if (map.find(comp) != map.end()) {
                res.push_back(map[comp]);
                res.push_back(i);
            }
            map[nums[i]] = i;
        }

        return res;
    }
};
