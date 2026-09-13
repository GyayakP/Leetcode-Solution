// Last updated: 9/13/2026, 4:17:45 PM
1class Solution {
2public:
3    int count=0;
4    void combination(vector<int>& d,int dig,vector<int>& rep)
5    {
6        int n=d.size();
7        if(dig>=100)
8        {
9            if(dig%2==0)
10            {
11                count++;
12            }
13            return;
14        }
15        for(int i=0;i<n;i++)
16        {
17            if(rep[i])
18                continue;
19            if(dig==0&&d[i]==0)
20                continue;
21            if(i>0&&d[i]==d[i-1]&&!rep[i-1])
22                continue;
23
24            rep[i]=true;
25            combination(d,dig*10+d[i],rep);
26            rep[i]=false;
27        }
28        return;
29    }
30    int totalNumbers(vector<int>& d) {
31        sort(d.begin(),d.end());
32        vector<int> rep(d.size(),false);
33        combination(d,0,rep);
34        return count;
35    }
36};