class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;

        for(int i : nums) {
            if(set.find(i) == set.end()) {
                set.insert(i);
                continue;
            }
            return true;
        }

        return false;
    }
};