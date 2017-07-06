class Solution {
public:
    TreeNode *buildTree(vector<int> &preorder,vector<int> &inorder,int l1,int h1,int l2,int h2){
        TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));
        root->val = preorder[l1];      // 先序的第一个结点作为子树的根结点
        int i;
        for(i = l2; inorder[i]!=root->val; i++);   // 在中序中找到根节点的位置，并以此划分左右子树
        int llen = i - l2;
        int rlen = h2 - i;
        if(llen) // 从根节点的位置拆分数组，继续递归
            root->left = buildTree(preorder,inorder,l1+1,l1+llen,l2,l2+llen-1);
        else
            root->left = NULL;
        if(rlen)
            root->right = buildTree(preorder,inorder,h1-rlen+1,h1,h2-rlen+1,h2);
        else
            root->right = NULL;
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0 || inorder.size()==0)
            return NULL;
        return buildTree(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
    }
};
