# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        def dfs(node, depth):

            if not node:
                return 0
            
            left =  1 + dfs(node.left, depth)
            right = 1 + dfs(node.right, depth)

            height = depth + max(right, left)

            return height
        
        return dfs(root, 0)