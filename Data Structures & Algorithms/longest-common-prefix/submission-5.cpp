class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res= "";

        string sample = strs[0];

        for(int i = 0; i < sample.length(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if(strs[j].length() == i) {
                    return res;
                }
                if(strs[j].at(i) == sample.at(i)) {
                    continue;
                } else {
                    return res;
                }
            }
            res = res + sample.at(i);
        }
        cout << res << endl;
        return res;
    }
};