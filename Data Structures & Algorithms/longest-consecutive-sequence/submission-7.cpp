class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> myset(nums.begin(), nums.end());

        int longest = 0;

        for(int i : myset) {
            int len = 1;
            if (myset.find(i-1) == myset.end()) {
                while (myset.find(i+len) != myset.end()) {
                    len += 1;
                }
                longest = max(len, longest);
            }
        }

        return longest;
    }
};
