class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        while(l < r) {
            int mid = l + (r-l)/2;
            if(nums[mid] > nums[r]) {
                l = mid+1;
            } else {
                r = mid;
            }
        }
        int minIdx = l;

        if (minIdx == 0) {
            l = 0;
            r = nums.size()-1;
        } else if(target >= nums[0] && target <= nums[minIdx-1]) {
            l = 0;
            r = minIdx-1;
        } else {
            l = minIdx;
            r = nums.size()-1;

        }

        while(l <= r) {
            int mid = l + (r-l)/2;
            if(target < nums[mid]) {
                r = mid-1;
            } else if(target > nums[mid]) {
                l = mid+1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};
