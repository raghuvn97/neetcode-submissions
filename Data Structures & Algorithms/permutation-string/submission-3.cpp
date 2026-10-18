class Solution {
    bool isSameArray(int arr1[], int arr2[]) {
        for(int i = 0; i < 26; i++) {
            if(arr1[i] != arr2[i]) return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;

        int bucket1 [26] = {0};
        int bucket2 [26] = {0};

        for(int i = 0; i < s1.length(); i++) {
            bucket1[s1[i] - 'a']++;
        }

        for(int i = 0; i < s1.length(); i++) {
            bucket2[s2[i] - 'a']++;
        }

        int l = 0;
        int r = s1.length();

        while(r < s2.length()) {
            if(isSameArray(bucket1, bucket2)) return true;
            bucket2[s2[l] - 'a']--;
            bucket2[s2[r] - 'a']++;
            l++;
            r++;
        }

        return isSameArray(bucket1, bucket2);

    }
};
