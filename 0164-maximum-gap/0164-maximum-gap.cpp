class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        int maxi=0;
        int n=nums.size();
        if(n<2)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());

        for(int i=1;i<n;i++)
        {
            int gap = nums[i]-nums[i-1];
            maxi=max(maxi,gap);
        }
        return maxi;
        
    }
};