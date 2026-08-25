// Last updated: 8/25/2026, 3:57:21 PM
1class Solution {
2public:
3    vector<vector<int>> ans;
4    void comb(vector<int>& nums,vector<int>& com,int t,int sum,int i)
5    {
6        if(sum==t||t==0)
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
20            if(sum + nums[j] > t)
21                break;
22
23            com.push_back(nums[j]);
24            comb(nums,com,t,sum+nums[j],j+1);
25            com.pop_back();
26        }
27        
28    }
29    vector<vector<int>> combinationSum2(vector<int>& nums, int t) {
30        vector<int> com;
31        sort(nums.begin(),nums.end());
32        comb(nums,com,t,0,0);
33        return ans;
34    }
35};