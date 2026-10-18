class Solution {
public:
    bool isValid(string s) {
        string open = "([{";
        string close = ")]}";
        stack<char> st;
        for(char c:s) {
            if(open.find(c) != string::npos) {
                st.push(c);
            } else {
                if(st.empty()) {
                    return false;
                }
                if(c == ')' && st.top() != open[0]) {
                    return false;
                } else if( c == ']' && st.top() != open[1]) {
                    return false;
                } else if(c == '}' && st.top() != open[2]) {
                    return false;
                } else {
                    st.pop();
                }
            }
        }
        if(st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
