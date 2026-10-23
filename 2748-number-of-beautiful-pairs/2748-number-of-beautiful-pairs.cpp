class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) 
    {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                vector<int>temp={nums[i],nums[j]};

                int first = temp[0];
                int last = temp[1]%10;

                while(first>=10)
                {
                    first = first/10;
                }

                if(gcd(first,last)==1)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};