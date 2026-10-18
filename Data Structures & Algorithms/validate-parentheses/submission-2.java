class Solution {
    public boolean isValid(String s) {
        String open = "{([";
        String close = "})]";

        Stack<Character> stack = new Stack<>();

        for(int i=0; i< s.length(); i++) {
            if (open.indexOf(s.charAt(i)) != -1) {
                stack.push(s.charAt(i));
            } else {
                if (stack.isEmpty()) return false;
                int c = stack.pop();
                if(open.indexOf(c) == close.indexOf(s.charAt(i))) {
                    continue;
                } else {
                    return false;
                }
            }
        }

        return stack.isEmpty();
    }
}
