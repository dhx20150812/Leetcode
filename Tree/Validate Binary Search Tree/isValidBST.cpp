class Solution {
public:
    void helper(TreeNode *root, vector<int> &ans){
        if(!root) return;
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        vector<int> ans;
        helper(root,ans);
        for(int i=0;i<ans.size()-1;i++)
            if(ans[i] >= ans[i+1])
                return false;
        return true;
    }
};
