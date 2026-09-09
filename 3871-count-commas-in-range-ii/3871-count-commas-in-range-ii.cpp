// class Solution {
// public:
//     long long countCommas(long long L,long long R) 
//     {
//         long long  ans=0;
//         long long number=1000;
//         long long commas=1;


// // Assume L-> starting point 
// // Assume R->ending number
//         while(number<=R)
//         {
//             // group bnate h ek comma ka
//             long long start=max(L,number);
//             long long end=min(R,number*1000-1);

//             if(start<=end)//l<=R
//             {
//                 ans+=(end-start+1)*commas;
//             }
//             number*=1000;
//             commas++;

//         }
//         return ans;
         
        
//     }
// };

class Solution {
public:
    long long countCommas(long long n) 
    {
        long long ans = 0;
        long long number = 1000;
        long long commas = 1;

        while(number <= n)
        {
            long long start = number;
            long long end = min(n, number* 1000 - 1);

            if(start <= end)
            {
                ans += (end - start + 1) * commas;
            }

            number *= 1000;
            commas++;
        }

        return ans;
    }
};