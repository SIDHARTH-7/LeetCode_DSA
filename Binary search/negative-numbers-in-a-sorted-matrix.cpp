class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int m=grid.size(),n=grid[0].size();
        int i=n-1,j=0;
        while(j<m)
        {
            while(i>=0 && grid[j][i]<0  )
            {
                count+=m-j;
                i--;
            }
            j++;
        }
        return count;
    }
};