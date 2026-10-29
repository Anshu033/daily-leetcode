class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        int n=nums.size();
        unordered_set<int> st;

        for(int j=0;j<n;j++)
        {
            if(st.find(nums[j])!=st.end())
            {
                return true;
            }
            st.insert(nums[j]);

            if(st.size()>k)
            {
                st.erase(nums[j-k]);
            }
        }
        return false;
        
    }
};