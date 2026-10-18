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
    void __kthSmallest(TreeNode* node, int& k, int& result) {
        if (!node || k == 0){
            return;
        }

        __kthSmallest(node->left, k , result);
        k--;
        if(k == 0) {
            result = node -> val;
            return;
        }
        __kthSmallest(node->right, k, result);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int res = 0;
        __kthSmallest(root, k, res);
        return res;
    }
};
