class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        currprice = prices[0]
        maxprofit = 0
        currprofit = 0

        for i in range(len(prices)):
            currprofit = prices[i] - currprice
            if currprofit < 0:
                currprofit = 0
            else:
                maxprofit += currprofit
                currprice = prices[i]
            
            if prices[i] < currprice:
                currprice = prices[i]
        
        return maxprofit