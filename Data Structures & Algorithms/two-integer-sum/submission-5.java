class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> mymap = new HashMap<Integer, Integer>();
        int res[] = new int[2];
        for(int i = 0; i< nums.length; i++) {
            int complement = target - nums[i];
            if (mymap.containsKey(complement)) {
                res[0] = mymap.get(complement);
                res[1] = i;
            } else {
                mymap.put(nums[i], i);
            }
        }
        return res;
    }
}
