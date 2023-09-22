class Solution {
public:
    void traversal(TreeNode* root,vector<vector<int>> &t,int *i){    
        if(!root)
            return;
        if(*i>0)
            *i-=1;
        traversal(root->left,t,i);
        *i+=2;
        if(t.size()>*i-1)
            t[*i-1].push_back(root->val);
        else{
            vector<int> temp;
            temp.push_back(root->val);
            t.push_back(temp);
        }
        cout<<root->val<<": "<<*i<<"\n";
        traversal(root->right,t,i);
        *i-=1;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> t;
        int i=-1;
        traversal(root,t,&i); 
        return t; 
    }
};