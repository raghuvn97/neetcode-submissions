class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<vector<int>> bucket;
        bucket.resize(nums.size()+1);
        vector<int> res;

        for(int i : nums) {
            map[i]++;
        }

        for(auto p: map) {
            bucket[p.second].push_back(p.first);
        }

        for(int i = bucket.size()-1; i > -1; i--) {
            for (int j = 0; j < bucket[i].size(); j++) {
                if (k == 0) {
                    return res;
                }
                res.push_back(bucket[i][j]);
                k--;
            }
        }

        return res;
    }
};
