class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        // First 9: 9 rows ko represent karta hai.
        //Second 9: Har row ke andar 9 digits (1-9) ko track karta hai.
        int row[9][9]={0};
        int col[9][9]={0};
        int box[9][9]={0};

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }

                // index nikalo
                int num=board[i][j]-'1';
                int boxIndex=(i/3)*3+(j/3);

                // phle se hi marked hai toh false do isko

                if(row[i][num]||col[j][num]||box[boxIndex][num])
                {
                    return false;
                }
                // mark kro
                row[i][num]=1;
                col[j][num]=1;
                box[boxIndex][num]=1;


            }
        }
        return true;
        
    }
};