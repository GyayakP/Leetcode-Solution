// Last updated: 8/27/2026, 6:05:36 PM
1class Solution {
2public:
3    string ans="";
4
5    bool perm(string curr, vector<int>& f,int i,string& t,bool great)
6    {
7        if(i==t.size())
8        {
9            if(great)
10            {
11                ans=curr;
12                return true;
13            }
14            return false;
15        }
16        
17
18        for(char ch='a';ch<='z';ch++)
19        {
20            if(f[ch-'a']==0)
21            {
22                continue;
23            }
24            if(great==false&&ch<t[i])
25            {
26                continue;
27            }
28            curr.push_back(ch);
29            f[ch-'a']--;
30
31            bool isgreat=great||ch>t[i];
32            if(perm(curr,f,i+1,t,isgreat))
33            {
34                return true;
35            }
36            curr.pop_back();
37            f[ch-'a']++;
38        }
39        return false;
40    }
41
42    string lexGreaterPermutation(string s, string t) {
43        vector<int> f(26,0);
44        for(char c:s)
45        {
46            f[c-'a']++;
47        }
48        string curr="";
49        perm(curr,f,0,t,false);
50        return ans;
51    }
52};