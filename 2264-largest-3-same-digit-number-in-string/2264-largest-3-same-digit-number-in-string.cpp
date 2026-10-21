class Solution {
public:
    string largestGoodInteger(string nums) 
    {
        char maxChar=' ';
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1] && nums[i]==nums[i-2])
            {
                maxChar=max(maxChar,nums[i]);
            }
        }
         if(maxChar==' ')
        {
            return "";
        }
        return string(3,maxChar);
    }
};