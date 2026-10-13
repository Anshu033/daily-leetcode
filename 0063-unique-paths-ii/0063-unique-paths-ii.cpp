class Solution {
public:
    int m,n;
    int t[101][101];
    int result=0; 
    
    void backTrack(vector<vector<int>>&grid,int i , int j)
    {
        if(i>=m || j>=n || grid[i][j]==1)
        {
            return;
        }
        if(i==m-1 && j==n-1)
        {
        result++;
        return;
        }
        if(t[i][j]!=-1)
        {
            result+=t[i][j];
            return ;
        }
        int before = result;
        // Down jao
        backTrack(grid,i+1,j);
        // right jao
        backTrack(grid,i,j+1);
        t[i][j]=result-before;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)  
    {
        m=obstacleGrid.size();
        n=obstacleGrid[0].size();
        memset(t,-1 , sizeof(t));
        result=0;
        backTrack(obstacleGrid,0,0);
        return result;

    }
};
   
        
    