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
            if(set.find(i-1) == set.end()) {
                while(set.find(i+max) != set.end()) {
                    max++;
                }
                if(max > longest) {
                    longest = max;
                }
            }
        }
        return longest;
    }
};
