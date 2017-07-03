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
    vector<TreeNode*> findPath(TreeNode *root, TreeNode *p){
        vector<TreeNode*> path;
        TreeNode *lastVisited = NULL;
        while(root || !path.empty()){
            if(root){
                path.push_back(root);
                root = root->left;
            }
            else{
                TreeNode *node = path[path.size()-1];
                if(node->right && lastVisited!=node->right)
                    root = node->right;
                else{
                    if(node == p)
                        return path;
                    lastVisited = path[path.size()-1];
                    path.pop_back();
                    root = NULL;
                }
            }
        }
        return path;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pathP = findPath(root,p), pathQ = findPath(root,q);
        TreeNode *ans = NULL;
        int x = 0;
        while(x < min(pathP.size(),pathQ.size()) && pathP[x] == pathQ[x]){
            ans = pathP[x];
            x++;
        }
        return ans;
    }
};
