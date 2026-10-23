class Solution {
public:

    int dfs(vector<vector<int>>& grid,int i,int j)
    {
        int m=grid.size();
        int n=grid[0].size();

        if(i<0||j<0||i>=m||j>=n||grid[i][j]==0 )
        {
            return 0;

        }

        // mark visited
        grid[i][j]=0;
        int count=1;

        // directions
        count+=dfs(grid,i-1,j); //up
        count+=dfs(grid,i+1,j); //down
        count+=dfs(grid,i,j-1); //left
        count+=dfs(grid,i,j+1); //right

        return count;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        int maxi=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    int count=dfs(grid,i,j);
                    maxi=max(maxi,count);
                }
            }
           
        }
         return maxi;
        
    }
};