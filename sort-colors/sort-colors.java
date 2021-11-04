class Solution {
    public void sortColors(int[] nums) {
        int c0 = 0; 
        int c1 = 0;
        int c2 = 0;
        for(int i=0; i<nums.length; i++){
            if(nums[i] == 0)
                c0++;
            if(nums[i] == 1)
                c1++;
        }
            for(int x=0; x<c0; x++)
                nums[x] = 0;
            for(int y=c0; y<(c0+c1); y++)
                nums[y] = 1;
            for(int z=(c0+c1); z<nums.length; z++)
                nums[z] = 2;
        }
    }