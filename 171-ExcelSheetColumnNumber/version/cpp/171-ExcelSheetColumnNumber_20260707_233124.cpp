// Last updated: 7/7/2026, 11:31:24 PM
1class Solution {
2public:
3    int titleToNumber(string ct) {
4        long long p=1;
5        long long ans=0;
6        for(int i=ct.size()-1;i>=0;i--)
7        {
8            ans=(ct[i]-64)*p+ans;
9            p*=26;
10        }
11        return ans;
12    }
13};