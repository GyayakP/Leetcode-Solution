// Last updated: 7/17/2026, 7:16:51 PM
1class Solution {
2public:
3    int removePalindromeSub(string s) {
4        if(s=="") return 0;
5        int i=0;
6        while(i<s.size()-1-i) 
7        {
8            if(s[i]!=s[s.size()-1-i])
9                return 2;
10            i++;
11        }
12        return 1;
13    }
14};