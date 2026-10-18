class Solution {
    public int maxProfit(int[] prices) {
        int buy = prices[0];
        int maxProfit = 0;
        
        for(int i = 1; i < prices.length; i++) {
            int currentProfit = Math.max(0, prices[i] - buy);
            buy = Math.min(buy, prices[i]);
            maxProfit = Math.max(currentProfit, maxProfit);
        }

        return maxProfit;
    }
}
