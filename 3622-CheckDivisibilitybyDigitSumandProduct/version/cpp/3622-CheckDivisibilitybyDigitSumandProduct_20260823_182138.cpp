// Last updated: 8/23/2026, 6:21:38 PM
1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int sum=0;
5        int prod=1;
6        int t=n;
7        while(t!=0)
8        {
9            sum+=t%10;
10            prod*=t%10;
11            t/=10;
12        }
13
14        if(n%(sum+prod)==0) return true;
15        return false;
16    }
17};