class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int arr[101]={0},gp=0;
        for(int i=0;i<nums.size();i++) 
        {    
            arr[nums[i]]++;
        }  
        for(int i=0;i<101;i++)
        {
            gp+=arr[i]*(arr[i]-1)/2;
        } 
        return gp;
    }
};