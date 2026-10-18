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
bool __isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) {
        return true;
    }

    if((p && !q) || (!p && q)) {
        return false;
    }

    if(p -> val != q -> val) {
        return false;
    }

    return __isSameTree(p -> left, q -> left) && __isSameTree(p -> right, q -> right);
} 
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return __isSameTree(p,q);
    }
};
