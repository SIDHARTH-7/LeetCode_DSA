class Solution {
public:
    int maxDepth(TreeNode* root) {
        int maximum=0;
        int lmax=0;
        stack<int> s;
        stack<TreeNode*> st;
        TreeNode* t=root;
        if(!t)
            return 0;
        maximum=max(maximum,lmax);
        while(t || !s.empty()){
            if(t){
                lmax++;
                s.push(lmax);
                maximum=max(maximum,lmax);
                st.push(t);
                t=t->left;
            }
            else{
                t=st.top();st.pop();
                lmax=s.top();s.pop();
                t=t->right;
            }
        }
        return maximum;
    }
};