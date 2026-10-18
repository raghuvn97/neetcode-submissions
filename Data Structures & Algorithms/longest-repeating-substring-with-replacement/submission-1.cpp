class Solution {
public:
    int maxArray(int arr[]) {
        int val = INT_MIN;
        for(int i = 0; i < 26; i++) {
            val = max(val, arr[i]);
        }
        return val;
    }
    int characterReplacement(string s, int k) {
        int bucket [26] = {0};
        int l = 0;
        int r = 0;

        int longest = INT_MIN;
        while(r < s.length()) {
            int idxR = s[r] - 'A';
            bucket[idxR]++;
            
            while((r-l+1) - maxArray(bucket) > k) {
                int idxL = s[l] - 'A';
                bucket[idxL]--;
                l++;
            }
            longest = max(longest, r-l+1);
            r++;
        }

        return longest;
    }
};
