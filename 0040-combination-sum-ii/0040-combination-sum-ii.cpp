class Solution {
public:

    void solve(vector<int>&candidates,int target,vector<int>&curr,int idx, vector<vector<int>>&result)
    {
        if(target==0)
        {
            result.push_back(curr);
            return;
        }
        for(int i = idx;i<candidates.size();i++)
        {
            if(i>idx && candidates[i]==candidates[i-1])
            {
                continue;
            }

            if(candidates[i] > target)
                break;
            // do
            curr.push_back(candidates[i]);

            //explore
            solve(candidates,target-candidates[i],curr,i+1,result);
            
            //undo
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>>result;
        vector<int>curr;
        sort(begin(candidates),end(candidates));

        solve(candidates, target, curr, 0, result);
        return result;
        
    }
};