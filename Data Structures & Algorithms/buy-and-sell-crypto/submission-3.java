class Solution {
    public int maxProfit(int[] prices) {
        int buy = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.length; i++) {
            int currentProfit = prices[i] - buy;
            currentProfit = Math.max(currentProfit, 0);
            buy = Math.min(buy, prices[i]);
            maxProfit = Math.max(maxProfit, currentProfit);
        }

        return maxProfit;
    }
}
