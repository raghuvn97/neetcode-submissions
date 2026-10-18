class Solution {
public:
    vector<string> res;

    string encode(vector<string>& strs) {
        string encode = "";
        for(string s: strs) {
            encode += to_string(s.length()) + "#" + s;
        }
        cout << encode << endl;
        return encode;
    }

    vector<string> decode(string s) {
        int l = 0;
        int r = 0;
        while(r < s.length()) {
            if(s[r] == '#' && isdigit(s[r-1])) {
                //cout << s.substr(l, r-l) << endl;
                int length = stoi(s.substr(l, r-l));
                res.push_back(s.substr(r+1, length));
                l = r + length +1;
            }
            r++;
        }
        return res;
    }
};
