# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        maxdiameter = 0
        def diameter(node: Optional[TreeNode]) -> int:
            nonlocal maxdiameter

            if not node:
                return 0
            
            left = diameter(node.left)
            right = diameter(node.right)

            d = left+right
            if maxdiameter < d:
                maxdiameter = d
            
            return max(left, right) + 1
        
        diameter(root)
        return maxdiameter