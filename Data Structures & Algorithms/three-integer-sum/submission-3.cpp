class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> set;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            int l = i+1;
            int r = nums.size() -1;
            while(l < r) {
                if(nums[i] + nums[l] + nums[r] < 0) {
                    l++;
                } else if(nums[i] + nums[l] +nums[r] > 0){
                    r--;
                } else {
                    vector<int> triplet;
                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[l]);
                    triplet.push_back(nums[r]);
                    set.insert(triplet);
                    l++;
                    r--;
                }
            }
        }
        vector<vector<int>> res(set.begin(), set.end());
        return res; 
    }
};
