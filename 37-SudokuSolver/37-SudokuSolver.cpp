// Last updated: 7/6/2026, 6:51:04 PM
class Solution {
public:
    bool issafe(vector<vector<char>>& board, int r, int c, char dig)
    {
        for(int j=0;j<9;j++)
        {
            if(board[r][j]==dig)
                return false;
            if(board[j][c]==dig)
            {
                return false;
            }
        }

        int sr=(r/3)*3;
        int sc=(c/3)*3;

        for(int k=sr; k<=sr+2; k++)
        {
            for(int j=sc; j<=sc+2; j++)
            {
                if(board[k][j]==dig)
                {
                    return false;
                }
            }
        }
        return true;

    }
    bool sudoku(vector<vector<char>>& board, int r, int c)
    {
        if(r==9)
        {
            return true;
        }
        if(board[r][c]!='.')
        {
            if(c+1==9)
            {
                return sudoku(board,r+1,0);
            }
            return sudoku(board,r,c+1);
        }
        for(char i='1';i<='9';i++)
        {
            if(issafe(board,r,c,i))
            {
                board[r][c]=i;
                if(c==8)
                {
                    if( sudoku(board,r+1,0))
                        return true;
                }
                else
                {   
                    if( sudoku(board,r,c+1))
                        return true;
                }
                board[r][c]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board,0,0);

        return ;
    }
};