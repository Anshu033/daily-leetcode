class Solution {
public:
    int minSwaps(vector<int>& nums) 
    {
        int n=nums.size();
        int k=0;
        int count=0;
        int mini=INT_MAX;
        
        // phle 1 count kr lete hai

        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                k++;
            }
        }
        // ab mujh k mil gya ...jo ki ek window bn jayega actually

        // first window
        for(int i=0;i<k;i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
        }
        mini=min(mini,count);

        // window slide kr

        for(int j=k;j<n+k-1;j++)
        {
            if(nums[j%n]==0)
            {
                count++;
            }
            if(nums[(j-k)%n]==0)
            {
                count--;
            }
            mini=min(mini,count);
        }
        return mini;
    }
};