class Solution {
    public int coinChange(int[] coins, int amount) {
        int n = amount +1;
        int dp [] = new int[amount +1];
        dp[0] = 0;
        for (int i = 1; i< n; i++) {
            dp[i] = n;
        }

        for(int i = 1; i< n; i++) {
            for(int j=0; j< coins.length; j++) {
                if(i - coins[j] >= 0) {
                    dp[i] = Math.min(dp[i], 1 + dp[i - coins[j]]);
                }
            }
        }

        if(dp[amount] == n) {
            return -1;
        } else {
            return dp[amount];
        }
    }
}
