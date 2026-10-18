/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    private TreeNode __invert(TreeNode node) {
        if(node == null) {
            return null;
        }
        TreeNode left = __invert(node.left);
        TreeNode right = __invert(node.right);
        node.left = right;
        node.right = left;
        return node;
    }
    public TreeNode invertTree(TreeNode root) {
        return __invert(root);
    }
}
