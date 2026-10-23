class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int i=0;
        int j=n-1;

        unordered_set<double>st;

        while(i<j)
        {
            double avg=(nums[i]+nums[j])/2.0;
            st.insert(avg);
            i++;
            j--;
        }
        return st.size();
        
    }
};