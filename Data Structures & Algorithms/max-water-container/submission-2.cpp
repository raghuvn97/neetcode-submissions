class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int l = 0;
        int r = heights.size() -1;

        while(l < r) {
            int h = min(heights[l], heights[r]);
            int max = (r-l) * h;
            if(max > area) {
                area = max;
            }
            if(heights[l] > heights[r]) {
                r--;
            } else {
                l++;
            }
        }
        return area;
    }
};
