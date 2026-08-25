// Last updated: 8/25/2026, 3:19:45 PM
1class Solution {
2public:
3    int missingMultiple(vector<int>& nums, int k) {
4        sort(nums.begin(),nums.end());
5        int mult=k;
6        while(k<=100)
7        {
8            if(!binary_search(nums.begin(),nums.end(),mult))
9            {
10                return mult;
11            }
12            mult+=k;
13        }
14        return mult; 
15    }
16};