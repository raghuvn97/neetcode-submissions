class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> my_map;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if (my_map.find(comp) != my_map.end()) {
                res.push_back(my_map[comp]);
                res.push_back(i);
                break;
            }
            my_map[nums[i]] = i;
        }
        return res;
    }
};
