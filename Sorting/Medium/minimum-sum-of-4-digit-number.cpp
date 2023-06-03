class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        while(num!=0)
        {
            arr.push_back(num%10);
            num/=10;
        }  
        sort(arr.begin(), arr.end());  
        int sum=0;
        sum+=arr[0]*10+arr[1]*10+arr[2]+arr[3];
        return sum;
    }
};