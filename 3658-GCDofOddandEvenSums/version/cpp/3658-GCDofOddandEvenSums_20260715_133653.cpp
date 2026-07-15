// Last updated: 7/15/2026, 1:36:53 PM
1class Solution {
2public:
3    int gcdOfOddEvenSums(int n) {
4        int e=0;
5        int o=0;
6        for(int i=1;i<=2*n;i++)
7        {
8            if(i%2==0)
9                e=i+e;
10            else
11                o=i+o;  
12        }
13        while(e>0&&o>0)
14        {
15                if(e>o)
16                    e=e%o;
17                else
18                    o=o%e;
19        } 
20        if(e==0) return o;
21        return e;
22    }
23};