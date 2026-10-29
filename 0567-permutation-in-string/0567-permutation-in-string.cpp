class Solution {
public:
    bool checkInclusion(string p, string s) 
    {
   
        int n=s.size();
        int k=p.size();

        
        if(k>n)
        {
            return false;
        }
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        for(int i=0;i<k;i++)
        {
            freq1[p[i]-'a']++;
            freq2[s[i]-'a']++;
        }
        if(freq1==freq2)
        {
            return true;
        }
        for(int j=k;j<n;j++)
        {
            freq2[s[j]-'a']++;
            freq2[s[j-k]-'a']--;

            if(freq1==freq2)
            {
                return true;;
            }
        }
        return false;
        
    
        
    }
};