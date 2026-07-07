// Last updated: 7/7/2026, 11:46:40 PM
1class Solution {
2public:
3    string convertToTitle(int cn) {
4        string s = "";
5        while (cn>0) {
6            cn--;
7            s=char(cn%26+'A')+s;
8            cn/=26;
9        }
10        return s;
11    }
12};