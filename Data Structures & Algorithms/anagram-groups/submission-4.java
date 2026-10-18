class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> map = new HashMap<>();
        List<List<String>> res = new ArrayList<>();
        for(String s : strs) {
            List<Integer> bucket = new ArrayList<>(
                Collections.nCopies(26, 0)
            );
            for(int i = 0; i < s.length(); i++) {
                int index = s.charAt(i) - 'a';
                bucket.set(index, bucket.get(index) + 1);
            }
            String key = bucket.toString();
            List<String> li = map.getOrDefault(key, new ArrayList<>());
            li.add(s);
            map.put(key, li);
        }

        for(Map.Entry<String, List<String>> e :map.entrySet()) {
            res.add(e.getValue());
        }

        return res;
    }
}
