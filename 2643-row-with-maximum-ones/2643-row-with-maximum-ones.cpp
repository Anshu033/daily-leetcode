class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& arr) 
    {
        int n = arr.size();
        int m = arr[0].size();

        int maxOnes = 0;
        vector<int> ans = {0, 0};

        for(int i = 0; i < n; i++)
        {
            int ones = 0;

            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] == 1)
                {
                    ones++;
                }
            }

            if(ones > maxOnes)
            {
                maxOnes = ones;
                ans = {i, ones};
            }
        }

        return ans;
    }
};