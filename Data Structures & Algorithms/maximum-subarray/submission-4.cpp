class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int sumSoFar = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            if(sumSoFar < 0) {
                sumSoFar = max(sumSoFar, 0);
            }
            sumSoFar += nums[i];

            maxSum = max(maxSum, sumSoFar);
        }
        return maxSum;
    }
};
