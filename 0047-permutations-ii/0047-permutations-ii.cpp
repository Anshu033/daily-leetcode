class Solution {
public:
    int n;
    vector<vector<int>> result;
    vector<bool> used;

    void solve(vector<int>& temp, vector<int>& nums)
    {
        if(temp.size() == n)
        {
            result.push_back(temp);
            return;
        }

        for(int i = 0; i < n; i++)
        {
            if(used[i])
                continue;

            if(i > 0 && nums[i] == nums[i-1] && !used[i-1])
                continue;

            // Pick kr liya 
            temp.push_back(nums[i]);
            used[i] = true;

            // Explore
            solve(temp, nums);

            // Backtrack kr
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        n = nums.size();
        result.clear();

        sort(nums.begin(), nums.end());

        used.assign(n, false);

        vector<int> temp;
        solve(temp, nums);

        return result;
    }
};