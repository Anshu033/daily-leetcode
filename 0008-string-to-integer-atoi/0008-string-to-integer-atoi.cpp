class Solution {
public:
    int myAtoi(string s) 
    {
        int i=0;
        int sign = 1;
        long long ans= 0;
        int n = s.length();

        while(i<n && s[i]==' ')
        {
            i++;
        }
        // sign ko dekh ab 
        if(i<n && s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(i<n && s[i]=='+')
        {
            i++;
        }
        // digit wala kaam

        for(;i<n;i++)
        {
            if(!isdigit(s[i]))
            {
                break;
            }
            ans = ans*10+(s[i]-'0');

            // overflow check krlete hai

            if(sign*ans>=INT_MAX)
            return INT_MAX;

            if(sign*ans<=INT_MIN)
            return INT_MIN;
        }
        return sign*ans;
        
    }
};