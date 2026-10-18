class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder br = new StringBuilder();

        for(int i = 0; i < s.length(); i++) {
            if(Character.isLetterOrDigit(s.charAt(i))) {
                br.append(Character.toLowerCase(s.charAt(i)));
            }
        }

        String s1 = br.toString();

        int l = 0;
        int r = s1.length() -1;

        while(l < r) {
            if(s1.charAt(l) != s1.charAt(r)) {
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
}
