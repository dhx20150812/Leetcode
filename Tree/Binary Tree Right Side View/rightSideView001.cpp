class Solution {
public:
    void DFS(TreeNode *root, int lv, vector<int> &ans){
        if(!root) return ;
        if(lv > ans.size()) ans.push_back(root->val);
        DFS(root->right,lv+1,ans);
        DFS(root->left,lv+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        DFS(root,1,res);
        return res;
    }
};
