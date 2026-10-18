class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        for(char c : s) {
            s_map[c]++;
        }

        for(char c: t) {
            t_map[c]++;
        }

        for(pair<char, int> p : s_map) {
            if(t_map[p.first] != p.second) {
                return false;
            }
        }

        return true;
    }
};
