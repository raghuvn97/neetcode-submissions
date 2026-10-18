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
    TreeNode* __invertTree(TreeNode* node) {
        if(node == nullptr) {
            return nullptr;
        }
        TreeNode* left = __invertTree(node -> left);
        TreeNode* right = __invertTree(node -> right);
        node -> left = right;
        node -> right = left;
        return node;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) {
            return root;
        }
        return __invertTree(root);
    }
};
