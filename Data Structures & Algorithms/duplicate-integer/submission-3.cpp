class Solution {
public:
unordered_set<int> seen;
    bool hasDuplicate(vector<int>& nums) {
        for(int num : nums) {
            if(seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
