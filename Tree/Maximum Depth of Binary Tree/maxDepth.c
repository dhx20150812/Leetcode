/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(!root)
        return 0;
    int val1 = maxDepth(root->left);
    int val2 = maxDepth(root->right);
    return (val1>val2?val1:val2)+1;
}