class Solution {
public:
    int maxProduct(int n) 
    {
        int maxi1=0; // sbse bara 
        int maxi2=0;  // 2nd sbse bara

        while(n>0)
        {
            int digit = n%10;
            if(digit>maxi1)
            {
                maxi2=maxi1;
                maxi1=digit;
            }
            else if(digit>maxi2)
            {
                maxi2=digit;
            }
            n=n/10;
        }
        return maxi1*maxi2;
    }
};