// Last updated: 7/6/2026, 6:51:05 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<=8;i++)
        {
            for(int j=0;j<=8;j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }
                else
                {
                    for(int k=0;k<9;k++)
                    {
                        if(k==j)
                            k++;
                        if(k==9)
                            break;
                        if(board[i][k]==board[i][j])
                            return false;
                        
                    }

                    for(int k=0;k<9;k++)
                    {
                        if(k==i)
                            k++;
                        if(k==9)
                            break;
                        if(board[k][j]==board[i][j])
                            return false;
                    }
                    int sr=(i/3)*3;
                    int sc=(j/3)*3;
                    for(int k=sr;k<=sr+2;k++)
                    {
                        for(int l=sc; l<=sc+2;l++)
                        {
                            if(k == i && l == j)
                                continue;

                            if(board[k][l] == board[i][j])
                                return false;
                                                
                        }
                    }

                }
            }
        }
        return true;
    }
};