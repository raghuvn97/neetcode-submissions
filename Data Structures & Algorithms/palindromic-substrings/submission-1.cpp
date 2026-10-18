class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int l = 0;
        int r = 0;

        for(int i = 0; i < s.length(); i++) {
            l = i;
            r = i;
            while(l >= 0 && r <= s.length()-1 && s[l] == s[r]) {
                count += 1;
                l--;
                r++;
            }
        }

        for(int i = 0; i < s.length(); i++) {
            l = i;
            r = i + 1;
            while(l >= 0 && r <= s.length()-1 && s[l] == s[r]) {
                count += 1;
                l--;
                r++;
            }
        }

        return count;
    }
};
