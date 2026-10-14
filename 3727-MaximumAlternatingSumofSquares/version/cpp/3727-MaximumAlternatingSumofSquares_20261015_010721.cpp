// Last updated: 10/15/2026, 1:07:21 AM
1class Solution {
2public:
3    long long maxAlternatingSum(vector<int>& nums) {
4        for(int i=0;i<nums.size();i++)
5        {
6            nums[i]*=nums[i];
7        }
8        sort(nums.begin(),nums.end());
9
10        int i=0;
11        int j=nums.size()-1;
12        long long sum=0;
13        while(i<=j)
14        {
15            sum+=nums[j];
16            j--;
17            if(i<=j)
18            {
19                sum-=nums[i];
20            }
21            i++;
22        }
23        return sum;
24    }
25};