class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
 
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            long long value=0;
            for(int i=0;i<nums.size();i++)
            {
                value+=(nums[i]+mid-1)/mid;

            }
            if(value<=threshold)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;

            }

        }
        return low;
        
    }
};