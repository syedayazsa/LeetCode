class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int maximum = -1; 
        int n = nums.size();
        for(int i = 0; i < n - 2; i++){
            maximum = max(maximum, nums[i]);
            if(maximum > nums[i + 2]) return false;
        }   
        return true;
    }
    // bool isIdealPermutation(vector<int>& nums) {
    //     int cmax = 0, n = nums.size();
    //     for (int i = 0; i <= n - 3; ++i) {
    //         cmax = max(cmax, nums[i]);
    //         if (cmax > nums[i + 2]) return false;
    //     }
    //     return true;
    // }
};

