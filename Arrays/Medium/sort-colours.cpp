class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3]={0},n=nums.size();
        for(int i=0;i<n;i++)
            arr[nums[i]]++;
        int i=0,j=0;
        while(i<n){
            while(arr[j]--){
                nums[i++]=j;
            }
            j++;
        }
    }
};