class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> my_set;

        for(int i : nums) {
            if (my_set.find(i) != my_set.end()) {
                return true;
            }
            my_set.insert(i);
        }
        return false;
    }
};