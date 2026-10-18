class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> grp;

        for(string word: strs) {
            vector<int> bucket;
            bucket.resize(26, 0);
            for(char c: word) {
                bucket[c - 'a']++;
            }
            string key = "" + bucket[0];
            for(int i = 1; i < bucket.size(); i++) {
                key += ", " + bucket[i];
            }
            grp[key].push_back(word);
        }

        for(pair<string, vector<string>> p : grp) {
            res.push_back(p.second);
        }

        return res;
    }
};
