class Solution {
public:
    int maximumLengthSubstring(string s) 
    {
        int maxi = 0;
        for(int i=0;i<s.size();i++)
        {
            int freq[26]={0};//array bnayaa hai sbko usme dal do
            for(int j=i;j<s.size();j++)
            {
                freq[s[j]-'a']++;
                if(freq[s[j]-'a']>2)
                {
                break;
                }
                maxi = max(maxi,j-i+1);
            }
            

        }
        return maxi;
        
    }
};