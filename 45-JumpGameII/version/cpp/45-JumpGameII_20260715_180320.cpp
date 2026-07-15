// Last updated: 7/15/2026, 6:03:20 PM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int mxjump=0;
5
6        for(int i=0;i<nums.size();i++)
7        {
8            if(i>mxjump)
9                return false;
10            mxjump=max(nums[i]+i,mxjump);
11        }
12        return true;
13    }
14};