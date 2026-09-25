class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        //overflow case
        //edge case
        if(dividend==INT_MIN && divisor==-1)
        return INT_MAX;

        // answer negative or positive
        bool negative = (dividend<0)^(divisor<0);

        // positive bnao

        long long a = abs((long long) dividend);
        long long b = abs((long long) divisor);

        long long ans = 0;

        for(int i=31;i>=0;i--)
        {
            if((b<<i )<=a)
            {
                a-=(b<<i);
                ans+=(1LL<<i);
            }
        }

        if(negative)
        ans=-ans;
        return(int)ans;
        
    }
};