// Last updated: 7/11/2026, 11:02:35 PM
1class Solution {
2public:
3    void comb(vector<vector<int>>& ans,vector<int>& com,int start, int k, int n)
4    {
5        if(n==0&&k==00)
6        {
7            ans.push_back(com);
8            return;
9        }
10        for(int i=start;i<=9;i++)
11        {
12            if(i>n||k<=0)
13                break;
14            com.push_back(i);
15            comb(ans,com,i+1,k-1,n-i);
16            com.pop_back();
17        }
18    }
19    vector<vector<int>> combinationSum3(int k, int n) {
20        vector<vector<int>> ans;
21        vector<int> com;
22
23        comb(ans,com,1,k,n);
24        return ans;
25    }
26};