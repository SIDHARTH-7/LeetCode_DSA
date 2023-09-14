class Solution {
public:
    int diam(TreeNode* root,int *m){
        if(!root)
            return 0;
        int lh=diam(root->left,m);
        int rh=diam(root->right,m);
        *m=max(*m,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int m=0;
        int k= diam(root,&m); 
        return m;
    }
};