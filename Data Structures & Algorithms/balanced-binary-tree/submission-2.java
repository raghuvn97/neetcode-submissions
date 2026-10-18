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

    private int __isBalanced(TreeNode node, boolean [] balance) {
        if (node == null) {
            balance[0] = true;
            return 0;
        }
        int left = __isBalanced(node.left, balance);
        int right = 0;
        if (balance[0]) {
          right = __isBalanced(node.right, balance);
        }
        balance[0] =  balance[0] && Math.abs(left-right) <= 1 ? true: false;
        return Math.max(left, right) + 1;

    }
    public boolean isBalanced(TreeNode root) {
        boolean balance [] = new boolean [1];

        __isBalanced(root, balance);
        return balance[0];
    }
}
