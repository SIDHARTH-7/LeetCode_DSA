class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if(j!=i && boxes[j]=='1')
                    sum+=abs(j-i);
            }
            arr.push_back(sum);
        }    
        return arr;
    }
};