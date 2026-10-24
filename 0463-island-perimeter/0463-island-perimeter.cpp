class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j )
    {
        int m=grid.size();
        int n=grid[0].size();

        if(i<0||j<0||i>=m||j>=n||grid[i][j]==0 )
        {
            return 1;

        }
        if(grid[i][j]==-1)
        {
            return 0;
        }

        // mark visited
        grid[i][j]=-1;

        int perimeter=0;

        // directions
        perimeter+=dfs(grid,i-1,j); //up
        perimeter+=dfs(grid,i+1,j); //down
        perimeter+=dfs(grid,i,j-1); //left
        perimeter+=dfs(grid,i,j+1); //right

        return perimeter;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    return dfs(grid,i,j);
                }
            }
           
        }
        return 0;
        
    }
};