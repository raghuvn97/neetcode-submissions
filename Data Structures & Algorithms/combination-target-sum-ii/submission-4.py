class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        
        res = []
        path = []

        candidates.sort()

        def dfs(i, target):

            if target == 0:
                res.append(path[:])
                return
            
            if target < 0 or i >= len(candidates):
                return

            for start in range(i, len(candidates)):
                if start > i and candidates[start - 1] == candidates[start]:
                    continue
                path.append(candidates[start])
                dfs(start + 1, target - candidates[start])
                path.pop()
                #dfs(start + 1, target) loop handles the skip part
        
        dfs(0, target)
        return res
