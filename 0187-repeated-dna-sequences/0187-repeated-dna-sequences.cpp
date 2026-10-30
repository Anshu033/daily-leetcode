class Solution {
public:

// Questions says: -->  
//  ki tumhe ek n 10 size ki substring bnani hai jo usme 2 baar repeated ho kam se kam and unk ek ans vector me return krna hai ...
// 1. substr le le and freq bdha de and check kr kya freq 2 hai agar hai usko ans me dal de and return ans

    vector<string> findRepeatedDnaSequences(string s) 
    {
        int n=s.size();
        vector<string>ans;

        int k=10;

        unordered_map<string,int>freq;
        for(int i=0;i<=n-k;i++)
        {
            string sub=s.substr(i,k);

            freq[sub]++;

            if(freq[sub]==2)
            {
                ans.push_back(sub);
            }
        }
        return ans;

    }
};