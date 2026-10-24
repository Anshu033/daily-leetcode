class Solution {
public:
    bool dfs(vector<vector<int>>& grid1,
             vector<vector<int>>& grid2,
             int i, int j)
    {
        int m = grid2.size();
        int n = grid2[0].size();

        if(i < 0 || j < 0 || i >= m || j >= n ||
           grid2[i][j] == 0)
        {
            return true;
        }

        grid2[i][j] = 0;

        bool result = true;

        if(grid1[i][j] == 0)
            result = false;

        bool up = dfs(grid1, grid2, i-1, j);
        bool down = dfs(grid1, grid2, i+1, j);
        bool left = dfs(grid1, grid2, i, j-1);
        bool right = dfs(grid1, grid2, i, j+1);

        return result && up && down && left && right;
    }

    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2)
    {
        int m = grid2.size();
        int n = grid2[0].size();

        int count = 0;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid2[i][j] == 1)
                {
                    if(dfs(grid1, grid2, i, j))
                        count++;
                }
            }
        }

        return count;
    }
};