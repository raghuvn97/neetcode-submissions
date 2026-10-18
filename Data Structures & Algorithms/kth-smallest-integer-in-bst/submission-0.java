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
    private void __helper(TreeNode node, List<Integer> traversal) {
        if(node == null) {
            return;
        }
        __helper(node.left, traversal);
        traversal.add(node.val);
        __helper(node.right, traversal);
    }
    public int kthSmallest(TreeNode root, int k) {
        List<Integer> traversal = new ArrayList<>();
        __helper(root, traversal);
        System.out.println(traversal);
        return traversal.get(k-1);
    }
}
