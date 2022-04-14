class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int bp = INT_MAX;
        
        for(int i = 0; i < prices.size(); i++){
            bp = min(bp, prices[i]);
            if(prices[i] > bp){
                profit = max(profit, prices[i]-bp);
            }
        }
        return profit;
    }
};