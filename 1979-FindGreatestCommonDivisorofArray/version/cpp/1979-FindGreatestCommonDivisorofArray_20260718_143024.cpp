// Last updated: 7/18/2026, 2:30:24 PM
1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4        int mn=INT_MAX;
5        int mx=INT_MIN;
6
7        for(int i:nums)
8        {
9            mx=max(mx,i);
10            mn=min(mn,i);
11        }
12
13        return gcd(mn,mx);
14    }
15};