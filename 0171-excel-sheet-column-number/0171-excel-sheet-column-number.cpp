class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int n=columnTitle.size();
        int ans=0;
        for(int i=0;i<n;i++ )
        {
            // phle bhai alphabet ko digit me kr convert
            int value= columnTitle[i]-'A'+1;

            // ans nikal ----> same as binary & decimal

            // and yaaha excel me 26 se multiply hota hai instead of 10

            ans = ans*26 + value;

        }
        return ans;
        
    }
};