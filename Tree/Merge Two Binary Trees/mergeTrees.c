/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    
    if(!t1) return t2;
    if(!t2) return t1;
    
    struct TreeNode *root = t1;
    root->val = t1->val + t2->val;
    root->left = mergeTrees(t1->left,t2->left);
    root->right = mergeTrees(t1->right,t2->right);
    return root;
}
