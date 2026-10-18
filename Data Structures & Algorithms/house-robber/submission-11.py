class Solution:
    def rob(self, nums: List[int]) -> int:
        house = {}
        n = len(nums)

        def dfs(i):
            if i >= n:
                return 0
            
            if i in house:
                return house[i]
            
            house[i] = max(nums[i] + dfs(i + 2), dfs(i + 1))

            return house[i]
        
        return dfs(0)