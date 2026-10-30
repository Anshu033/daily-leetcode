class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) 
    {
        int n=nums.size();
        long long sum=0;
        long long maxi=0;

        unordered_map<int,int> freq;
        // ek window ka kro
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
            freq[nums[i]]++;
        }
        if(freq.size()>=m)
        {
            maxi=max(maxi,sum);
        }

        // window slide

        for(int j=k;j<n;j++)
        {
            sum+=nums[j];
            freq[nums[j]]++;

            sum-=nums[j-k];
            freq[nums[j-k]]--;

            if(freq[nums[j-k]]==0)
            {
                freq.erase(nums[j-k]);
            }
            if(freq.size()>=m)
            {
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};