class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int totalSum = 0;
        int minSum = 0;
        
        for (int num : nums) {
            totalSum += num;
            minSum = min(minSum, totalSum);
        }
        
        return max(1, 1 - minSum);
    }
};