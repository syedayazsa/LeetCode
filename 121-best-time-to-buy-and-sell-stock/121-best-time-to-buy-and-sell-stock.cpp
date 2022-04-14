class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int t = 0;
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[t] > prices[i]) t = i;
            else{
                maxProfit = max(prices[i] - prices[t], maxProfit);
            }
        }
        return maxProfit;
    }
};