class Solution {
public:
    int numberOfSpecialChars(string word)
    {
        vector<int>lower(26,0);
        vector<int>upper(26,0);

        for(int i=0;i<word.size();i++)
        {
            char ch = word[i];

            if(ch>='a' && ch<='z')
            {
                lower[ch-'a']=1;
            }
            else
            upper[ch-'A']=1;
        }

        int ans=0;

        for(int i=0;i<26;i++)
        {
            if(lower[i]==1 && upper[i]==1)
            {
                ans++;
            }
        }
        return ans;
        
    }
};