class Solution {
public:
    void solve(int idx, vector<int>& nums, int k,
               vector<int>& curr, int& count) {

        for (int i = idx; i < nums.size(); i++) {

            bool valid = true;

            for (int x : curr) {
                if (abs(nums[i] - x) == k) {
                    valid = false;
                    break;
                }
            }

            if (!valid) continue;

            curr.push_back(nums[i]);

            count++;

            solve(i + 1, nums, k, curr, count);

            curr.pop_back();
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int> curr;
        int count = 0;

        solve(0, nums, k, curr, count);

        return count;
    }
};