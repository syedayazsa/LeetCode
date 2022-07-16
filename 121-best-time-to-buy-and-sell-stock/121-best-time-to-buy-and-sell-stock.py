class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        buyPrice = prices[0]
        profit = -sys.maxsize
        
        
        for i in range(1, len(prices)):
            profit = max(profit, prices[i]-buyPrice)
            if prices[i] < buyPrice:
                buyPrice = prices[i]

        return profit if profit > 0 else 0