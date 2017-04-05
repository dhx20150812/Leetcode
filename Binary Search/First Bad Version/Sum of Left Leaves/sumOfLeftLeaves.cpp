/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        // 使用C++中的queue来对二叉树进行遍历
        if(!root) return 0;
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *cur = q.front();
            q.pop();
            if(cur->left && !cur->left->left && !cur->left->right)
                sum += cur->left->val;
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
        return sum;
    }
};
