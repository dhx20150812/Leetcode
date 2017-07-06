class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            res.push_back(Q.back()->val);
            int size = Q.size();
            for(int i=0; i<size; i++){
                TreeNode *p = Q.front();
                Q.pop();
                if(p->left) Q.push(p->left);
                if(p->right) Q.push(p->right);
            }
        }
        return res;
    }
};
