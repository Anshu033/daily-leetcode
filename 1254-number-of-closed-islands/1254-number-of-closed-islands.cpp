class Solution {
public:
    bool dfs(vector<vector<int>>& grid,int r , int c)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(r<0||c<0||r>=m||c>=n)
        return false;

        if (grid[r][c] == 1)
        return true;

        // visited mark
        grid[r][c] = 1;

        bool left_closed=dfs(grid,r,c-1);
        bool right_closed=dfs(grid,r,c+1);
        bool up_closed=dfs(grid,r-1,c);
        bool down_closed=dfs(grid,r+1,c);

        return left_closed && right_closed && up_closed && down_closed;

       
    }
    int closedIsland(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();

        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                {
                    if(dfs(grid,i,j)==true)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
        
    }
};