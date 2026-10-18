class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n, 0);
        leftMax[0] = 0;
        vector<int> rightMax(n, 0);
        rightMax[n-1] = 0;
        int maxSoFar = 0;

        for(int i = 1; i < n; i++) {
            maxSoFar = max(height[i-1], maxSoFar);
            leftMax[i] = maxSoFar;
        }

        for(int i: leftMax) {
            cout << i << " ";
        }
        
        cout << endl;

        maxSoFar = 0;
        for(int i = n-2; i > -1; i--) {
            maxSoFar = max(height[i+1], maxSoFar);
            rightMax[i] = maxSoFar;
        }

        for(int i: rightMax) {
            cout << i << " ";
        }

        int water = 0;
        for(int i=0; i < n; i++) {
            water += max(min(leftMax[i], rightMax[i])-height[i], 0);
        }

        return water;
    }
};
