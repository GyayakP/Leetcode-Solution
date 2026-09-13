// Last updated: 9/13/2026, 3:00:57 PM
1class Solution {
2public:
3    int overlap(vector<vector<int>>& A,vector<vector<int>>& B,int r,int c)
4    {
5        int n=A.size();
6        int cnt=0;
7        for(int i=0;i<n;i++)
8        {
9            for(int j=0;j<n;j++)
10            {
11                if(i+r<0||j+c<0||i+r>=n||j+c>=n||A[i][j]!=1)
12                    continue;
13                if(A[i][j]==B[i+r][j+c])
14                {
15                    cnt++;
16                }
17            }
18        }
19        return cnt;
20    }
21    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
22        int n=A.size();
23        int count=0;
24        for(int r=-n+1;r<n;r++)
25        {
26            for(int c=-n-1;c<n;c++)
27            {
28               count=max(count,overlap(A,B,r,c));  
29            }
30        }
31        return count;
32    }
33};