class Solution {
public:
void traversal(TreeNode* root,vector<vector<int>> &t,int *i){    
        if(!root){
            *i-=1;
            return;
        }
        if(t.size()>*i)
            t[*i].push_back(root->val);
        else{
            vector<int> temp;
            temp.push_back(root->val);
            t.push_back(temp);
        }
        cout<<root->val<<": "<<*i<<"\n";
        *i+=1;
        traversal(root->left,t,i);
        *i+=1;
        traversal(root->right,t,i);
        *i-=1;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> t;
        int i=0;
        traversal(root,t,&i);
        return t;    
    }
};