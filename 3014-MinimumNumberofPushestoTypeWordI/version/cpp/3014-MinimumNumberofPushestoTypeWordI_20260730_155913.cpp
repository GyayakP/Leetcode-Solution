// Last updated: 7/30/2026, 3:59:13 PM
1class Solution {
2public:
3    int minimumPushes(string w) {
4        int n=w.size();
5        if(n<9)
6            return n;
7        else if(n<=16)
8            return ((n-8)*2)+8;
9        else if(n<=24)
10            return ((n-16)*3)+24;
11        else 
12            return ((n-24)*4)+48;
13    }
14};