class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - curr;
            maxProfit = max(maxProfit, profit);
            curr = min(curr, prices[i]);
        }

        return maxProfit;
    }
};
