// Last updated: 7/18/2026, 2:31:09 PM
1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4        int mn=1001;
5        int mx=0;
6        for(int i:nums)
7        {
8            mx=max(mx,i);
9            mn=min(mn,i);
10        }
11
12        return gcd(mn,mx);
13    }
14};