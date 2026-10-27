class Solution {
public:
    int countAsterisks(string s) 
    {
        int ans=0;
        int count=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|')
            {
                ans++;
            }
            
            else if(ans%2==0 && s[i]=='*' )
            {
                count++;
            }
            continue;
        }
        return count; 
    }
};