class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        unordered_set<char> set;
        int maxLen = 0;

        while(r < s.length()) {
            while(set.find(s[r]) != set.end()){
                set.erase(s[l]);
                l++;
            }
            set.insert(s[r]);
            r++;
            maxLen = max(maxLen, r-l);
        }
        return maxLen;
    }
};
