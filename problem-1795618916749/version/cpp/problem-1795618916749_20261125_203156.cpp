// Last updated: 11/25/2026, 8:31:56 PM
1class Solution {
2public:
3    int minMoves(vector<int>& nums) {
4        int mx=0;
5        for(int i:nums)
6        {
7            mx=max(mx,i);
8        }
9        int ans=0;
10        for(int i:nums)
11        {
12            ans+=mx-i;
13        }
14        return ans;
15    }
16};