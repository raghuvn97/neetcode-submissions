# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:

        def balanced(node: Optional[TreeNode]) -> (int, bool):

            if not node:
                return (0, True)

            left = balanced(node.left)
            right = (0, False)
            if left[1]:
                right = balanced(node.right)

            status = True if abs(left[0] - right[0]) <= 1 and left[1] and right[1] else False
            return (1 + max(left[0], right[0]), status)

        if not root:
            return True

        return balanced(root)[1]