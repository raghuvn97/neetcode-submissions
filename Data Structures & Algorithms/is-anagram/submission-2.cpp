class Solution {
public:
unordered_map <char, int> s_map;
unordered_map <char, int> t_map;
    bool isAnagram(string s, string t) {
        for(char c : s) {
            s_map[c] = s_map[c] + 1;
        }

        for(char c : t) {
            t_map[c] = t_map[c] + 1;
        }

        if (s_map.size() != t_map.size()) {
            return false;
        }

        for(const auto &pair : s_map) {
            if (t_map.find(pair.first) != t_map.end()) {
                if (t_map[pair.first] == pair.second){
                    continue;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;

    }
};
