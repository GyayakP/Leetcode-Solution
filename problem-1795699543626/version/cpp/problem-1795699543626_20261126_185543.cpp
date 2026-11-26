// Last updated: 11/26/2026, 6:55:43 PM
1class Solution {
2public:
3    int minMergedInteger(vector<int>& nums) {
4        int mn=INT_MAX;
5        for(int i=0;i<nums.size();i+=2)
6        {
7            int p=1;
8            int temp=nums[i+1];
9            while(temp!=0)
10            {
11                p*=10;
12                temp=temp/10;
13            }
14            int ans=nums[i]*p;
15            ans+=nums[i+1];
16            mn=min(mn,ans);
17        }
18        return mn;
19        
20    }
21};