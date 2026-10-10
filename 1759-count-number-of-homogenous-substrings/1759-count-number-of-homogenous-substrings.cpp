class Solution {
public:
    int countHomogenous(string s) 
    {
        long long result = 0;
        long long count = 0;
        int mod = 1e9 + 7;
        for(int i=0;i<s.length();i++)
        {
            if(i>0 && s[i]==s[i-1])
            {
                count++;
            }
            else{
                count=1;
            }
            result=(result+count)%mod;

        }
        return result;
        
    }
};