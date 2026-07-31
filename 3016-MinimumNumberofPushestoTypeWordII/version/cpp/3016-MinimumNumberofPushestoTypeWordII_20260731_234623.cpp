// Last updated: 7/31/2026, 11:46:23 PM
1class Solution {
2public:
3    int minimumPushes(string w) {
4        vector<int> f(26,0);
5        int ans=0;
6        for(int i=0; i<w.size();i++)
7        {
8            f[w[i]-'a']++;
9        }
10        sort(f.begin(),f.end(),greater<int>());
11
12        for(int i=0;i<26;i++)
13        {
14            ans+=f[i]*(i/8+1);
15        }
16        return ans;
17    }
18};