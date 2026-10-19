// Last updated: 10/19/2026, 11:24:25 AM
1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4        vector<int> ans;
5        sort(nums.begin(),nums.end());
6        for(int i=0;i<nums.size();i++)
7        {
8            if(nums[i]==target) ans.push_back(i);
9        }
10        return ans;
11    }
12};