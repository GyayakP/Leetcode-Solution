// Last updated: 8/25/2026, 3:25:12 PM
1class Solution {
2public:
3    int missingMultiple(vector<int>& nums, int k) {
4        sort(nums.begin(),nums.end());
5        int mult=k;
6        for(int i:nums)
7        {
8            if(i==mult)
9            {
10                mult+=k;
11            }
12            else if(i>mult)
13            {
14                return mult;
15            }
16        }
17        return mult;
18    }
19};