class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> value;
        vector<vector<string>> res;

        for(string s: strs) {
            int bucket[26] = {0};
            for (char c : s) {
                bucket[c - 'a']++;
            }
            string key = "";
            for(int i : bucket) {
                key = key + " " + to_string(i);
            }
            value[key].push_back(s);
        }

        for(auto m : value) {
            res.push_back(m.second);
        }

        return res;
    }
};
