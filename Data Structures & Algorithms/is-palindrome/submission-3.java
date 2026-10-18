class Solution {
    public boolean isPalindrome(String s) {
        String s1 = "";
        for(int c=0; c < s.length(); c++) {
            if (Character.isLetterOrDigit(s.charAt(c))) {
                s1 = s1 + Character.toLowerCase(s.charAt(c));
            }
        }

        System.out.println(s1);
        int l = 0;
        int r = s1.length()-1;

        while(l < r) {
            if( s1.charAt(l) != s1.charAt(r)) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
}
