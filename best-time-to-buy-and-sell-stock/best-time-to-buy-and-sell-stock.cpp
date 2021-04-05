class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        int minPrice = INT_MAX;
        
        for(int i = 0; i<n; i++){
            minPrice = min(prices[i], minPrice);
            if(prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
    }
};