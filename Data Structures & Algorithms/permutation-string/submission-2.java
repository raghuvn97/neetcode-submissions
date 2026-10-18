class Solution {
    private boolean isSameArray(int arr1[], int arr2[]) {
        for(int i = 0; i < 26; i++) {
            if(arr1[i] != arr2[i]) return false;
        }
        return true;
    }
    public boolean checkInclusion(String s1, String s2) {

        if(s1.length() > s2.length()) return false;

        int bucket1[] = new int[26];
        int bucket2[] = new int[26];

        for(int i = 0; i < s1.length(); i++) {
            int idx = s1.charAt(i) - 'a';
            bucket1[idx]++;
        }

        for(int i = 0; i < s1.length(); i++) {
            int idx = s2.charAt(i) - 'a';
            bucket2[idx]++;
        }
        
        int l = 0;
        int r = s1.length() -1;

        while(r < s2.length() -1) {
            if(isSameArray(bucket1, bucket2)) return true;
            bucket2[s2.charAt(l) -'a']--;
            l++;
            r++;
            bucket2[s2.charAt(r) - 'a']++;

        }

        return isSameArray(bucket1, bucket2);
    }
}
