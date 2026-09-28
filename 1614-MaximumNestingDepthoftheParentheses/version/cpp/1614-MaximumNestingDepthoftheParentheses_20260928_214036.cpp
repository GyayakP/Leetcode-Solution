// Last updated: 9/28/2026, 9:40:36 PM
1class Solution {
2public:
3    int maxDepth(string s) {
4        int mx=0;
5        int cnt=0;
6        // stack<char> st;
7        for(char c:s)
8        {
9            if(c=='(')
10            {
11                cnt++;
12                mx=max(cnt,mx);
13            }
14            else if(c==')')
15            {
16                cnt--;
17            }
18        }
19        return mx;
20    }
21};