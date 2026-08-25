// Last updated: 8/25/2026, 3:53:55 PM
1class Solution {
2public:
3    vector<vector<int>> ans;
4    void comb(vector<int>& nums,vector<int>& com,int t,int sum,int i)
5    {
6        if(sum==t)
7        {
8            ans.push_back(com);
9            return;
10        }
11        if(sum>t||i==nums.size())
12        {
13            return;
14        }
15
16        for(int j=i;j<nums.size();j++)
17        {
18            if(j>i && nums[j]==nums[j-1])
19                continue;
20            sum+=nums[j];
21            com.push_back(nums[j]);
22            comb(nums,com,t,sum,j+1);
23            com.pop_back();
24            sum-=nums[j];
25        }
26        
27    }
28    vector<vector<int>> combinationSum2(vector<int>& nums, int t) {
29        vector<int> com;
30        sort(nums.begin(),nums.end());
31        comb(nums,com,t,0,0);
32        return ans;
33    }
34};