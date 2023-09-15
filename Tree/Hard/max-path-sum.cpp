class Solution {
public:
int diam(TreeNode* root,int *m){
        if(!root)
            return 0;
        int lh=max(0,diam(root->left,m));
        int rh=max(0,diam(root->right,m));
        int add=max(lh+rh,max(lh,rh));
        *m=max(*m,max(root->val,root->val+add));
        cout<<root->val<<" "<<lh<<" "<<rh<<" "<<*m<<"\n";
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int m=-10;
        if(!root->left && !root->right)
            return root->val;
        int k=diam(root,&m);
        return m;    
    }
};