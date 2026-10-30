/* DON'T GET PANICKED WHILE SEEING THIS QUESTION

THIS IS THE SIMPLEST QUESTION OF VARIABLE SIZE SLIDING WINDOW

THIS IS SIMPLY---> LONGEST SUBARRAY WITH ATMOST 2 DISTICT ELEMENTS

LETS REFINE IT---> */

class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int maxi=0;
        int n=fruits.size();
        int left=0;
        unordered_map<int,int>freq;

        for(int right=0;right<n;right++)
        {
            freq[fruits[right]]++;

            while(freq.size()>2)
            {
                freq[fruits[left]]--;

                if(freq[fruits[left]]==0)
                {
                    freq.erase(fruits[left]);
                }
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};