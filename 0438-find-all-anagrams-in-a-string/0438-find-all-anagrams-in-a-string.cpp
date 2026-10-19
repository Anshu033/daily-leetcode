class Solution {
public:

    bool allZero(vector<int>&counter)
    {
        for(int i=0;i<counter.size();i++)
        {
            if(counter[i]!=0)
            return false;
        }
         return true;
    }
    
    vector<int> findAnagrams(string txt , string pat ) 
    {
        int n=txt.size();
      
      // step 1 : Frequency store kra leta hu
        vector<int>counter(26,0);

        for(int i=0;i<pat.size();i++)
        {
            char ch = pat[i];
            counter[ch-'a']++;
        }

        // step 2. Traverse krke update krte rh
        int i=0,j=0,k=pat.size();
        vector<int>result;

        while(j<n)
        {
            counter[txt[j]-'a']--;

            if(j-i+1==k)
            {
                if(allZero(counter))
                {
                    result.push_back(i);
                }
                counter[txt[i]-'a']++;
                i++;
            }
            j++;
        }
        return result;

        
    }
};