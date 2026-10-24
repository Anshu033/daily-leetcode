class Solution {

public:

    int n, m;

    bool isValid(int i, int j, vector<vector<int>>& grid)
    {
        return i >= 0 && j >= 0 && i < n && j < m
               && grid[i][j] == 1;
    }

    void dfs(vector<vector<int>>& grid, int i, int j)
    {
        grid[i][j] = 0;// jaha se dfs marunga usko phle visited mark kar diya

        if(isValid(i+1, j, grid))
            dfs(grid, i+1, j);

        if(isValid(i-1, j, grid))
            dfs(grid, i-1, j);

        if(isValid(i, j+1, grid))
            dfs(grid, i, j+1);

        if(isValid(i, j-1, grid))
            dfs(grid, i, j-1);
    }

    int numEnclaves(vector<vector<int>>& grid)
    {
        n = grid.size();
        m = grid[0].size();

        // Left and right boundaries
        for(int i = 0; i < n; i++)
        {
            if(grid[i][0] == 1)
                dfs(grid, i, 0);

            if(grid[i][m-1] == 1)
                dfs(grid, i, m-1);
        }

        // Top and bottom boundaries
        for(int j = 0; j < m; j++)
        {
            if(grid[0][j] == 1)
                dfs(grid, 0, j);

            if(grid[n-1][j] == 1)
                dfs(grid, n-1, j);
        }

        // Count remaining land cells
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 1)
                    count++;
            }
        }

        return count;
    }
};