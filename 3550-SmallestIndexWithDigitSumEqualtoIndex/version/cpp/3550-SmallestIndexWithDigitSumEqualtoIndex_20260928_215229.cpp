// Last updated: 9/28/2026, 9:52:29 PM
1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4        for(int i=0;i<nums.size();i++)
5        {
6            int dig=nums[i];
7            int sum=0;
8            while(dig!=0)
9            {
10                sum+=dig%10;
11                dig/=10;
12            }
13            if(i==sum)
14                return i;
15        }
16        return -1;
17    }
18};