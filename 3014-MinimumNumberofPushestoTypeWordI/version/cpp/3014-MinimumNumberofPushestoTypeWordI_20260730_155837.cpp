// Last updated: 7/30/2026, 3:58:37 PM
1class Solution {
2public:
3    int minimumPushes(string w) {
4        int n=w.size();
5        if(n<9)
6        {
7            return n;
8        }
9        else if(n<=16)
10        {
11            return ((n-8)*2)+8;
12        }
13        else if(n<=24)
14        {
15            return ((n-16)*3)+24;
16        }
17        else 
18            return ((n-24)*4)+48;
19    }
20};