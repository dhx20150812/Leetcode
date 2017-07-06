class Solution {
public:
    TreeNode *buildTree(vector<int>& inorder,vector<int>& postorder,int l1,int h1,int l2,int h2){
        TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));
        root->val = postorder[h2];
        int i;
        for(i=0; inorder[i]!=root->val; i++);
        int llen = i - l1;
        int rlen = h1 - i;
        if(llen)
            root->left = buildTree(inorder,postorder,l1,l1+llen-1,l2,l2+llen-1);
        else
            root->left = NULL;
        if(rlen)
            root->right = buildTree(inorder,postorder,h1-rlen+1,h1,h2-rlen,h2-1);
        else
            root->right = NULL;
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()==0 || postorder.size()==0)
            return NULL;
        return buildTree(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1);
    }
};
