class Solution {
public:

//   Logic:
  
//   Agar height[left] <= height[right]:
//   Left side process karenge.
//   leftMax update karenge.
//   if not then
//   Water add karenge: leftMax - height[left].
//   left++

//   Otherwise:
//   Right side process karenge.
//   rightMax update karenge.
//   if not then
//   Water add karenge: rightMax - height[right].
//   right--
    int trap(vector<int>& height) 
    {
        int n=height.size();
        // do pointers
        int left=0;
        int right=n-1;

        // do variables
        int leftMax=0;
        int rightMax=0;

        int water=0;

        while(left<right)
        {
            // left part
            if(height[left]<=height[right])
            {
                if(height[left]>=leftMax)
                {
                    leftMax=height[left];
                }
                else
                {
                    water+=leftMax-height[left];
                }
                left++;
            }
         // right part
            else
            {
                
                if(height[right]>=rightMax)
                {
                    rightMax=height[right];
                }
                else
                {
                    water+=rightMax-height[right];
                }
                right--;
            }
        }
        return water;
        
    }
};