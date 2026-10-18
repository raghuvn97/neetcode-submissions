class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int leftProd [n] = {0};
        int rightProd [n] = {0};
        leftProd[0] = 1;
        rightProd[n-1] = 1; 
        vector<int> res;
        res.resize(n, 1);

        for(int i = 1; i < n; i++) {
            leftProd[i] = leftProd[i-1] * nums[i-1];
        }

        for(int i = n - 2; i > -1; i--) {
            rightProd[i] = rightProd[i+1] * nums[i+1];
        }

        for(int i = 0; i < n; i++) {
            res[i] = leftProd[i] * rightProd[i];
        }

        return res;
    }
};
