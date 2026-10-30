class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
        // Variable  size sliding window 
        
        int n=nums.size();
        int left=0;
        int total=0;
        int maxi=INT_MIN;

        // total niikal leta hu
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }

        // target
        int target = total - x ;

        if(target == 0)
        {
            return n;
        }
        if(target<0)
        {
            return -1;
        }

        // ab bs subarray find krna hai jsika max sum 6 hai and uske size ko minus kr dunga n se --> answer

        // first window

        int sum=0;
        for(int right=0;right<n;right++)
        {
            sum+=nums[right];

            while(sum>target)
            {
                sum-=nums[left];
                left++;
            }
            
            if(sum == target)
            {
                maxi = max(maxi, right - left + 1);
            }
        }
        if(maxi == INT_MIN)
        {
            return -1;
        }
        return n - maxi;
    }
};