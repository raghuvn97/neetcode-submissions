# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        length = 0

        def diameter(node: Optional[TreeNode]) -> int:
            nonlocal length
            if not node:
                return 0
            
            left = diameter(node.left)
            right = diameter(node.right)
            length = max(length, left + right)
            return 1 + max(left, right)

        if not root:
            return 0
         
        diameter(root)
        return length
        