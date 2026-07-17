// Last updated: 7/17/2026, 7:46:56 PM
1class Solution {
2public:
3    bool buddyStrings(string s, string goal) {
4
5        if (s.size() != goal.size())
6            return false;
7        int i=-1;
8        int j=-1;
9
10        for (int p=0;p<s.size();p++) {
11
12            if(s[p]==goal[p])
13                continue;
14            if (i==-1)
15                i=p;
16            else if(j==-1)
17                j=p;
18            else
19                return false;
20        }
21
22        if (i==-1) {
23            unordered_set<char> st;
24            for (char c:s) {
25                if (st.count(c))
26                    return true;
27                st.insert(c);
28            }
29            return false;
30        }
31        if(j==-1)  
32            return false;
33        swap(s[i], s[j]);
34        return s==goal;
35    }
36};