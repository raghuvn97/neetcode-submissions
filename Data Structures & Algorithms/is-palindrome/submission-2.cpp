class Solution {
public:
string s1 = "";
    bool isPalindrome(string s) {
        for(char c : s) {
            if (isalnum(c)){
                s1 += tolower(c);
            }
        }

        int l = 0;
        int r = s1.length() -1;
        while(l < r) {
            if (s1[l] != s1[r]) {
                return false;
            } else {
                l++;
                r--;
            }
        }
        return true;
    }
};
