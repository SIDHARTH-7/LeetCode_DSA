class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size(),i=0;
        while(target>matrix[i][n-1]){   
            i++; 
            if(i==m)
                return false;
        }
        int left=0,right=n-1,mid;
        while(left+1<right){
            mid=(left+right)/2;
            if(target>matrix[i][mid])
                left=mid;
            else if(target<matrix[i][mid])
                right=mid;
            else
                return true;
        }
        if(matrix[i][left]==target || matrix[i][right]==target)
            return true;
        return false;
    }
};