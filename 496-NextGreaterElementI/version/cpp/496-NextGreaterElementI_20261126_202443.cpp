// Last updated: 11/26/2026, 8:24:43 PM
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> ans(nums1.size(),-1);
5
6        for(int i=0;i<nums1.size();i++)
7        {
8            int idx;
9            for(int j=0;j<nums2.size();j++)
10            {
11                if(nums2[j]==nums1[i])
12                {
13                    idx=j;
14                    break;
15                }
16            }
17            for(int j=idx+1;j<nums2.size();j++)
18            {
19                if(nums2[j]>nums1[i])
20                {
21                    ans[i]=nums2[j];
22                    break;
23                }
24            }
25        }
26        return ans;
27    }
28};