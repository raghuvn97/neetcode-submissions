class Solution {
public:
    string longestPalindrome(string s) {
        int l = 0;
        int r = 0;

        int resLen = 0;
        int start = 0;
        int end = 0;

        for(int i = 0; i < s.length(); i++) {
            l = i;
            r = i;
            while( l >= 0 && r <= s.length() && s[l] == s[r]) {
                if(resLen < r-l+1) {
                    resLen = r-l+1;
                    start = l;
                    end = r;
                }
                l--;
                r++;
            }
        }

        for(int i = 0; i < s.length(); i++) {
            l = i;
            r = i + 1;
            while( l >= 0 && r <= s.length() && s[l] == s[r]) {
                if(resLen < r-l+1) {
                    resLen = r-l+1;
                    start = l;
                    end = r;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, end-start+1);
    }
};
