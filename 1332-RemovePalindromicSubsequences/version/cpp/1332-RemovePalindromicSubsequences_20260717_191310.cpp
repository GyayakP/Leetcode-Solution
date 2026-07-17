// Last updated: 7/17/2026, 7:13:10 PM
1class Solution {
2public:
3    int removePalindromeSub(string s) {
4        if(s.size()==0)
5            return 0;
6        int i=0;
7        while(i<s.size()-1-i)
8        {
9            if(s[i]!=s[s.size()-1-i])
10            {
11                return 2;
12            }
13            i++;
14        }
15        return 1;
16    }
17};