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
    bool getPath(TreeNode * root, vector < TreeNode* > & arr,TreeNode* ptr) {
  
        if (!root)
            return false;
        arr.push_back(root);
        if (root==ptr)
            return true;
        if (getPath(root -> left, arr, ptr) ||
            getPath(root -> right, arr, ptr))
            return true;   
        arr.pop_back();
        return false;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector <TreeNode*> s1;
        vector <TreeNode*> s2;
        bool res=getPath(root,s1,p);
        bool res2=getPath(root,s2,q);
        int n1=s1.size();
        int n2=s2.size();
        int n=min(n1,n2);
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i])
                return s1[i-1];
        }
        return n1>=n2?s2[n-1]:s1[n-1];
    }
};