// Last updated: 9/28/2026, 9:41:02 PM
1class Solution {
2public:
3    int maxDepth(string s) {
4        int mx=0;
5        int cnt=0;
6        for(char c:s)
7        {
8            if(c=='(')
9            {
10                cnt++;
11                mx=max(cnt,mx);
12            }
13            else if(c==')')
14                cnt--;
15        }
16        return mx;
17    }
18};