class Solution {
public:
    int concatenatedBinary(int n) 
    {
        int M = 1e9+7;
        long result=0;

        for(int num=1;num<=n;num++)
        {
            int digits=log2(num)+1;
            result=((result<<digits %M)+num)%M;
        }
        return result;

    }
};