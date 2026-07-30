// Last updated: 7/30/2026, 3:57:18 PM
1class Solution {
2public:
3    int minimumPushes(string w) {
4        // vector<int> f(26,0);
5        // int count=0;
6        // for(int i=0;i<w.size();i++)
7        // {
8        //     f[w[i]-'a']++;
9        //     if(f[w[i]-'a']>1)
10        //     {
11        //         count++;
12        //     }
13        // }
14
15        int n=w.size();
16        if(n<9)
17        {
18            return n;
19        }
20        else if(n>8&&n<=16)
21        {
22            return ((n-8)*2)+8;
23        }
24        else if(n>16&&n<=24)
25        {
26            return ((n-16)*3)+24;
27        }
28        else 
29            return ((n-24)*4)+48;
30    }
31};