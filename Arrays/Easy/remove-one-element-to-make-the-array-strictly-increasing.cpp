class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        bool sol=false;
        for(int i=1;i<nums.size();i++)
        {
            bool loop=true;
            int pre=0;
            for(int j=i==1?2:1;j<nums.size();j+=j+1==i?2:1)
            {
                if(nums[pre]>=nums[j])
                {
                    loop=false;
                    break;
                }
                pre=j;
            }
            if(loop==true)
            {
                sol=true;
                break;
            }
        } 
        bool loop=true;
            int pre=1;
            for(int j=2;j<nums.size();j++)
            {
                if(nums[pre]>=nums[j])
                {
                    loop=false;
                    break;
                }
                pre=j;
            }
        if(loop==true)
            {
                sol=true;
            }
        if(nums.size()==2)
            sol=true; 
        return sol;  
    }
};