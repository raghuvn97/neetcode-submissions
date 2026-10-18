class Solution {
private:
int __helper(int step, int n, vector<int>& cache, vector<int>& cost) {
    if (step >= n) {
        return 0;
    }

    if(cache[step] != -1) return cache[step];

    cache[step] = min(cost[step] + __helper(step + 1, n, cache, cost), cost[step] +
    __helper(step + 2, n, cache, cost));
    return cache[step];
}
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> cache(cost.size(), -1);
        return min(__helper(0, cost.size(), cache, cost), 
        __helper(1, cost.size(), cache, cost));
    }
};
