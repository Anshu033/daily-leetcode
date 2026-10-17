class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) 
    {
        int n=nums.size();
        vector<int>result(n);

        // step1: Find total XOR 
        int  currXor  =0;
        for(int i=0;i<n;i++)
        {
            currXor^=nums[i];

        }

        // step2: To find dlip, first find mask having all bits set 1

        int mask = (1 << maximumBit) - 1;

        for(int i=0;i<n;i++)
        {
            int k=currXor^mask;
            result[i]=k;
            currXor^=nums[n-i-1];
        }
        return result;
    }
};