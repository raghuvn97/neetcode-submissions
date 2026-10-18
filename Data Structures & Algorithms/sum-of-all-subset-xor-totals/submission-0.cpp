class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int total = 0;

        for (int i : nums) {
            total |= i;
        }

        return total << (nums.size() - 1);
    }
};