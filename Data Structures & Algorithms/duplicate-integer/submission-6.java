class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> myset = new HashSet<>();

        for(int i: nums) {
            if(myset.contains(i)) {
                return true;
            }
            myset.add(i);
        }
        return false;
    }
}
