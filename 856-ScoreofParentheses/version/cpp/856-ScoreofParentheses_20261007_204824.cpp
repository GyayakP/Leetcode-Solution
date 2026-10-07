// Last updated: 10/7/2026, 8:48:24 PM
1class Solution {
2public:
3    int scoreOfParentheses(string s) {
4        int valpar=0;
5        int score=0;
6        for(int i=0;i<s.size();i++)
7        {
8            if(s[i]=='(')
9                valpar++;
10            else
11            {
12                valpar--;
13                if(s[i-1] == '(')
14                    score+=(1<<valpar);
15            }
16        }
17        return score;
18            
19    }
20};