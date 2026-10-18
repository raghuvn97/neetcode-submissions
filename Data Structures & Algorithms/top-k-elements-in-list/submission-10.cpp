class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> res;

        for(int i : nums) {
            count[i]++;
        }
        vector<vector<int>> bucket(nums.size()+1);

        for(pair<int, int> p : count) {
            bucket[p.second].push_back(p.first);
        }
// [[], [0,1], [4,5], [2,3], [], []] 

        for(int i = bucket.size() -1; i > 0; i--) {
            for(int j=0; j < bucket[i].size(); j++) {
                if(k > 0) {
                    res.push_back(bucket[i][j]);
                    k--;
                } else {
                    break;
                }
            }
        }
        return res;
        }
};
