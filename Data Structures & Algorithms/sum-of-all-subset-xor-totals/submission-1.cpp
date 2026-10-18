class Solution {
private:
int dfs(int i, int total, vector<int>& num) {
    if (i == num.size()) {
        return total;
    }

    return dfs(i + 1, total ^ num[i], num) + dfs(i+1, total, num);
}
public:
    // int subsetXORSum(vector<int>& nums) {
    //     int total = 0;

    //     for (int i : nums) {
    //         total |= i;
    //     }

    //     return total << (nums.size() - 1);
    // }

    int subsetXORSum(vector<int>& nums) {
        return dfs(0, 0, nums);
    }
};