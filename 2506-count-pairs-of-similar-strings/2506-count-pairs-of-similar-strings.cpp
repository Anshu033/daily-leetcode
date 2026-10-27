class Solution {
public:
    bool distinct(string a, string b)
    {
        bool freq1[26] = {false};
        bool freq2[26] = {false};

        for(char ch : a)
            freq1[ch - 'a'] = true;

        for(char ch : b)
            freq2[ch - 'a'] = true;

        for(int k = 0; k < 26; k++)
        {
            if(freq1[k] != freq2[k])
                return false;
        }

        return true;
    }

    int similarPairs(vector<string>& words)
    {
        int count = 0;
        int n = words.size();

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(distinct(words[i], words[j]))
                    count++;
            }
        }

        return count;
    }
};