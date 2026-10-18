class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> set = new HashSet<>();

        for(int i : nums) {
            set.add(i);
        }
        int longest = 0;

        for(int i: set) {
            int num = i;
            int locallong = 0;
            if(!set.contains(num-1)) {
                locallong++;
                while (set.contains(num +1)) {
                    locallong++;
                    num++;
                }
                longest = Math.max(longest, locallong);
            }
        }

        return longest;
    }
}
