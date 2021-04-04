class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        
        int col;
        int l = items.size();
        int matches = 0;
        
        //To determine which column to look for
        if(ruleKey.equals("color"))
            col = 1;
        else if(ruleKey.equals("name"))
            col = 2;
        else
            col = 0;
        
        for(int i = 0; i<l; i++){
            if(items.get(i).get(col).equals(ruleValue)){
                matches++;
            }
        }
        
        return matches;
    }
}