class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        // the size of num1 is m+n ... where 3 elements are of m and remaining are empty
        
        /*for(int i = 0; i < n; i++)
          {
             nums1[m+i] = nums2[i];
          } 
          ---> copy krdo nums2 ke elemnts ko un balnk spaces of nusm 1 me */

          for(int i=0;i<n;i++)
          {
            nums1[m+i]=nums2[i];
          }
          sort(nums1.begin(), nums1.end());
    }
};