class Solution {

    private:
    bool isSameArray(int* arr1, int* arr2) {
        for(int i = 0; i < 26; i++) {
            if(arr1[i] != arr2[i]) return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int bucket1[26] = {0};
        int bucket2[26] = {0};

        for(int i = 0; i < s1.length(); i++) {
            int idx = s1[i] - 'a';
            bucket1[idx]++;
        }

        for(int i = 0; i < s1.length(); i++) {
            int idx = s2[i] - 'a';
            bucket2[idx]++;
        }


        int l = 0;
        int r = s1.length()-1;

        while (r < s2.length()) {
            if(isSameArray(bucket1, bucket2)) return true;
            bucket2[s2[l] - 'a']--;
            l++;
            r++;
            int idxR = s2[r] - 'a';
            bucket2[idxR]++;
        }

        return isSameArray(bucket1, bucket2);

    }
};
