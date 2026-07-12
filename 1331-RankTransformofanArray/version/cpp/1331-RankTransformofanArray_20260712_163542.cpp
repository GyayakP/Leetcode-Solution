// Last updated: 7/12/2026, 4:35:42 PM
1class Solution {
2public:
3    vector<int> arrayRankTransform(vector<int>& arr) {
4        if(arr.size()==0)
5        {
6            return {};
7        }
8        vector<int> ans(arr.size());
9        vector<pair<int,int>> p;
10
11        for(int i=0;i<arr.size();i++)
12        {
13            p.push_back({arr[i],i});
14        }
15        sort(p.begin(),p.end());
16        int rank=1;
17        ans[p[0].second]=rank;
18        for(int i=1;i<p.size();i++)
19        {
20            if (p[i].first!=p[i-1].first)
21                rank++;
22            ans[p[i].second]=rank;
23        }
24        return ans;
25    }
26};