class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int n=cardPoints.size();
        int sum=0;
        int total=0;

        // phle total nikal lete hai
        for(int i=0;i<n;i++)
        {
            total+=cardPoints[i];
        }
        int mini=INT_MAX;
        int window = n-k;
        

        // ek window ka min nikalta hu 
        for(int i=0;i<window;i++)
        {
            sum+=cardPoints[i];
        }

        mini=min(mini,sum);

        // window slide kro

        for(int j=window;j<n;j++)
        {
            sum+=cardPoints[j];
            sum-=cardPoints[j-window];

            mini=min(mini,sum);
        }
        return total-mini;
        
    }
};