class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int m=mat.size();
        int n=mat[0].size();

        if(m*n!=r*c)
        {
            return mat;
        };
        vector<vector<int>>ans(r,vector<int>(c,0));
        int row=0,column=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[row][column]=mat[i][j];
                column++;

            if(column==c)
            {
                column=0;
                row++;
            }

            }
           
        }
        return ans;
        
    }
};