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
    private void dfs(TreeNode node, int res[], int max) {
        if (node == null) {
            return;
        }

        if (node.val >= max) {
            res[0]++;
        }
        max = Math.max(node.val, max);
        dfs(node.left, res, max);
        dfs(node.right, res, max);
    }
    public int goodNodes(TreeNode root) {
        int res[] = new int[1];
        dfs(root, res, Integer.MIN_VALUE);
        return res[0];
    }
}
