class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> set;
        int l = 0;
        int r = 0;
        int longest = 0;
        while(r < s.length()) {
            while (set.find(s[r]) != set.end()) {
                set.erase(s[l]);
                l++;
            }
            set.insert(s[r]);
            r++;
            longest = max(longest, r-l);
        }

        return longest;
    }
};
