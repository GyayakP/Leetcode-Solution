// Last updated: 9/13/2026, 4:47:20 PM
1class Solution {
2public:
3    int countCommas(int n) {
4        if(n==100000)
5        {
6            return 99001;
7        }
8        if(n>999)
9        {
10            return n-999;
11        }
12        return 0;
13    }
14};