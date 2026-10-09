// Last updated: 10/9/2026, 11:33:50 PM
1class Solution {
2public:
3    int minInsertions(string s) {
4        int op=0;
5        int cp=0;
6
7        for(int i=0;i<s.size();i++)
8        {
9            if(s[i]=='(')
10            {
11                op++;
12            }
13            else
14            {
15                if(i+1<s.size()&&s[i+1]==')')
16                {
17                    i++;
18                }
19                else
20                {
21                    cp++;
22                }
23
24                if(op>0)
25                {
26                    op--;
27                }
28                else
29                    cp++;
30            }
31        }
32        return cp+2*op;
33    }
34};