class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length == 0){
            return 0;
        }
        if(nums.length == 1){
            return 1;
        }
        
        TreeMap<Integer, Integer> tm = new TreeMap<>();
        int longestConsec = 1;
        int tempConsec = 1;
        for(int i = 0; i<nums.length; i++){
            if(!tm.containsKey(nums[i])){
                tm.put(nums[i], 0);
            }
            tm.put(nums[i], tm.get(nums[i]) + 1);
        }
        ArrayList<Integer> al = new ArrayList<>(tm.keySet());
        for(int i = 0; i<al.size() - 1; i++){
            if(al.get(i+1) - 1 == al.get(i)){
                tempConsec++;
            }
            else{
                tempConsec = 1;
            }
            longestConsec = Math.max(tempConsec, longestConsec);
        }
        return longestConsec;
    }
}