class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long  low=1;
        long high=num;

        if(num==1)
        return true;

        while(low<=high)
        {
            long mid=low+(high-low)/2;
            long product=mid*mid;

            if(product==num)
            {
                return true;
            }
            if(product<num)
            {
                low=mid+1;
            }
            if(product>num)
            {
                high=mid-1;
            }

        }
        return false;
        
    }
};