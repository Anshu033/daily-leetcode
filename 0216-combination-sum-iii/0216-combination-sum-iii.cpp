class Solution {
public:

    void solve(int idx,int k , int target,vector<int>&curr,vector<vector<int>>&result)
    {
        if(target==0 && curr.size()==k)
        {
            result.push_back(curr);
            return;
        }

        if(target<0 || curr.size()>=k)
        {
            return;
        }
        for(int i = idx;i<=9;i++)
        {
            curr.push_back(i);
            solve(i+1,k,target-i,curr,result);

            curr.pop_back();

        }
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>>result;
        vector<int>curr;

        solve(1,k,n,curr,result);
        return result;
        
    }
};