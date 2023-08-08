class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=1;
        int ele=nums[0];
        for(int i=1;i<n;i++){
            if(cnt==0){
                ele=nums[i];
                cnt++;
            }
            else if(ele==nums[i])
                cnt++;
            else
                cnt--;
        }
        count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele)
                count++;
            if(count>n/2)
                return ele;
        }
        return -1;
    }
};