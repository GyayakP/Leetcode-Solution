// Last updated: 8/27/2026, 6:06:09 PM
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
16        for(char ch='a';ch<='z';ch++)
17        {
18            if(f[ch-'a']==0)
19            {
20                continue;
21            }
22            if(great==false&&ch<t[i])
23            {
24                continue;
25            }
26            curr.push_back(ch);
27            f[ch-'a']--;
28            bool isgreat=great||ch>t[i];
29            
30            if(perm(curr,f,i+1,t,isgreat))
31            {
32                return true;
33            }
34            curr.pop_back();
35            f[ch-'a']++;
36        }
37        return false;
38    }
39
40    string lexGreaterPermutation(string s, string t) {
41        vector<int> f(26,0);
42        for(char c:s)
43        {
44            f[c-'a']++;
45        }
46        string curr="";
47        perm(curr,f,0,t,false);
48        return ans;
49    }
50};