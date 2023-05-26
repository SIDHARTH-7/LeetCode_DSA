int maxSubArray(int* nums, int numsSize)
{
    int max=0,local_max=0,nmax=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>nmax)
            nmax=nums[i];
        if(nums[i]>0)
            break;
        else if(nums[i]<0 && i==(numsSize-1))
            return nmax;
    }
    for(int i=0;i<numsSize;i++)
    {
        local_max+=nums[i];
        if(local_max<=0)
        {
            local_max=0;
        }
        max=max>local_max?max:local_max;
    }
    return max;
}