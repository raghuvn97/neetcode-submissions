class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int currentsum = nums[0];

        for(int i=1 ; i < nums.size() ; i++) {
            if(currentsum < 0) {
                currentsum = 0;
            }
            currentsum = currentsum + nums[i];
            if(maxsum < currentsum) {
                maxsum = currentsum;
            }
        }
        return maxsum;
    }
};
