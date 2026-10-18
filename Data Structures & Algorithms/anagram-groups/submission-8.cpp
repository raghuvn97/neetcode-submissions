class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        unordered_map<string, vector<string>> my_map;

        for(string s: strs) {
            string key = "";
            vector<int> bucket(26, 0);

            for(char c: s) {
                int idx = c - 'a';
                bucket[idx]++;
            }

            for(int i : bucket) {
                key += to_string(i) + ',';
            }

            my_map[key].push_back(s);
        }

        for(const auto& p : my_map) {
            res.push_back(p.second);
        }

        return res;
    }
};
