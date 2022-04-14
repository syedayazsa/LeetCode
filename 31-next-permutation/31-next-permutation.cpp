class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int s, l;
        for(s = n - 2; s >= 0; s--){
            if(nums[s] < nums[s+1]) break; 
        }
        
        if(s >= 0){
            for(l = n - 1; l > s; l--){
                if(nums[l] > nums[s]){
                    break;
                }
            }
            swap(nums[s], nums[l]);
            reverse(nums.begin() + s + 1, nums.end());
        }else reverse(nums.begin(), nums.end());
    }
};