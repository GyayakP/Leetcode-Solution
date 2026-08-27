// Last updated: 8/28/2026, 12:43:30 AM
1class Solution {
2public:
3    string shortestBeautifulSubstring(string s, int k) {
4        int count=0; //count the ones in string
5        int mnsize=101; // as Constraints is less then 100
6        int i=0;
7        int j=0;
8        string ans="";
9        int n=s.size();
10        for(int j=0;j<n;j++)
11        {
12            if(s[i]=='0')
13                i++;
14            if(s[j]=='1')
15            {
16                count++;
17            }
18
19            while(count>k)
20            {
21                if(s[i]=='1')
22                {
23                    count--;
24                }
25                i++;
26            }
27            while(count==k&&s[i]=='0')
28            {
29                i++;
30            }
31            if(count==k)
32            {
33                string curr=s.substr(i, j-i+1);
34                if (curr.size() < mnsize ||(curr.size() == mnsize && curr < ans)) {
35                    mnsize = curr.size();
36                    ans = curr;
37                }
38            }
39
40        }
41        return ans;
42    }
43};