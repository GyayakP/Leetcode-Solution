// Last updated: 9/13/2026, 5:25:12 PM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        for(int i=0;i<nums.size();i++)
5        {
6            int mx=0;
7            int mn=INT_MAX;
8            for(int j=0;j<=i;j++)
9            {
10                mx=max(mx,nums[j]);
11            }
12            for(int j=i;j<nums.size();j++)
13            {
14                mn=min(mn,nums[j]);
15            }
16            if(mx-mn<=k)
17            {
18                return i;
19            }
20        }
21        return -1;
22    }
23};