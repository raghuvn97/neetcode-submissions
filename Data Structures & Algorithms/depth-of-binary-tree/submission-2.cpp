/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    private:
    int __depth(TreeNode* node) {
        if(node == nullptr) {
            return 0;
        }
        int left = __depth(node -> left);
        int right = __depth(node -> right);
        return max(left, right) + 1;
    }
public:
    int maxDepth(TreeNode* root) {
        return __depth(root);
    }
};
