// Last updated: 10/19/2026, 11:23:26 AM
1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4        sort(nums.begin(),nums.end());
5        vector<int> ans;
6        for(int i=0;i<nums.size();i++)
7        {
8            if(nums[i]==target)
9                ans.push_back(i);
10        }
11        return ans;
12    }
13};