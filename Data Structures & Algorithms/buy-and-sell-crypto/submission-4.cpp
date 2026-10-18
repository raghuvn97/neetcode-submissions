class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buyPrice = prices[0];

        for(int i=1; i < prices.size(); i++){
            int profit = prices[i] - buyPrice;
            maxProfit = max(profit, maxProfit);
            if(prices[i] < buyPrice) {
                buyPrice = prices[i];
            }
        }
        return maxProfit;
    }
};
