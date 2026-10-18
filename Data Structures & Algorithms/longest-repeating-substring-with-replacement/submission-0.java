class Solution {
    private int maxArray(int arr[]) {
        int maxVal = Integer.MIN_VALUE;
        for (int i = 0; i < 26; i++) {
            maxVal = Math.max(maxVal, arr[i]);
        }
        return maxVal;
    }

    public int characterReplacement(String s, int k) {
        int bucket[] = new int [26];

        int l = 0;
        int r = 0;

        int longest = 0;
        while(r < s.length()) {
            int idxR = s.charAt(r) - 'A';
            bucket[idxR]++;

            while(r-l + 1 - maxArray(bucket) > k) {
                int idxL = s.charAt(l) - 'A';
                bucket[idxL]--;
                l++;
            }

            longest = Math.max(r-l+1, longest);
            r++;
        }

        return longest;
    }
}
