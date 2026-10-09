// Last updated: 10/9/2026, 11:56:05 PM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        int op=-1;
5        string ans="";
6        for(int i=0;i<s.size();i++)
7        {
8            if(s[i]=='(')
9            {
10                op++;
11                if(op>0)
12                {
13                    ans.push_back(s[i]);
14                }
15            }
16            else
17            {
18                op--;
19                if(op>-1)
20                {
21                    ans.push_back(s[i]);
22                }
23            }
24        }
25        return ans;
26    }
27};