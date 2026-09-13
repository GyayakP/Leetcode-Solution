// Last updated: 9/13/2026, 5:24:55 PM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        // int mn=*min_element(nums.begin(),nums.end());
5        // vector<int> premax(nums.size(),0);
6        // vector<int> sufmin(nums.size(),0);
7        // if()
8        // for(int i=0;i<nums.size();i++)
9        // {
10
11        // }
12        for(int i=0;i<nums.size();i++)
13        {
14            int mx=0;
15            int mn=INT_MAX;
16            for(int j=0;j<=i;j++)
17            {
18                mx=max(mx,nums[j]);
19            }
20            for(int j=i;j<nums.size();j++)
21            {
22                mn=min(mn,nums[j]);
23            }
24            if(mx-mn<=k)
25            {
26                return i;
27            }
28        }
29        return -1;
30    }
31};