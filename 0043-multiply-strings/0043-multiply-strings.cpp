class Solution {
public:
    string multiply(string nums1, string nums2) 
    {
        int m=nums1.size();
        int n=nums2.size();
        if(nums1=="0"||nums2=="0")
        {
            return "0";
        }

        vector<int>result(m+n,0);
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                int a = nums1[i]-'0';
                int b = nums2[j]-'0';

                int product = a*b;

                int sum=product+result[i+j+1];
                result[i+j+1]=sum%10;
                result[i+j]+=sum/10;
            }
        }
        string ans="";
        for(int digit:result)
        {
            if(ans.empty()&&digit==0)
            {
                continue;
            }
            ans+=to_string(digit);
        }
        return ans;

        
    }
};