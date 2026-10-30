class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int n=blocks.size();
        int count=0;
        int mini=INT_MAX;

        // first slide lete hai

        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='W')
            {
                count++;
            }
        }
        mini=min(mini,count);

        // slide krte hai ab

        for(int j=k;j<n;j++)
        {
            if(blocks[j]=='W')
            {
                count++;
            }
            if(blocks[j-k]=='W')
            {
                count--;
            }
            mini=min(mini,count);
        }
        return mini;
    }
};