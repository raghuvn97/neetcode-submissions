class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0
        
        if len(nums) == 1:
            return nums[0]
        
        dp1 = {}
        dp2 = {}

        n = len(nums)

        def dfs(i:int, path:list[int], dp:dict) -> int:

            if i >= len(path):
                return 0

            if i in dp:
                return dp[i]
            
            dp[i] = max(path[i] + dfs(i + 2, path, dp), dfs(i + 1, path, dp))
            return dp[i]
        
        return max(dfs(0, nums[1:n], dp1), dfs(0, nums[0:n-1], dp2))