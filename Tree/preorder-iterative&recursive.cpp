/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root,vector<int> &sol){
    if(root){
        sol.push_back(root->val);
        preorder(root->left,sol);
        preorder(root->right,sol);
    }
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sol;
        stack<struct TreeNode*> s;
        TreeNode* t=root;
        while(t || !s.empty()){
            if(t){
                sol.push_back(t->val);
                s.push(t);
                t=t->left;
            }
            else{
                t=s.top();
                s.pop();
                t=t->right;
            }
        }
        return sol;
    }
};