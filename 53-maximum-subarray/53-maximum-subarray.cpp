class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maximum = INT_MIN;
        for(auto x : nums){
            sum += x;
            if(sum > maximum) maximum = sum;
            if(sum < 0) sum = 0;
        }
        return maximum;
    }
};



