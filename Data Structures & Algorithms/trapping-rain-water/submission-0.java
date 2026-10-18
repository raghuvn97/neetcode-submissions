class Solution {
    public int trap(int[] height) {
        int res = 0;
        int maxLeft[] = new int[height.length];
        int maxRight[] = new int[height.length];
        maxLeft[0] = 0;
        maxRight[0] = 0;
        maxLeft[height.length -1] = 0;
        maxRight[height.length -1] = 0;

        int l = 0;
        int r = height.length-1;
        int left = 0;
        int right = 0;
        while(l < height.length -1 && r > 0) {
            maxLeft[l] = left;
            maxRight[r] = right;
            left = Math.max(left, height[l]);
            right = Math.max(right, height[r]);
            l++;
            r--;
        }

        for( int i = 0; i < height.length; i++) {
            int water = Math.max(0, Math.min(maxLeft[i], maxRight[i]) - height[i]);
            res = res + water;
        }

        return res;
    }
}
