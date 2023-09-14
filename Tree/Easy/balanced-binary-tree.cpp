class Solution {
public:
    int isbalanced(TreeNode* root){
        if(!root)
            return 0;
        int lchild = isbalanced(root->left);//cout<<lchild<<" ";
        if(lchild == -1)
            return -1;
        int rchild = isbalanced(root->right);//cout<<rchild<<"\n";
        if(rchild == -1)
            return -1;
        if(abs(lchild-rchild)>1)
            return -1;
        else
            return 1+max(lchild,rchild);
    }
    bool isBalanced(TreeNode* root) {
        if(isbalanced(root)==-1)
            return false;
        return true;
    }
};