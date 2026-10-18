class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> freq(nums.size()+1);

        unordered_map<int, int> count;

        for(int i : nums) {
            count[i]++;
        }

        for(const auto& p: count) {
            freq[p.second].push_back(p.first);
        }

        vector<int> res;

        for(int i = freq.size() - 1; i > -1; i--) {
            for(int j = freq[i].size() - 1; j > -1; j--){
                if (k > 0) {
                    res.push_back(freq[i][j]);
                    k--;
                } else {
                    break;
                }
            }
        }

        return res;
    }
};
