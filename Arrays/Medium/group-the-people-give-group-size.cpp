class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> sol;
        vector<int> arr[501];
        for(int i=0;i<groupSizes.size();i++)
        {
            if(arr[groupSizes[i]].size()==groupSizes[i])
            {
                sol.push_back(arr[groupSizes[i]]);
                arr[groupSizes[i]].clear();
            }        
            arr[groupSizes[i]].push_back(i);
        } 
        for(int i=0;i<501;i++)
        {
            if(arr[i].size()!=0)
                sol.push_back(arr[i]);   
        } 
        return sol;  
    }
};