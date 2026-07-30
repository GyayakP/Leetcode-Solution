// Last updated: 7/30/2026, 4:00:52 PM
1class Solution {
2public:
3    int minimumPushes(string w){
4        if(w.size()<9)
5        {
6            return w.size();
7        }
8        else if(w.size()<=16)
9        {
10            return ((w.size()-8)*2)+8;
11        }
12        else if(w.size()<=24)
13        {
14            return ((w.size()-16)*3)+24;
15        }
16        else
17        { 
18            return ((w.size()-24)*4)+48;
19        }
20    }
21};