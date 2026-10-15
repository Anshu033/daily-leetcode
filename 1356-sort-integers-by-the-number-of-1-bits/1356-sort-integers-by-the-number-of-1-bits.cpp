class Solution {
public:
    // Functions----->

    int countOneBits(int arr)
       {
        int count=0;
        while(arr)
        {
            count+=arr&1;
            arr>>=1;
        }
        return count;
       }

    vector<int> sortByBits(vector<int>& arr) 
    {
       auto lambda = [&] (int &a,int &b)
        {
            int count_a = countOneBits(a);
            int count_b = countOneBits(b);

            if(count_a == count_b)
            {
                return a<b;
            }
            return count_a < count_b;
        };
        
        sort(begin(arr),end(arr),lambda);
        return arr;
        
    }
};