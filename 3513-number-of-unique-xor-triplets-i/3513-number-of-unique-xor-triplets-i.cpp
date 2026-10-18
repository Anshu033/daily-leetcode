class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) 
    {
        int n=nums.size();
        
        // base case

        if(n==1 || n==2)
        {
            return n;
        }

        int ans=1;  //2^0

        while(ans<=n)
        {
            ans*=2;   // 2^1,2^2,2^3
        }
        return ans;
        
    }
};