// Last updated: 11/25/2026, 8:25:40 PM
1class Solution {
2public:
3    bool chk(int r, int c, int m, int n,vector<vector<int>>& nums)
4    {
5        for(int i=0;i<n;i++)
6        {
7            if(i==c)
8                continue;
9            if(nums[r][i]==1)
10                return true;
11        }
12        for(int i=0;i<m;i++)
13        {
14            if(i==r)
15                continue;
16            if(nums[i][c]==1)
17                return true;
18        }
19        return false;
20    }
21
22
23    int countServers(vector<vector<int>>& nums) {
24        int m=nums.size();
25        int n=nums[0].size();
26        int ans=0;
27        for(int i=0;i<m;i++)
28        {
29            for(int j=0;j<n;j++)
30            {
31                if(nums[i][j]==0)
32                    continue;
33                if(chk(i,j,m,n,nums))
34                {
35                    ans+=1;
36                }
37            }
38        }
39        return ans;
40    }
41};