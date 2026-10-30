class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) 
    //  Simple meaning: Humein longest continuous substring find karni hai 
    //  jiska total conversion cost maxCost se zyada na ho.

    // a-->b : cost=1
    // b-->c : cost=1
    // c-->d : cost=1
    // d-->f : cost=2

    // but 5 is grater than maxCost---> so we will take upto size 3 only
    
    // solving using Variable size sliding window
    
    {
        int maxi=0;
        int left=0;
        int n=s.size();
        int cost=0;

        for(int right=0;right<n;right++)
        {
            cost+=abs(s[right]-t[right]);

            while(cost>maxCost)
            {
                cost-=abs(s[left]-t[left]);
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};