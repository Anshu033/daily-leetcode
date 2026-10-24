class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) 
    {
        vector<vector<int>>directions{{-1,0},{1,0},{0,-1},{0,1}};
        int m=grid.size();
        int n=grid[0].size();

        int original=grid[sr][sc];

        if(original==color)
        {
            return grid;
        }
        queue<pair<int,int>>q;
        q.push({sr,sc});
        grid[sr][sc]=color;

        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();

            int i=curr.first;
            int j=curr.second;

            for(auto &dir:directions)
            {
                int new_i=i+dir[0];
                int new_j=j+dir[1];

                  if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && grid[new_i][new_j]==original)
                    {
                        grid[new_i][new_j]=color;
                        q.push({new_i,new_j});
                        
                    }
            }
        }
        return grid;
        
    }
};