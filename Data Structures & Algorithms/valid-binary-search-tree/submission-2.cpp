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
    bool __isValid(TreeNode* node, int min, int max) {
        if(!node) return true;
        if(min < node->val && node->val < max) {
            return __isValid(node->left, min, node->val) 
        && __isValid(node->right, node->val, max);
        } else {
            return false;
        }    
    }
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        return __isValid(root, INT_MIN, INT_MAX);
    }
};
