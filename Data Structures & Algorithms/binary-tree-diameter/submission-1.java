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
    private int __diameter(TreeNode node, int [] maxDiameter) {
        if(node == null) {
            return 0;
        }
        int left = __diameter(node.left, maxDiameter);
        int right = __diameter(node.right, maxDiameter);
        int diameter = left + right;
        maxDiameter[0] = Math.max(diameter, maxDiameter[0]);
        return Math.max(left, right) + 1;
    }
    public int diameterOfBinaryTree(TreeNode root) {
        int maxDiameter []= new int[1];
        __diameter(root, maxDiameter);
        return maxDiameter[0];
    }
}
