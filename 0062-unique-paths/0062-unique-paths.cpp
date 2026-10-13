class Solution {
public:
    int m,n;
    int t[101][101];
    int result=0; 
    
    void backTrack(int i , int j)
    {
        if(i>=m || j>=n)
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
        backTrack(i+1,j);
        // right jao
        backTrack(i,j+1);
        t[i][j]=result-before;
    }
    int uniquePaths(int m, int n) 
    {
        this->m=m;
        this->n=n;
        memset(t,-1 , sizeof(t));
        result=0;
        backTrack(0,0);
        return result;

    }
};