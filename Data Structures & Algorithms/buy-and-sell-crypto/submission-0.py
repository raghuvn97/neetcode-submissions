class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxprofit = 0
        currentBuy = prices[0]
        for i in range(1, len(prices)):
            currentprofit = prices[i] - currentBuy
            maxprofit = max(currentprofit, maxprofit)
            currentBuy = min(prices[i], currentBuy)
        
        return maxprofit
        