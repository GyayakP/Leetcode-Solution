// Last updated: 8/25/2026, 4:25:58 PM
1class Solution {
2public:
3    void par(vector<string>& ans,string& s,int n,int o,int c)
4    {
5        if(o+c==2*n)
6        {
7            ans.push_back(s);
8            return;
9        }
10        if(o<n)
11        {
12            s.push_back('(');
13            par(ans,s,n,o+1,c);
14            s.pop_back();
15        }
16        if(c<o)
17        {
18            s.push_back(')');
19            par(ans,s,n,o,c+1);
20            s.pop_back();
21        }
22    }
23    vector<string> generateParenthesis(int n) {
24        vector<string> ans;
25        string s;
26        par(ans,s,n,0,0);
27        return ans;
28    }
29};