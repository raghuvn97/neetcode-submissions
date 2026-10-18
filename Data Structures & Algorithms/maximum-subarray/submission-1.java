class Solution {
    public int maxSubArray(int[] nums) {
        int maxsum = nums[0];
        int cursum = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if(cursum < 0) {
                cursum = 0;
            }
            cursum = cursum + nums[i];
            if(maxsum < cursum) {
                maxsum = cursum;
            }
        }
        return maxsum;
    }
}
