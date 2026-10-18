class Solution {
    public boolean isValid(String s) {
        String open = "({[";
        String close = ")}]";

        Stack<Character> st = new Stack<>();

        for(int i = 0; i < s.length(); i++) {
            if(open.indexOf(s.charAt(i)) != -1) {
                st.add(s.charAt(i));
            } else {
                if(st.empty()) {
                    return false;
                }
                if(close.indexOf(s.charAt(i)) != open.indexOf(st.pop())) {
                    return false;
                }
            }
        }
        if(st.empty()) return true;

        return false;
    }
}
