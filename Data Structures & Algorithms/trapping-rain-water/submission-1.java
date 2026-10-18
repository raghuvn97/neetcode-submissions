class Solution {
    public int trap(int[] h) {
        int maxLeft [] = new int[h.length];
        int maxRight [] = new int[h.length];
        int left = 0;
        int right = 0;
        maxLeft[0] = 0;
        maxRight[h.length -1] = 0;

        for(int i = 1; i < h.length; i++) {
            left = Math.max(left, h[i-1]);
            maxLeft[i] = left;
        }

        for(int i = h.length - 2; i > 0; i--) {
            right = Math.max(right, h[i+1]);
            maxRight[i] = right;
        }

        int res = 0;

        for(int i = 0; i < h.length; i++) {
            int water = Math.max(Math.min(maxLeft[i], maxRight[i]) - h[i], 0);
            res = res + water;
        }

        return res;
    }
}
