/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if((root->val - p->val)*(root->val - q->val) < 1)
        return root;
    return lowestCommonAncestor((root->val > p->val)?root->left:root->right,p,q);
}
