class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;

        //  Frequency count karo
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        //  Maximum frequency find karo
        int maxi = 0;

        for (auto it : mp) {
            maxi = max(maxi, it.second);
        }

        //  Maximum frequency ka total count
        int ans = 0;

        for (auto it : mp) {
            if (it.second == maxi) {
                ans += it.second;
            }
        }

        return ans;
    }
};