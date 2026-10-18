class Solution {
private:
int __rob(int i, vector<int>& nums, vector<int>& cache, int size) {
    if(i >= size) return 0;

    if(cache[i] != -1) return cache[i];

    cache[i] = max(__rob(i+1, nums, cache, size), nums[i] 
    + __rob(i+2, nums, cache, size));
    return cache[i];
}
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int size = nums.size();
        vector<int> cache1(nums.size(), -1);
        vector<int> cache2(nums.size(), -1);
        return max(__rob(0,nums, cache1, size-1), __rob(1, nums, cache2, size));
        
    }
};
