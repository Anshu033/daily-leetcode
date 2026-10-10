class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zeroes = 0;
        int maxi = 0;
        int n = nums.size();

        for (int right = 0; right < n; right++) {
            
            if (nums[right] == 0) {
                zeroes++;
            }
            while (zeroes > 1) {
                if (nums[left] == 0) {
                    zeroes--;
                }
                left++;
            }
              maxi = max(maxi, right - left);
        }

        return maxi;
    }
};