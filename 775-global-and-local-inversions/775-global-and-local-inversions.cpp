class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 or n == 1 or n == 2) return true;
        
        int maximum = -1;
        for(int i = 0; i <= nums.size() - 3; i++){
            maximum = max(maximum, nums[i]);
            if(maximum > nums[i + 2]) return false;
        }
            
        return true;
    }
};

