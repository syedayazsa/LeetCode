class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int cmax = 0, n = nums.size();
        for (int i = 0; i <= n - 3; ++i) {
            cmax = max(cmax, nums[i]);
            if (cmax > nums[i + 2]) return false;
        }
        return true;
    }
};

