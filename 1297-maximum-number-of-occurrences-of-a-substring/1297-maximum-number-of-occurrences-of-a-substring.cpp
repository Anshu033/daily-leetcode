class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) 
    {
        int n=s.size();

        unordered_map<string,int>freq;

        int maxi=0;

        for(int i=0;i<=n-minSize;i++)
        {
            string sub = s.substr(i, minSize);
            
            unordered_set<char> st;

            for(char ch : sub) {
                st.insert(ch);
            }

            if(st.size() <= maxLetters) {

                freq[sub]++;

                maxi = max(maxi, freq[sub]);
            }
        }
        return maxi;
        
    }
};