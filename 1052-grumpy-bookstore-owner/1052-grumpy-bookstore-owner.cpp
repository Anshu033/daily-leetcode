class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) 
    {
        int n=customers.size();
        int total=0;
        int sum=0;
        int maxi=0;

        // store customers who are happy already

        for(int i=0;i<n;i++)
        {
            if(grumpy[i]==0)
            {
                total+=customers[i];
            }
        }

        // single window
        for(int i=0;i<minutes;i++)
        {
            if(grumpy[i]==1)
            {
                sum+=customers[i];
            }
        }
        maxi=max(maxi,sum);

        // window slide krte hai

        for(int j=minutes;j<n;j++)
        {
            if(grumpy[j]==1)
            {
                sum+=customers[j];
            }
            if(grumpy[j-minutes]==1)
            {
                sum-=customers[j-minutes];
            }
            maxi=max(maxi,sum);
        }
        return total+maxi;

        
    }
};