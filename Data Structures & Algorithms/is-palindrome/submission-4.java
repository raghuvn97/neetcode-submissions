class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder sb = new StringBuilder();
        for(int c=0; c < s.length(); c++) {
            if (Character.isLetterOrDigit(s.charAt(c))) {
                sb.append(Character.toLowerCase(s.charAt(c)));
            }
        }

        String s1 = sb.toString();
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
