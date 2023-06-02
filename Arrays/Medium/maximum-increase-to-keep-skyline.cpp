class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int m=grid.size();
        int arr[m];
        for(int i=0;i<m;i++)
        {
            int max=0;
            for(int j=0;j<m;j++)
            {
                max=grid[j][i]>max?grid[j][i]:max;
            }
            arr[i]=max;
        }  
        int sum=0;
        for(int i=0;i<m;i++)
        {
            int max=*max_element(grid[i].begin(), grid[i].end());
            for(int j=0;j<m;j++)
            {
                int min= arr[j]>max?max:arr[j];
                sum+=grid[i][j]<min?min-grid[i][j]:0;
            }
        }
        return sum;
    }
};