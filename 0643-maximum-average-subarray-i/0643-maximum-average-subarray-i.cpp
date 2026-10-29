class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int maxi=INT_MIN;

        for (int i = 0; i < k; i++) 
        {
            sum += nums[i];
        }
        maxi=max(maxi,sum);
        
        for (int j = k; j < n; j++) {
            sum += nums[j];  
               
            sum -= nums[j- k];   
            maxi = max(maxi,sum);
        }

        return (double) maxi / k;
    }
};
