class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        int n=s.size();
        int k=p.size();

        vector<int>ans;
        if(k>n)
        {
            return ans;
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
            ans.push_back(0);
        }
        for(int j=k;j<n;j++)
        {
            freq2[s[j]-'a']++;
            freq2[s[j-k]-'a']--;

            if(freq1==freq2)
            {
                ans.push_back(j-k+1);
            }
        }
        return ans;
        
    }
};