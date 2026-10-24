class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) 
    {
        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);

            string s = to_string(nums[i]);

            reverse(s.begin(), s.end());

            int rev = stoi(s);

            st.insert(rev);
        }

        return st.size();
    }
};

