// Last updated: 7/15/2026, 4:24:53 PM
1class Solution {
2public:
3    int count=0;
4    bool isSafe(vector<string>& board,int r,int c,int n)
5    {
6        for(int j=0; j<n; j++)
7        {
8            if(board[r][j]=='Q')
9                return false;
10        }
11
12        for(int i=0; i<n; i++)
13        {
14            if(board[i][c]=='Q')
15                return false;
16        }
17
18        for(int i=r, j=c; i>=0&&j>=0; i--,j--)
19        {
20            if(board[i][j]=='Q')
21                return false;
22        }
23
24        for(int i=r, j=c; i>=0&&j<n; i--,j++)
25        {
26            if(board[i][j]=='Q')
27                return false;
28        }
29        return true;
30
31    }
32
33    void nqueens(vector<string>& board,vector<vector<string>>& ans, int r, int n)
34    {
35        if(r==n)
36        {
37            ans.push_back({board});
38            count++;
39            return;
40        }
41
42        for(int j=0;j<n;j++)
43        {
44            if(isSafe(board,r,j,n))
45            {
46                board[r][j]='Q';
47                nqueens(board,ans,r+1,n);
48                board[r][j]='.';
49            }
50
51        }
52    }
53    int totalNQueens(int n){
54        vector<string> board(n,string(n,'.'));
55        vector<vector<string>> ans;
56
57        nqueens(board,ans,0,n);
58        return count;
59    }
60};