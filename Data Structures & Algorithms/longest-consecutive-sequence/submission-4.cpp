class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }

        unordered_set<int> set;

        for(int i : nums) {
            set.insert(i);
        }

        int longest = 1;
        for(int i : set) {
            int max = 1;
            while(set.find(i-1) != set.end()) {
                max = max +1;
                i = i-1;
            }
            if(max > longest) {
                longest = max;
            }
        }

        return longest;
    }
};
