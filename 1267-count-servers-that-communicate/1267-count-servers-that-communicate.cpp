class Solution {
public:

    bool checkZero(vector<vector<int>>&grid,int i, int j)
    {
    int m= grid.size();
    int n=grid[0].size();
    for (int k=0;k<n;k++)
    {
        if(k!=j && grid[i][k]==1)
        {
            return false;
        }
    }
    for (int k=0;k<m;k++)
    {
        if(k!=i && grid[k][j]==1)
        {
            return false;
        }
    }
    return true; 
}
    int countServers(vector<vector<int>>& grid) 
    {
        
        int ans=0;
        int m= grid.size();
        int n=grid[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 1 && !checkZero(grid, i, j))
                {
                    ans++;
                }
            }
        }
        return ans;
        
    }
};
