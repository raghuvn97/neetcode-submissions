class Solution {
private:
int __rob(int i, vector<int>& nums, vector<int>& cache) {
    if(i >= nums.size()) return 0;

    if (cache[i] != -1) return cache[i];

    cache[i] = max(__rob(i+1, nums, cache), nums[i]+__rob(i+2, nums, cache));
    return cache[i];
}
public:
    int rob(vector<int>& nums) {
        vector<int> cache(nums.size(), -1);
        return __rob(0, nums, cache);
    }
};
