class Solution {
public:

    string encode(vector<string>& strs) {
        string encode = "";
        for(string word: strs) {
            encode += to_string(word.size()) + "#" + word;
        }
        cout << encode << endl;
        return encode;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int l = 0;
        int r = 0;
        while(r < s.length()) {
            if(s[r] == '#' && isdigit(s[r-1])) {
                int len = stoi(s.substr(l, r-l));
                res.push_back(s.substr(r+1,len));
                l = r+1+len;
            }
            r++;
        }
        return res;
    }
};
