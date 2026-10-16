// Last updated: 10/16/2026, 5:25:03 PM
1class Solution {
2public:
3    int sumOfSquares(vector<int>& nums) {
4        int sum=0;
5        for(int i=0;i<nums.size();i++)
6        {
7            if(nums.size()%(i+1)==0)
8            {
9                sum+=nums[i]*nums[i];
10            }
11        }
12        return sum;
13    }
14};