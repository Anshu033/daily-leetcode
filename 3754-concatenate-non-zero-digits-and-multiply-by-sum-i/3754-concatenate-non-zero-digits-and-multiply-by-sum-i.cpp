class Solution {
public:
    long long sumAndMultiply(int n) 
    {
        string s = to_string(n);

        int x=0;
        int sum=0;

        for(char ch:s)
        {
            if(ch!='0')
            {
                int digit = ch-'0';  // digit nikal rhe

                x = x*10 + digit;

                sum+=digit;
            }
        }
        return 1LL*x*sum;
    }
};